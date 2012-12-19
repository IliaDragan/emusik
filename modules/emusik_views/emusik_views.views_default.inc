<?php
/**
 * @file
 * emusik_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function emusik_views_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'emusik';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'eMusik';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: List image */
  $handler->display->display_options['fields']['field_list_image']['id'] = 'field_list_image';
  $handler->display->display_options['fields']['field_list_image']['table'] = 'field_data_field_list_image';
  $handler->display->display_options['fields']['field_list_image']['field'] = 'field_list_image';
  $handler->display->display_options['fields']['field_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_list_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_list_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_list_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_list_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_list_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_list_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_list_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_list_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_list_image']['field_api_classes'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Date and time (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  /* Filter criterion: Content: Sticky */
  $handler->display->display_options['filters']['sticky']['id'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['table'] = 'node';
  $handler->display->display_options['filters']['sticky']['field'] = 'sticky';

  /* Display: Library recommendations */
  $handler = $view->new_display('panel_pane', 'Library recommendations', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Library recommendations';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<a href="[path]" class="more">More</a>';
  $handler->display->display_options['footer']['area']['format'] = 'ding_wysiwyg';
  $handler->display->display_options['footer']['area']['tokenize'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: List image */
  $handler->display->display_options['fields']['field_list_image']['id'] = 'field_list_image';
  $handler->display->display_options['fields']['field_list_image']['table'] = 'field_data_field_list_image';
  $handler->display->display_options['fields']['field_list_image']['field'] = 'field_list_image';
  $handler->display->display_options['fields']['field_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_list_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_list_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_list_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_list_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_list_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_list_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_list_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_list_image']['settings'] = array(
    'image_style' => 'emusik_recommendation',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_list_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'traditional';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.n.Y';
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_ding_teaser']['id'] = 'field_ding_teaser';
  $handler->display->display_options['fields']['field_ding_teaser']['table'] = 'field_data_field_ding_teaser';
  $handler->display->display_options['fields']['field_ding_teaser']['field'] = 'field_ding_teaser';
  $handler->display->display_options['fields']['field_ding_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_teaser']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ding_teaser']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ding_teaser']['field_api_classes'] = 0;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['path']['absolute'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Date and time (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ding_news' => 'ding_news',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 0;
  /* Filter criterion: Content: Article type (field_ding_article_type) */
  $handler->display->display_options['filters']['field_ding_article_type_tid']['id'] = 'field_ding_article_type_tid';
  $handler->display->display_options['filters']['field_ding_article_type_tid']['table'] = 'field_data_field_ding_article_type';
  $handler->display->display_options['filters']['field_ding_article_type_tid']['field'] = 'field_ding_article_type_tid';
  $handler->display->display_options['filters']['field_ding_article_type_tid']['value'] = array(
    47 => '47',
  );
  $handler->display->display_options['filters']['field_ding_article_type_tid']['group'] = 0;
  $handler->display->display_options['filters']['field_ding_article_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_ding_article_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ding_article_type_tid']['vocabulary'] = 'emusik_tx_article_type';

  /* Display: Concerts */
  $handler = $view->new_display('panel_pane', 'Concerts', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Concerts';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date and time */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'traditional',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_event_date']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_address']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_address']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Date and time (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ding_event' => 'ding_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: Content: Date and time (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 0;
  $handler->display->display_options['filters']['field_event_date_value']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_event_date_value']['default_to_date'] = 'now + 10 years';
  $handler->display->display_options['filters']['field_event_date_value']['year_range'] = '-0:+10';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 0;

  /* Display: Latest article */
  $handler = $view->new_display('panel_pane', 'Latest article', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest article';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<a href="[path]" class="more">More</a>';
  $handler->display->display_options['footer']['area']['format'] = 'ding_wysiwyg';
  $handler->display->display_options['footer']['area']['tokenize'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: List image */
  $handler->display->display_options['fields']['field_list_image']['id'] = 'field_list_image';
  $handler->display->display_options['fields']['field_list_image']['table'] = 'field_data_field_list_image';
  $handler->display->display_options['fields']['field_list_image']['field'] = 'field_list_image';
  $handler->display->display_options['fields']['field_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_list_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_list_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_list_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_list_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_list_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_list_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_list_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_list_image']['settings'] = array(
    'image_style' => 'emusik_latest_article',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_list_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'traditional';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.n.Y';
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_ding_teaser']['id'] = 'field_ding_teaser';
  $handler->display->display_options['fields']['field_ding_teaser']['table'] = 'field_data_field_ding_teaser';
  $handler->display->display_options['fields']['field_ding_teaser']['field'] = 'field_ding_teaser';
  $handler->display->display_options['fields']['field_ding_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_teaser']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ding_teaser']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ding_teaser']['field_api_classes'] = 0;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['path']['absolute'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Date and time (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ding_news' => 'ding_news',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 0;
  /* Filter criterion: Content: Article type (field_ding_article_type) */
  $handler->display->display_options['filters']['field_ding_article_type_tid']['id'] = 'field_ding_article_type_tid';
  $handler->display->display_options['filters']['field_ding_article_type_tid']['table'] = 'field_data_field_ding_article_type';
  $handler->display->display_options['filters']['field_ding_article_type_tid']['field'] = 'field_ding_article_type_tid';
  $handler->display->display_options['filters']['field_ding_article_type_tid']['value'] = array(
    51 => '51',
  );
  $handler->display->display_options['filters']['field_ding_article_type_tid']['group'] = 0;
  $handler->display->display_options['filters']['field_ding_article_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_ding_article_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ding_article_type_tid']['vocabulary'] = 'emusik_tx_article_type';

  /* Display: Upcoming concert */
  $handler = $view->new_display('panel_pane', 'Upcoming concert', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming concert';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<a href="[path]" class="more">More</a>';
  $handler->display->display_options['footer']['area']['format'] = 'ding_wysiwyg';
  $handler->display->display_options['footer']['area']['tokenize'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: List image */
  $handler->display->display_options['fields']['field_list_image']['id'] = 'field_list_image';
  $handler->display->display_options['fields']['field_list_image']['table'] = 'field_data_field_list_image';
  $handler->display->display_options['fields']['field_list_image']['field'] = 'field_list_image';
  $handler->display->display_options['fields']['field_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_list_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_list_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_list_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_list_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_list_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_list_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_list_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_list_image']['settings'] = array(
    'image_style' => 'emusik_upcoming_concert',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_list_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'traditional';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.n.Y';
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_ding_teaser']['id'] = 'field_ding_teaser';
  $handler->display->display_options['fields']['field_ding_teaser']['table'] = 'field_data_field_ding_teaser';
  $handler->display->display_options['fields']['field_ding_teaser']['field'] = 'field_ding_teaser';
  $handler->display->display_options['fields']['field_ding_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_teaser']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ding_teaser']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ding_teaser']['field_api_classes'] = 0;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['path']['absolute'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Date and time (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ding_news' => 'ding_news',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 0;
  /* Filter criterion: Content: Material type (field_ding_material_type) */
  $handler->display->display_options['filters']['field_ding_material_type_tid']['id'] = 'field_ding_material_type_tid';
  $handler->display->display_options['filters']['field_ding_material_type_tid']['table'] = 'field_data_field_ding_material_type';
  $handler->display->display_options['filters']['field_ding_material_type_tid']['field'] = 'field_ding_material_type_tid';
  $handler->display->display_options['filters']['field_ding_material_type_tid']['value'] = array(
    34 => '34',
  );
  $handler->display->display_options['filters']['field_ding_material_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_ding_material_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ding_material_type_tid']['vocabulary'] = 'emusik_tx_material_type';

  /* Display: Danish blogs recommendations */
  $handler = $view->new_display('panel_pane', 'Danish blogs recommendations', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Danish blogs recommendations';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<a href="[path]" class="more">More</a>';
  $handler->display->display_options['footer']['area']['format'] = 'ding_wysiwyg';
  $handler->display->display_options['footer']['area']['tokenize'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: List image */
  $handler->display->display_options['fields']['field_list_image']['id'] = 'field_list_image';
  $handler->display->display_options['fields']['field_list_image']['table'] = 'field_data_field_list_image';
  $handler->display->display_options['fields']['field_list_image']['field'] = 'field_list_image';
  $handler->display->display_options['fields']['field_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_list_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_list_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_list_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_list_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_list_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_list_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_list_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_list_image']['settings'] = array(
    'image_style' => 'emusik_blog_recommend',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_list_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'traditional';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.n.Y';
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_ding_teaser']['id'] = 'field_ding_teaser';
  $handler->display->display_options['fields']['field_ding_teaser']['table'] = 'field_data_field_ding_teaser';
  $handler->display->display_options['fields']['field_ding_teaser']['field'] = 'field_ding_teaser';
  $handler->display->display_options['fields']['field_ding_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_teaser']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ding_teaser']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ding_teaser']['field_api_classes'] = 0;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['path']['absolute'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Date and time (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ding_news' => 'ding_news',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 0;
  /* Filter criterion: Content: Supplier (field_ding_supplier) */
  $handler->display->display_options['filters']['field_ding_supplier_tid']['id'] = 'field_ding_supplier_tid';
  $handler->display->display_options['filters']['field_ding_supplier_tid']['table'] = 'field_data_field_ding_supplier';
  $handler->display->display_options['filters']['field_ding_supplier_tid']['field'] = 'field_ding_supplier_tid';
  $handler->display->display_options['filters']['field_ding_supplier_tid']['value'] = array(
    41 => '41',
  );
  $handler->display->display_options['filters']['field_ding_supplier_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_ding_supplier_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ding_supplier_tid']['vocabulary'] = 'emusik_tx_supplier';

  /* Display: Album recomendations */
  $handler = $view->new_display('panel_pane', 'Album recomendations', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Album recomendations';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<a href="[path]" class="more">More</a>';
  $handler->display->display_options['footer']['area']['format'] = 'ding_wysiwyg';
  $handler->display->display_options['footer']['area']['tokenize'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: List image */
  $handler->display->display_options['fields']['field_list_image']['id'] = 'field_list_image';
  $handler->display->display_options['fields']['field_list_image']['table'] = 'field_data_field_list_image';
  $handler->display->display_options['fields']['field_list_image']['field'] = 'field_list_image';
  $handler->display->display_options['fields']['field_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_list_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_list_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_list_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_list_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_list_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_list_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_list_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_list_image']['settings'] = array(
    'image_style' => 'emusik_album_recommend',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_list_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'traditional';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.n.Y';
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_ding_teaser']['id'] = 'field_ding_teaser';
  $handler->display->display_options['fields']['field_ding_teaser']['table'] = 'field_data_field_ding_teaser';
  $handler->display->display_options['fields']['field_ding_teaser']['field'] = 'field_ding_teaser';
  $handler->display->display_options['fields']['field_ding_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_teaser']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ding_teaser']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ding_teaser']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ding_teaser']['field_api_classes'] = 0;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['path']['absolute'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Date and time (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ding_news' => 'ding_news',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 0;
  /* Filter criterion: Content: Article type (field_ding_article_type) */
  $handler->display->display_options['filters']['field_ding_article_type_tid']['id'] = 'field_ding_article_type_tid';
  $handler->display->display_options['filters']['field_ding_article_type_tid']['table'] = 'field_data_field_ding_article_type';
  $handler->display->display_options['filters']['field_ding_article_type_tid']['field'] = 'field_ding_article_type_tid';
  $handler->display->display_options['filters']['field_ding_article_type_tid']['value'] = array(
    47 => '47',
  );
  $handler->display->display_options['filters']['field_ding_article_type_tid']['group'] = 0;
  $handler->display->display_options['filters']['field_ding_article_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_ding_article_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ding_article_type_tid']['vocabulary'] = 'emusik_tx_article_type';
  /* Filter criterion: Content: Material type (field_ding_material_type) */
  $handler->display->display_options['filters']['field_ding_material_type_tid']['id'] = 'field_ding_material_type_tid';
  $handler->display->display_options['filters']['field_ding_material_type_tid']['table'] = 'field_data_field_ding_material_type';
  $handler->display->display_options['filters']['field_ding_material_type_tid']['field'] = 'field_ding_material_type_tid';
  $handler->display->display_options['filters']['field_ding_material_type_tid']['value'] = array(
    35 => '35',
    36 => '36',
  );
  $handler->display->display_options['filters']['field_ding_material_type_tid']['group'] = 0;
  $handler->display->display_options['filters']['field_ding_material_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_ding_material_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ding_material_type_tid']['vocabulary'] = 'emusik_tx_material_type';
  $translatables['emusik'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Post date'),
    t('Library recommendations'),
    t('<a href="[path]" class="more">More</a>'),
    t('View panes'),
    t('Concerts'),
    t('Latest article'),
    t('Upcoming concert'),
    t('Danish blogs recommendations'),
    t('Album recomendations'),
  );
  $export['emusik'] = $view;

  return $export;
}
