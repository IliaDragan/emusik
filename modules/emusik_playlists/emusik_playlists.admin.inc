<?php
/**
 * @file
 *
 */

/**
 * Playlist feeds settings form.
 *
 * @ingroup admin_forms
 */
function emusik_playlists_admin_form($form, $form_state) {
  $taxonomy_voc = taxonomy_vocabulary_machine_name_load('emusik_tx_material_type');
  $taxonomy_vid = is_object($taxonomy_voc) ? $taxonomy_voc->vid : NULL;
  if ($taxonomy_vid) {
    $tree = taxonomy_get_tree($taxonomy_vid);

    $form['emusik_playlist_feeds'] = array(
      '#tree' => TRUE,
      '#theme' => 'emusik_playlists_feeds_table',
    );

    $defaults = variable_get('emusik_playlist_feeds_filter', array());

    $c = count($tree);
    for ($i = 0; $i < $c; $i++) {

      $form['emusik_playlist_feeds'][$i]['feed_enabled'] = array(
        '#type' => 'checkbox',
        '#default_value' => !empty($defaults[$i]['feed_enabled']) ? $defaults[$i]['feed_enabled'] : FALSE,
      );

      $form['emusik_playlist_feeds'][$i]['feed_path'] = array(
        '#prefix' => '<div class="feed-path-label">emusik/feed/</div>',
        '#type' => 'textfield',
        '#default_value' => !empty($defaults[$i]['feed_path']) ? $defaults[$i]['feed_path'] : preg_replace('@[^a-z0-9_]+@', '_', strtolower($tree[$i]->name)),
        '#extra_data' => array('feed_term_name' => $tree[$i]->name),
        '#required' => TRUE,
      );

      $form['emusik_playlist_feeds'][$i]['feed_term_tid'] = array(
        '#type' => 'hidden',
        '#value' => $tree[$i]->tid,
      );
    }

    $form['#attached']['css'] = array(
      drupal_get_path('module', 'emusik_playlists') . '/css/admin.styles.css',
    );

    $form['emusik_playlists_feeds_description'] = array(
      '#type' => 'item',
      '#markup' => '<em>' . t('@note', array('@note' => 'Illegal caharacters will be filtered.')) . '</em>',
    );

    $form['#submit'] = array('emusik_playlists_admin_form_submit');

    return system_settings_form($form);
  }
  else {
    drupal_set_message('No term found in specified vocabulary.');
  }
}

/**
 * Custom submit handler for admin form.
 *
 * Since system_settings_form() automatically saves field data into variables,
 * some specific save routine is required, since it cannot be overriden.
 *
 * @see emusik_playlists_admin_form(),
 *
 * @ingroup admin_forms
 */
function emusik_playlists_admin_form_submit($form, &$form_state) {
  $input = $form_state['input'];

  if (isset($input['emusik_playlist_feeds'])) {
    foreach ($input['emusik_playlist_feeds'] as &$v) {
      $v['feed_path'] = preg_replace('@[^a-z0-9_]+@', '_', strtolower($v['feed_path']));
    }

    variable_set('emusik_playlist_feeds_filter', $input['emusik_playlist_feeds']);
    // Hope u know what's that doing...
    menu_rebuild();
  }
}

/**
 * Theme callback, specific for current admin data display.
 *
 * This arranges fields into a table view.
 *
 * @see emusik_playlists_theme(), emusik_playlists_admin_form(),
 *
 * @param array $vars
 *   Array of elements as passed from theme hook.
 *
 * @return string
 *   Markup for processed elements.
 */
function theme_emusik_playlists_feeds_table($vars) {
  $element = $vars['element'];

  $rows = array();

  foreach (element_children($element) as $key) {
    $rows[] = array(
      array('data' => render($element[$key]['feed_enabled'])),
      array('data' => $element[$key]['feed_path']['#extra_data']['feed_term_name']),
      array('data' => render($element[$key]['feed_path']) . render($element[$key]['feed_term_tid'])),
      array('data' => l(t('Feed'), 'emusik/feed/' . $element[$key]['feed_path']['#default_value']), array('absolute' => TRUE))
    );
  }

  $header = array(
    t('Enabled'),
    t('Genre'),
    t('Path'),
    t('Preview'),
  );

  return theme('table', array('header' => $header, 'rows' => $rows));
}
