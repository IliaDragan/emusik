<?php
/**
 * @file
 * eMusik playlist plugin definition and display logic.
 */

$plugin = array(
  'title' => t('eMusik playlist'),
  'description' => t('eMusik playlist'),
  'single' => TRUE,
  'render callback' => 'emusik_playlists_content_type_render',
  'edit form' => 'emusik_playlists_content_type_edit_form',
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'category' => t('eMusik'),
);

/**
 * Implements hook_hook_content_type_edit_form().
 */
function emusik_playlists_content_type_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Plugin renderer.
 */
function emusik_playlists_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $node = isset($context->data) ? $context->data : NULL;

  if (is_object($node)) {
    $block->title = t('eMusik playlist');
    $markup = NULL;
    $primary_node = NULL;

    if ($node->type != 'emusik_playlist') {
      $items = field_get_items('node', $node, 'field_ref_playlist');
      $referenced_node = isset($items[0]['nid']) ? node_load($items[0]['nid']) : NULL;

      if (is_object($referenced_node)) {
        $primary_node = $referenced_node;
        $markup = drupal_render(entity_view('node', array($referenced_node), 'full'));
      }
    }
    else {
      $primary_node = $node;
    }

    if (is_object($primary_node)) {
      foreach ($primary_node->option as $key => $option) {
        $markup .= theme('emusik_playlist_item', array(
          'i' => $key + 1,
          'title' => $option['track_title'],
          'artist' => $option['track_artist'],
          'spotify' => $option['spotify_link'],
          'wimp' => $option['wimp_link'],
          'bibzoom' => $option['bibzoom_link'],
        ));
      }

      $markup = theme('emusik_playlist_wrapper', array('playlist_content' => $markup));
    }

    $block->content = $markup;
  }

  return $block;
}
