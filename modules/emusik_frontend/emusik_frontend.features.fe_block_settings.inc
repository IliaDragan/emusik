<?php
/**
 * @file
 * emusik_frontend.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function emusik_frontend_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'ding_library-ding_menu' => array(
      'delta' => 'ding_menu',
      'module' => 'ding_library',
    ),
    'emusik-emusik_social' => array(
      'delta' => 'emusik_social',
      'module' => 'emusik',
    ),
    'locale-language' => array(
      'delta' => 'language',
      'module' => 'locale',
    ),
    'menu-menu-biblioteket' => array(
      'delta' => 'menu-biblioteket',
      'module' => 'menu',
    ),
    'menu-menu-blogs' => array(
      'delta' => 'menu-blogs',
      'module' => 'menu',
    ),
    'menu-menu-kunstnere' => array(
      'delta' => 'menu-kunstnere',
      'module' => 'menu',
    ),
    'menu-menu-om' => array(
      'delta' => 'menu-om',
      'module' => 'menu',
    ),
    'search-form' => array(
      'delta' => 'form',
      'module' => 'search',
    ),
    'system-help' => array(
      'delta' => 'help',
      'module' => 'system',
    ),
    'system-main' => array(
      'delta' => 'main',
      'module' => 'system',
    ),
    'system-main-menu' => array(
      'delta' => 'main-menu',
      'module' => 'system',
    ),
    'workbench-block' => array(
      'delta' => 'block',
      'module' => 'workbench',
    ),
  );

  // alpha
  $theme = array();

  $theme['ding_library-ding_menu'] = array(
    'module' => 'ding_library',
    'delta' => 'ding_menu',
    'theme' => 'alpha',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 4,
  );

  $theme['emusik-emusik_social'] = array(
    'module' => 'emusik',
    'delta' => 'emusik_social',
    'theme' => 'alpha',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'alpha',
    'status' => 0,
    'weight' => '1',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-biblioteket'] = array(
    'module' => 'menu',
    'delta' => 'menu-biblioteket',
    'theme' => 'alpha',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-blogs'] = array(
    'module' => 'menu',
    'delta' => 'menu-blogs',
    'theme' => 'alpha',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-kunstnere'] = array(
    'module' => 'menu',
    'delta' => 'menu-kunstnere',
    'theme' => 'alpha',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-om'] = array(
    'module' => 'menu',
    'delta' => 'menu-om',
    'theme' => 'alpha',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'alpha',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-help'] = array(
    'module' => 'system',
    'delta' => 'help',
    'theme' => 'alpha',
    'status' => 0,
    'weight' => '5',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'alpha',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'alpha',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['workbench-block'] = array(
    'module' => 'workbench',
    'delta' => 'block',
    'theme' => 'alpha',
    'status' => 0,
    'weight' => '-14',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['alpha'] = $theme;

  // bartik
  $theme = array();

  $theme['ding_library-ding_menu'] = array(
    'module' => 'ding_library',
    'delta' => 'ding_menu',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 4,
  );

  $theme['emusik-emusik_social'] = array(
    'module' => 'emusik',
    'delta' => 'emusik_social',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '1',
    'region' => 'header',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-biblioteket'] = array(
    'module' => 'menu',
    'delta' => 'menu-biblioteket',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-blogs'] = array(
    'module' => 'menu',
    'delta' => 'menu-blogs',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-kunstnere'] = array(
    'module' => 'menu',
    'delta' => 'menu-kunstnere',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-om'] = array(
    'module' => 'menu',
    'delta' => 'menu-om',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '0',
    'region' => 'highlighted',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-help'] = array(
    'module' => 'system',
    'delta' => 'help',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '5',
    'region' => 'help',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['workbench-block'] = array(
    'module' => 'workbench',
    'delta' => 'block',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '-99',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['bartik'] = $theme;

  // bmc_theme
  $theme = array();

  $theme['ding_library-ding_menu'] = array(
    'module' => 'ding_library',
    'delta' => 'ding_menu',
    'theme' => 'bmc_theme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 4,
  );

  $theme['emusik-emusik_social'] = array(
    'module' => 'emusik',
    'delta' => 'emusik_social',
    'theme' => 'bmc_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'user_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'bmc_theme',
    'status' => 0,
    'weight' => '1',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-biblioteket'] = array(
    'module' => 'menu',
    'delta' => 'menu-biblioteket',
    'theme' => 'bmc_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'postscript_fourth',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-blogs'] = array(
    'module' => 'menu',
    'delta' => 'menu-blogs',
    'theme' => 'bmc_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'postscript_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-kunstnere'] = array(
    'module' => 'menu',
    'delta' => 'menu-kunstnere',
    'theme' => 'bmc_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'postscript_third',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-om'] = array(
    'module' => 'menu',
    'delta' => 'menu-om',
    'theme' => 'bmc_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'postscript_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'bmc_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-help'] = array(
    'module' => 'system',
    'delta' => 'help',
    'theme' => 'bmc_theme',
    'status' => 0,
    'weight' => '5',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'bmc_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'bmc_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'menu',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['workbench-block'] = array(
    'module' => 'workbench',
    'delta' => 'block',
    'theme' => 'bmc_theme',
    'status' => 0,
    'weight' => '-14',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['bmc_theme'] = $theme;

  // omega
  $theme = array();

  $theme['ding_library-ding_menu'] = array(
    'module' => 'ding_library',
    'delta' => 'ding_menu',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 4,
  );

  $theme['emusik-emusik_social'] = array(
    'module' => 'emusik',
    'delta' => 'emusik_social',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'omega',
    'status' => '1',
    'weight' => '1',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-biblioteket'] = array(
    'module' => 'menu',
    'delta' => 'menu-biblioteket',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-blogs'] = array(
    'module' => 'menu',
    'delta' => 'menu-blogs',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-kunstnere'] = array(
    'module' => 'menu',
    'delta' => 'menu-kunstnere',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-om'] = array(
    'module' => 'menu',
    'delta' => 'menu-om',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'omega',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-help'] = array(
    'module' => 'system',
    'delta' => 'help',
    'theme' => 'omega',
    'status' => '1',
    'weight' => '5',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'omega',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['workbench-block'] = array(
    'module' => 'workbench',
    'delta' => 'block',
    'theme' => 'omega',
    'status' => '1',
    'weight' => '-99',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['omega'] = $theme;

  // seven
  $theme = array();

  $theme['ding_library-ding_menu'] = array(
    'module' => 'ding_library',
    'delta' => 'ding_menu',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 4,
  );

  $theme['emusik-emusik_social'] = array(
    'module' => 'emusik',
    'delta' => 'emusik_social',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-biblioteket'] = array(
    'module' => 'menu',
    'delta' => 'menu-biblioteket',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-blogs'] = array(
    'module' => 'menu',
    'delta' => 'menu-blogs',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-kunstnere'] = array(
    'module' => 'menu',
    'delta' => 'menu-kunstnere',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-om'] = array(
    'module' => 'menu',
    'delta' => 'menu-om',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-help'] = array(
    'module' => 'system',
    'delta' => 'help',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '5',
    'region' => 'help',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['workbench-block'] = array(
    'module' => 'workbench',
    'delta' => 'block',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '-99',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['seven'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
