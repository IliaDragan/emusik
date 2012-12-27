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
    'emusik-emusik_social' => array(
      'delta' => 'emusik_social',
      'module' => 'emusik',
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
  );

  // alpha
  $theme = array();

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

  $export['theme']['alpha'] = $theme;

  // bartik
  $theme = array();

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

  $export['theme']['bartik'] = $theme;

  // bmc_theme
  $theme = array();

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

  $export['theme']['bmc_theme'] = $theme;

  // omega
  $theme = array();

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

  $export['theme']['omega'] = $theme;

  // seven
  $theme = array();

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