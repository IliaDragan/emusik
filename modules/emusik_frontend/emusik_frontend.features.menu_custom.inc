<?php
/**
 * @file
 * emusik_frontend.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function emusik_frontend_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-biblioteket.
  $menus['menu-biblioteket'] = array(
    'menu_name' => 'menu-biblioteket',
    'title' => 'Biblioteket',
    'description' => '',
  );
  // Exported menu: menu-blogs.
  $menus['menu-blogs'] = array(
    'menu_name' => 'menu-blogs',
    'title' => 'Blogs',
    'description' => '',
  );
  // Exported menu: menu-kunstnere.
  $menus['menu-kunstnere'] = array(
    'menu_name' => 'menu-kunstnere',
    'title' => 'Kunstnere',
    'description' => '',
  );
  // Exported menu: menu-om.
  $menus['menu-om'] = array(
    'menu_name' => 'menu-om',
    'title' => 'Om',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Biblioteket');
  t('Blogs');
  t('Kunstnere');
  t('Main menu');
  t('Om');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
