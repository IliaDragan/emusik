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
    'hidden' => '1',
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
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
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
  // Exported menu link: main-menu:taxonomy/term/1056
  $menu_links['main-menu:taxonomy/term/1056'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/1056',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Nordjylland',
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
    'weight' => '-50',
    'parent_path' => 'koncerter',
  );
  // Exported menu link: main-menu:taxonomy/term/1057
  $menu_links['main-menu:taxonomy/term/1057'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/1057',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Sydjylland',
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
    'parent_path' => 'koncerter',
  );
  // Exported menu link: main-menu:taxonomy/term/1058
  $menu_links['main-menu:taxonomy/term/1058'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/1058',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Midtjylland',
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
    'parent_path' => 'koncerter',
  );
  // Exported menu link: main-menu:taxonomy/term/1059
  $menu_links['main-menu:taxonomy/term/1059'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/1059',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Fyn',
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
    'parent_path' => 'koncerter',
  );
  // Exported menu link: main-menu:taxonomy/term/1060
  $menu_links['main-menu:taxonomy/term/1060'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/1060',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Sjælland og øerne',
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
    'parent_path' => 'koncerter',
  );
  // Exported menu link: main-menu:taxonomy/term/1062
  $menu_links['main-menu:taxonomy/term/1062'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/1062',
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
  // Exported menu link: main-menu:taxonomy/term/1063
  $menu_links['main-menu:taxonomy/term/1063'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/1063',
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
  // Exported menu link: main-menu:taxonomy/term/1064
  $menu_links['main-menu:taxonomy/term/1064'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/1064',
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
  // Exported menu link: main-menu:taxonomy/term/1065
  $menu_links['main-menu:taxonomy/term/1065'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/1065',
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
  // Exported menu link: main-menu:taxonomy/term/1066
  $menu_links['main-menu:taxonomy/term/1066'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/1066',
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
  // Exported menu link: main-menu:taxonomy/term/269
  $menu_links['main-menu:taxonomy/term/269'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/269',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Nye plader',
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
  t('Elektronisk');
  t('Forside');
  t('Fyn');
  t('Genreguide');
  t('Jazz');
  t('Klassisk');
  t('Koncertkalender');
  t('Midtjylland');
  t('Nordjylland');
  t('Nye plader');
  t('Pop/Rock');
  t('Sjælland');
  t('Sydjylland');
  t('World');
  t('Øerne');


  return $menu_links;
}
