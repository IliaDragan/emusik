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
  // Exported menu link: menu-biblioteket:<front>
  $menu_links['menu-biblioteket:<front>'] = array(
    'menu_name' => 'menu-biblioteket',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Koncertanmeldelser',
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
    'weight' => '0',
  );
  // Exported menu link: menu-biblioteket:http://emusik.anna.ci.inlead.dk
  $menu_links['menu-biblioteket:http://emusik.anna.ci.inlead.dk'] = array(
    'menu_name' => 'menu-biblioteket',
    'link_path' => 'http://emusik.anna.ci.inlead.dk',
    'router_path' => '',
    'link_title' => 'Artikler',
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
    'weight' => '0',
  );
  // Exported menu link: menu-blogs:<front>
  $menu_links['menu-blogs:<front>'] = array(
    'menu_name' => 'menu-blogs',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Pladeanmeldelser',
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
  // Exported menu link: menu-blogs:http://emusik.anna.ci.inlead.dk
  $menu_links['menu-blogs:http://emusik.anna.ci.inlead.dk'] = array(
    'menu_name' => 'menu-blogs',
    'link_path' => 'http://emusik.anna.ci.inlead.dk',
    'router_path' => '',
    'link_title' => 'Artikler',
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
    'weight' => '-48',
  );
  // Exported menu link: menu-kunstnere:<front>
  $menu_links['menu-kunstnere:<front>'] = array(
    'menu_name' => 'menu-kunstnere',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Pladeanmeldelser',
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
    'weight' => '0',
  );
  // Exported menu link: menu-kunstnere:http://emusik.anna.ci.inlead.dk
  $menu_links['menu-kunstnere:http://emusik.anna.ci.inlead.dk'] = array(
    'menu_name' => 'menu-kunstnere',
    'link_path' => 'http://emusik.anna.ci.inlead.dk',
    'router_path' => '',
    'link_title' => 'Artikler',
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
    'weight' => '0',
  );
  // Exported menu link: menu-om:<front>
  $menu_links['menu-om:<front>'] = array(
    'menu_name' => 'menu-om',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Deltagende biblioteker',
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
    'weight' => '-48',
  );
  // Exported menu link: menu-om:http://emusik.anna.ci.inlead.dk
  $menu_links['menu-om:http://emusik.anna.ci.inlead.dk'] = array(
    'menu_name' => 'menu-om',
    'link_path' => 'http://emusik.anna.ci.inlead.dk',
    'router_path' => '',
    'link_title' => 'Om eMusic.dk',
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
  // Translatables
  // Included for use with string extractors like potx.
  t('Artikler');
  t('Biblioteksindhold');
  t('Blogs');
  t('Deltagende biblioteker');
  t('Forside');
  t('Koncertanmeldelser');
  t('Koncerter');
  t('Om eMusic.dk');
  t('Om eMusik.dk');
  t('Pladeanmeldelser');
  t('Vækstlag');


  return $menu_links;
}
