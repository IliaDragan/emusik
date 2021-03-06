<?php
/**
 * @file
 * Handles the creation of XML feed, based on playlist nodes.
 */

define('FIELD_PROCESS_PLAIN', 'process_plain');
define('FIELD_PROCESS_FILE', 'process_file');
define('FIELD_PROCESS_TAXONOMY', 'process_taxonomy');
define('FIELD_PROCESS_PLAYLIST', 'process_playlist');

/**
 * Menu callback.
 *
 * Prepares the playlists feed and outputs it.
 */
function emusik_playlists_feed($tid = NULL) {
  drupal_add_http_header('Content-Type', 'application/xml');
  $xml = emusik_playlists_feed_get_xml($tid);
  echo $xml;

  drupal_exit();
}

/**
 * Builds the XML structure, based on available items (playlist nodes).
 *
 * @return String
 *   XML structured response.
 */
function emusik_playlists_feed_get_xml($tid = NULL) {
  $xml_tree = new SimpleXmlElement('<emusik></emusik>');
  $nodes = emusik_playlists_feed_get_playlists($tid);

  if (count($nodes) > 0) {
    emusik_playlists_feed_build_xml_tree($xml_tree, $nodes);
  }

  return $xml_tree->asXml();
}

/**
 * Fetches all available playlist node types.
 *
 * @return Array/Boolean
 *   An array of node objects.
 */
function emusik_playlists_feed_get_playlists($tid = NULL) {
  $entities = new EntityFieldQuery();


  $_SESSION['emp_data']['current_tid'] = $tid;
  $ent_ids = $entities->entityCondition('entity_type', 'node')
    ->propertyCondition('type', 'emusik_playlist')
    ->propertyOrderBy('created', 'DESC')
    ->addTag('emp_feed')
    ->execute();

  $playlists = !empty($ent_ids['node']) ? node_load_multiple(array_keys($ent_ids['node'])) : array();

  return $playlists;
}

/**
 * Implements HOOK_query_TAG_alter().
 *
 * Since there is no way to do JOIN's in entity query, alter the query via
 * a hook.
 *
 * @param QueryAlterableInterface $query
 *   Query object, tagged lately with TAG tag.
 */
function emusik_playlists_query_emp_feed_alter($query) {
  if ($_SESSION['emp_data']['current_tid']) {
    $tid = $_SESSION['emp_data']['current_tid'];
    $query->join('taxonomy_index', 'txid', 'txid.nid = node.nid');
    $query->condition('txid.tid', $tid);
  }
}

/**
 * Builds an XML structure tree, with data provided from node fields.
 *
 * @param SimpleXmlElement $tree
 *   Root tree element reference.
 * @param Array $nodes
 *   Array of nodes, which are t obe used as data source.
 */
function emusik_playlists_feed_build_xml_tree(&$tree, $nodes) {
  $node_fields = array('body');

  $field_map = array(
    'body' => 'body',
    'field_playlist_image' => 'image',
    'field_pl_artist_album_track' => 'artist',
    'field_playlist_article_type' => 'type',
    'field_playlist_category' => 'category',
    'field_playlist_material_type' => 'material',
    'field_playlist_supplier' => 'supplier',
    'field_playlist_tags' => 'tags',
    'field_playlist' => 'tracks',
  );

  // Filter through node object fields. Title/default body is always present, so it's ommitted.
  foreach (reset($nodes) as $k => $v) {
    if (strstr($k, 'field_')) {
      $node_fields[] = $k;
    }
  }

  foreach ($nodes as $node) {
    $playlist_tag = $tree->addChild('playlist');

    $playlist_tag->addChild('title', $node->title);
    $playlist_tag->addChild('created', $node->created);
    $playlist_tag->addChild('link', url('node/' . $node->nid, array('absolute' => TRUE)));

    $user = user_load($node->uid);
    $playlist_tag->addChild('author', $user->name);

    foreach ($node_fields as $field) {
      $field_item = field_get_items('node', $node, $field, $node->language);

      if ($field_item) {
        $field_process = FIELD_PROCESS_PLAIN;

        // File fields.
        if (isset($field_item[0]['fid'])) {
          $field_process = FIELD_PROCESS_FILE;
        }
        // Taxonomy fields.
        elseif (isset($field_item[0]['tid'])) {
          $field_process = FIELD_PROCESS_TAXONOMY;
        }
        // Playlist fields.
        elseif (isset($field_item[0]['youtube_link'])) {
          $field_process = FIELD_PROCESS_PLAYLIST;
        }

        // Since fields are renderable arrays, we need only values from those fields.
        // Therefore, every field is parsed in a specific way.
        $processed_value = emusik_playlists_feed_process_field($field_item, $field_process);

        if (in_array($field, array_keys($field_map))) {
          $field_tag = $playlist_tag->addChild($field_map[$field]);

          foreach ($processed_value as $value) {
            foreach ($value as $key => $data) {
              if (is_array($value[$key])) {
                $wrapper = $field_tag->addChild($key);

                foreach ($data as $k => $v) {
                  $wrapper->addChild($k, htmlspecialchars($v));
                }
              }
              else {
                $field_tag->addChild($key, htmlspecialchars($data));
              }
            }
          }
        }
      }
    }
  }
}

/**
 * Processes the field, fetching only the field value.
 *
 * This function takes int oconsideration field type, having different
 * structure among them.
 *
 * @param Array $field
 *   Field render array.
 * @param String $process
 *   Type identifier, indicating how the field is read the field value.
 *
 * @return Array
 *   A set of values, with identical structure for any field.
 */
function emusik_playlists_feed_process_field($field, $process) {
  $output = array();

  foreach ($field as $delta => $item) {
    switch ($process) {
      case FIELD_PROCESS_PLAIN:
        $output[$delta] = array(
          'value' => !empty($item['safe_value']) ? strip_tags($item['safe_value'], '<br><b><p><strong>') : '',
          'summary' => !empty($item['safe_summary']) ? strip_tags($item['safe_summary'], '<br><b><p><strong>') : '',
        );
        break;
      case FIELD_PROCESS_FILE:
        $output[$delta] = array(
          'path' => !empty($item['uri']) ? file_create_url($item['uri']) : '',
        );
        break;
      case FIELD_PROCESS_TAXONOMY:
        $term = !empty($item['tid']) ? taxonomy_term_load($item['tid']) : '';

        $output[$delta] = array(
          'term' => is_object($term) ? $term->name : '',
        );
        break;
      case FIELD_PROCESS_PLAYLIST:
        foreach ($item as $label => $value) {
          $output[$delta]['track'][$label] = $value;
        }
        break;
    }
  }

  return $output;
}
