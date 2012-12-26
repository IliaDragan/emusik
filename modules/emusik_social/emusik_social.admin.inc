<?php
/**
 * @file
 * eMusik social administration routines.
 */

function emusik_social_admin_form($form, $form_state) {
  global $base_url;
  // @todo
  // Maybe some URL validation?
  $form['emusik_twitter'] = array(
    '#type' => 'textfield',
    '#title' => t('Twitter link'),
    '#default_value' => variable_get('emusik_twitter', 'http://twitter.com'),
  );

  $form['emusik_facebook'] = array(
    '#type' => 'textfield',
    '#title' => t('Facebook link'),
    '#default_value' => variable_get('emusik_facebook', 'http://facebook.com'),
  );

  $form['emusik_youtube'] = array(
    '#type' => 'textfield',
    '#title' => t('Youtube link'),
    '#default_value' => variable_get('emusik_youtube', 'http://youtube.com'),
  );

  $form['emusik_rss'] = array(
    '#type' => 'textfield',
    '#title' => t('Feed link'),
    '#description' => t('Link to RSS feed, displaying latest articles, NO leading slash.'),
    '#default_value' => variable_get('emusik_rss', $base_url . '/emusik/rss/latest'),
  );

  return system_settings_form($form);
}
