<?php
/**
 * @file
 * emusik_views.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function emusik_views_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_traditional';
  $strongarm->value = 'd.n.Y';
  $export['date_format_traditional'] = $strongarm;

  return $export;
}
