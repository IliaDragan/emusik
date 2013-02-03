<?php
/**
 * @file
 * emusik_frontend.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function emusik_frontend_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Forside',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: main-menu:koncerter
  $menu_links['main-menu:koncerter'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'koncerter',
    'router_path' => 'koncerter',
    'link_title' => 'Koncerter',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Forside');
  t('Koncerter');


  return $menu_links;
}
