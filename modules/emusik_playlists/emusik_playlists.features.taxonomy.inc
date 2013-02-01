<?php
/**
 * @file
 * emusik_playlists.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function emusik_playlists_taxonomy_default_vocabularies() {
  return array(
    'emusik_tx_article_type' => array(
      'name' => 'Article Type',
      'machine_name' => 'emusik_tx_article_type',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'emusik_tx_artist_album_track' => array(
      'name' => 'Artist/album/track',
      'machine_name' => 'emusik_tx_artist_album_track',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'emusik_tx_material_type' => array(
      'name' => 'Material Type',
      'machine_name' => 'emusik_tx_material_type',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'emusik_tx_supplier' => array(
      'name' => 'Supplier',
      'machine_name' => 'emusik_tx_supplier',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
