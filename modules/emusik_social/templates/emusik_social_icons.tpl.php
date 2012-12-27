<?php
/**
 * @file
 * Template file for eMusik social icons.
 *
 * Available variables:
 *   $facebook
 *   $twitter
 *   $youtube
 *   $rss
 */
?>
<div class="emusik-social-icons">
  <span class="social-icon icon-rss"><?php print !empty($rss) ? l('<img src="' . drupal_get_path('module', 'emusik_social') . '/images/rss.png" width="28" height="28" alt="rss" />', $rss, array('html' => TRUE, 'absolute' => TRUE)) : ''; ?></span>
  <span class="social-icon icon-facebook"><?php print !empty($facebook) ? l('<img src="' . drupal_get_path('module', 'emusik_social') . '/images/facebook.png" width="28" height="28" alt="facebook" />', $facebook, array('html' => TRUE, 'absolute' => TRUE)) : ''; ?></span>
  <span class="social-icon icon-twitter"><?php print !empty($twitter) ? l('<img src="' . drupal_get_path('module', 'emusik_social') . '/images/twitter.png" width="28" height="28" alt="twitter" />', $twitter, array('html' => TRUE, 'absolute' => TRUE)) : ''; ?></span>
  <span class="social-icon icon-youtube"><?php print !empty($youtube) ? l('<img src="' . drupal_get_path('module', 'emusik_social') . '/images/youtube.png" width="28" height="28" alt="youtube" />', $youtube, array('html' => TRUE, 'absolute' => TRUE)) : ''; ?></span>
</div>
