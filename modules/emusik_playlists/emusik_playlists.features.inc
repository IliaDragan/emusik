<?php
/**
 * @file
 * emusik_playlists.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function emusik_playlists_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function emusik_playlists_node_info() {
  $items = array(
    'emusik_playlist' => array(
      'name' => t('Playlist'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
