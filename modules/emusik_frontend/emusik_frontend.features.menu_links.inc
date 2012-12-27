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
  // Exported menu link: main-menu:about
  $menu_links['main-menu:about'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about',
    'router_path' => 'about',
    'link_title' => 'Om eMusik.dk',
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
  // Exported menu link: main-menu:biblioteksindhold
  $menu_links['main-menu:biblioteksindhold'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'biblioteksindhold',
    'router_path' => 'biblioteksindhold',
    'link_title' => 'Biblioteksindhold',
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
  // Exported menu link: main-menu:blogs
  $menu_links['main-menu:blogs'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blogs',
    'router_path' => 'blogs',
    'link_title' => 'Blogs',
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
  // Exported menu link: main-menu:events
  $menu_links['main-menu:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: main-menu:growthlayer
  $menu_links['main-menu:growthlayer'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'growthlayer',
    'router_path' => 'growthlayer',
    'link_title' => 'Vækstlag',
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
    'weight' => '-47',
  );
  // Exported menu link: main-menu:libraries
  $menu_links['main-menu:libraries'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'libraries',
    'router_path' => 'libraries',
    'link_title' => 'Libraries',
    'options' => array(),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Exported menu link: main-menu:news
  $menu_links['main-menu:news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'News',
    'options' => array(),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
  );
  // Exported menu link: menu-biblioteket:node/1
  $menu_links['menu-biblioteket:node/1'] = array(
    'menu_name' => 'menu-biblioteket',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Artikler',
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
    'weight' => '0',
  );
  // Exported menu link: menu-biblioteket:node/2
  $menu_links['menu-biblioteket:node/2'] = array(
    'menu_name' => 'menu-biblioteket',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Koncertanmeldelser',
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
    'weight' => '0',
  );
  // Exported menu link: menu-biblioteket:node/3
  $menu_links['menu-biblioteket:node/3'] = array(
    'menu_name' => 'menu-biblioteket',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Pladeanmeldelser',
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
    'weight' => '0',
  );
  // Exported menu link: menu-biblioteket:node/4
  $menu_links['menu-biblioteket:node/4'] = array(
    'menu_name' => 'menu-biblioteket',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Spillelister',
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
    'weight' => '0',
  );
  // Exported menu link: menu-blogs:node/1
  $menu_links['menu-blogs:node/1'] = array(
    'menu_name' => 'menu-blogs',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Pladeanmeldelser',
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
  );
  // Exported menu link: menu-blogs:node/2
  $menu_links['menu-blogs:node/2'] = array(
    'menu_name' => 'menu-blogs',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Koncertanmeldelser',
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
  // Exported menu link: menu-blogs:node/3
  $menu_links['menu-blogs:node/3'] = array(
    'menu_name' => 'menu-blogs',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Artikler',
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
  // Exported menu link: menu-blogs:node/4
  $menu_links['menu-blogs:node/4'] = array(
    'menu_name' => 'menu-blogs',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Spillelister',
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
  // Exported menu link: menu-kunstnere:node/1
  $menu_links['menu-kunstnere:node/1'] = array(
    'menu_name' => 'menu-kunstnere',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Artikler',
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
    'weight' => '0',
  );
  // Exported menu link: menu-kunstnere:node/2
  $menu_links['menu-kunstnere:node/2'] = array(
    'menu_name' => 'menu-kunstnere',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Koncertanmeldelser',
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
    'weight' => '0',
  );
  // Exported menu link: menu-kunstnere:node/3
  $menu_links['menu-kunstnere:node/3'] = array(
    'menu_name' => 'menu-kunstnere',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Pladeanmeldelser',
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
    'weight' => '0',
  );
  // Exported menu link: menu-kunstnere:node/4
  $menu_links['menu-kunstnere:node/4'] = array(
    'menu_name' => 'menu-kunstnere',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Spillelister',
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
    'weight' => '0',
  );
  // Exported menu link: menu-om:node/1
  $menu_links['menu-om:node/1'] = array(
    'menu_name' => 'menu-om',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Om eMusic.dk',
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
  );
  // Exported menu link: menu-om:node/2
  $menu_links['menu-om:node/2'] = array(
    'menu_name' => 'menu-om',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Privatlivspolitic',
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
  // Exported menu link: menu-om:node/3
  $menu_links['menu-om:node/3'] = array(
    'menu_name' => 'menu-om',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Deltagende biblioteker',
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
  // Exported menu link: menu-om:node/4
  $menu_links['menu-om:node/4'] = array(
    'menu_name' => 'menu-om',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Deltagende tjenester',
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
  // Translatables
  // Included for use with string extractors like potx.
  t('Artikler');
  t('Biblioteksindhold');
  t('Blogs');
  t('Deltagende biblioteker');
  t('Deltagende tjenester');
  t('Events');
  t('Forside');
  t('Koncertanmeldelser');
  t('Koncerter');
  t('Libraries');
  t('News');
  t('Om eMusic.dk');
  t('Om eMusik.dk');
  t('Pladeanmeldelser');
  t('Privatlivspolitic');
  t('Spillelister');
  t('Vækstlag');


  return $menu_links;
}
