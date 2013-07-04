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
    'link_title' => 'Koncertkalender',
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
    'weight' => '-41',
  );
  // Exported menu link: main-menu:node/118
  $menu_links['main-menu:node/118'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/118',
    'router_path' => 'node/%',
    'link_title' => 'Genreguide',
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
    'weight' => '-44',
  );
  // Exported menu link: main-menu:spillelister
  $menu_links['main-menu:spillelister'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'spillelister',
    'router_path' => 'spillelister',
    'link_title' => 'Blog-o-sfæren',
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
    'weight' => '-42',
  );
  // Exported menu link: main-menu:taxonomy/term/1062
  $menu_links['main-menu:taxonomy/term/1062'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/1062',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'World',
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
    'weight' => '-47',
  );
  // Exported menu link: main-menu:taxonomy/term/138
  $menu_links['main-menu:taxonomy/term/138'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/138',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Klassisk',
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
    'weight' => '-49',
  );
  // Exported menu link: main-menu:taxonomy/term/144
  $menu_links['main-menu:taxonomy/term/144'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/144',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Jazz',
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
  // Exported menu link: main-menu:taxonomy/term/218
  $menu_links['main-menu:taxonomy/term/218'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/218',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Elektronisk',
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
    'weight' => '-45',
  );
  // Exported menu link: main-menu:taxonomy/term/255
  $menu_links['main-menu:taxonomy/term/255'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/255',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Pop/Rock',
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
    'weight' => '-48',
  );
  // Exported menu link: main-menu:taxonomy/term/269
  $menu_links['main-menu:taxonomy/term/269'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/269',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Nye Plader',
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
    'weight' => '-43',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Blog-o-sfæren');
  t('Elektronisk');
  t('Forside');
  t('Genreguide');
  t('Jazz');
  t('Klassisk');
  t('Koncertkalender');
  t('Nye Plader');
  t('Pop/Rock');
  t('World');


  return $menu_links;
}
