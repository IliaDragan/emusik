<?php

$plugin = array(
  'title' => t('eMusik playlist'),
  'description' => t('eMusik playlist'),
  'single' => TRUE,
  'content_types' => array('emusik_playlist'),
  'render callback' => 'emusik_playlist_content_type_render',
  'edit form' => 'emusik_playlist_content_type_edit_form',
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'category' => t('eMusik'),
);

/**
 * Implements hook_hook_content_type_edit_form().
 */
function emusik_playlist_content_type_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Plugin renderer.
 */
function emusik_playlist_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $node = isset($context->data) ? $context->data : NULL;

  if (is_object($node)) {
    $block->title = t('eMusik playlist');
    $block->content = '';
  }

  return $block;
}
