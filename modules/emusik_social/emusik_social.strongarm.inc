<?php
/**
 * @file
 * emusik_social.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function emusik_social_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facebookshare_location';
  $strongarm->value = array(
    'content' => 'content',
    'teasers' => 0,
  );
  $export['facebookshare_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facebookshare_size';
  $strongarm->value = 'button_count';
  $export['facebookshare_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facebookshare_text';
  $strongarm->value = '';
  $export['facebookshare_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facebookshare_types';
  $strongarm->value = array(
    'ding_news' => 'ding_news',
    'ding_campaign' => 0,
    'ding_event' => 0,
    'mkdru' => 0,
    'emusik_playlist' => 0,
    'ding_page' => 0,
  );
  $export['facebookshare_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facebookshare_weight';
  $strongarm->value = '-10';
  $export['facebookshare_weight'] = $strongarm;

  return $export;
}
