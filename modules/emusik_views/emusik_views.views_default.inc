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
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  /* Sort criterion: Content: Date and time (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
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
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Terms';
  $handler->display->display_options['filters']['keys']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['keys']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['keys']['expose']['multiple'] = FALSE;

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'emusik/rss/latest';

  /* Display: Concerts */
  $handler = $view->new_display('panel_pane', 'Concerts', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Concerts';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'concerts';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
    'format_type' => 'short',
    'fromto' => '',
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

  /* Display: Article list (contextual) */
  $handler = $view->new_display('panel_pane', 'Article list (contextual)', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
    'image_style' => '',
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
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_ding_body']['id'] = 'field_ding_body';
  $handler->display->display_options['fields']['field_ding_body']['table'] = 'field_data_field_ding_body';
  $handler->display->display_options['fields']['field_ding_body']['field'] = 'field_ding_body';
  $handler->display->display_options['fields']['field_ding_body']['label'] = '';
  $handler->display->display_options['fields']['field_ding_body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ding_body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ding_body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ding_body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ding_body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_ding_body']['settings'] = array(
    'trim_length' => '350',
  );
  $handler->display->display_options['fields']['field_ding_body']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['value'] = '-1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['argument'] = '-1';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'emusik_tx_article_type' => 'emusik_tx_article_type',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['arguments']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid_1']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid_1']['exception']['value'] = '-1';
  $handler->display->display_options['arguments']['tid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_1']['default_argument_options']['argument'] = '-1';
  $handler->display->display_options['arguments']['tid_1']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_1']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_1']['validate_options']['vocabularies'] = array(
    'category' => 'category',
  );
  $handler->display->display_options['arguments']['tid_1']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid_1']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid_1']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid_1']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid_1']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid_1']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid_1']['set_breadcrumb'] = 0;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['arguments']['tid_2']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid_2']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_2']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid_2']['exception']['value'] = '-1';
  $handler->display->display_options['arguments']['tid_2']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_2']['default_argument_options']['argument'] = '-1';
  $handler->display->display_options['arguments']['tid_2']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid_2']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_2']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_2']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid_2']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_2']['validate_options']['vocabularies'] = array(
    'emusik_tx_material_type' => 'emusik_tx_material_type',
  );
  $handler->display->display_options['arguments']['tid_2']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid_2']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid_2']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid_2']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid_2']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid_2']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid_2']['set_breadcrumb'] = 0;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid_3']['id'] = 'tid_3';
  $handler->display->display_options['arguments']['tid_3']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid_3']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_3']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid_3']['exception']['value'] = '-1';
  $handler->display->display_options['arguments']['tid_3']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_3']['default_argument_options']['argument'] = '-1';
  $handler->display->display_options['arguments']['tid_3']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid_3']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_3']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_3']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_3']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid_3']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_3']['validate_options']['vocabularies'] = array(
    'emusik_tx_supplier' => 'emusik_tx_supplier',
  );
  $handler->display->display_options['arguments']['tid_3']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid_3']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid_3']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid_3']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid_3']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid_3']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid_3']['set_breadcrumb'] = 0;
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
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Article type',
    ),
    'tid_1' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Category',
    ),
    'tid_2' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Material type',
    ),
    'tid_3' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Supplier',
    ),
  );

  /* Display: Playlist list (contextual) */
  $handler = $view->new_display('panel_pane', 'Playlist list (contextual)', 'panel_pane_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_playlist_image']['id'] = 'field_playlist_image';
  $handler->display->display_options['fields']['field_playlist_image']['table'] = 'field_data_field_playlist_image';
  $handler->display->display_options['fields']['field_playlist_image']['field'] = 'field_playlist_image';
  $handler->display->display_options['fields']['field_playlist_image']['label'] = '';
  $handler->display->display_options['fields']['field_playlist_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_playlist_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_playlist_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_playlist_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_playlist_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_playlist_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_playlist_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_playlist_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_playlist_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_playlist_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_playlist_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_playlist_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_playlist_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_playlist_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_playlist_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_playlist_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_playlist_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_playlist_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_playlist_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_playlist_image']['field_api_classes'] = 0;
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
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '350',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['value'] = '-1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['argument'] = '-1';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'emusik_tx_article_type' => 'emusik_tx_article_type',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['arguments']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid_1']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid_1']['exception']['value'] = '-1';
  $handler->display->display_options['arguments']['tid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_1']['default_argument_options']['argument'] = '-1';
  $handler->display->display_options['arguments']['tid_1']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_1']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_1']['validate_options']['vocabularies'] = array(
    'category' => 'category',
  );
  $handler->display->display_options['arguments']['tid_1']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid_1']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid_1']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid_1']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid_1']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid_1']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid_1']['set_breadcrumb'] = 0;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['arguments']['tid_2']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid_2']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_2']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid_2']['exception']['value'] = '-1';
  $handler->display->display_options['arguments']['tid_2']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_2']['default_argument_options']['argument'] = '-1';
  $handler->display->display_options['arguments']['tid_2']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid_2']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_2']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_2']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid_2']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_2']['validate_options']['vocabularies'] = array(
    'emusik_tx_material_type' => 'emusik_tx_material_type',
  );
  $handler->display->display_options['arguments']['tid_2']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid_2']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid_2']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid_2']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid_2']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid_2']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid_2']['set_breadcrumb'] = 0;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid_3']['id'] = 'tid_3';
  $handler->display->display_options['arguments']['tid_3']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid_3']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_3']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid_3']['exception']['value'] = '-1';
  $handler->display->display_options['arguments']['tid_3']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_3']['default_argument_options']['argument'] = '-1';
  $handler->display->display_options['arguments']['tid_3']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid_3']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_3']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_3']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_3']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid_3']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_3']['validate_options']['vocabularies'] = array(
    'emusik_tx_supplier' => 'emusik_tx_supplier',
  );
  $handler->display->display_options['arguments']['tid_3']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid_3']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid_3']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid_3']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid_3']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid_3']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid_3']['set_breadcrumb'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'emusik_playlist' => 'emusik_playlist',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Article type',
    ),
    'tid_1' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Category',
    ),
    'tid_2' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Material type',
    ),
    'tid_3' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Supplier',
    ),
  );

  /* Display: Frontpage: Article list (contextual) */
  $handler = $view->new_display('panel_pane', 'Frontpage: Article list (contextual)', 'panel_pane_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
    'image_style' => '',
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
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_ding_body']['id'] = 'field_ding_body';
  $handler->display->display_options['fields']['field_ding_body']['table'] = 'field_data_field_ding_body';
  $handler->display->display_options['fields']['field_ding_body']['field'] = 'field_ding_body';
  $handler->display->display_options['fields']['field_ding_body']['label'] = '';
  $handler->display->display_options['fields']['field_ding_body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ding_body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ding_body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ding_body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ding_body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_ding_body']['settings'] = array(
    'trim_length' => '350',
  );
  $handler->display->display_options['fields']['field_ding_body']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['value'] = '-1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['argument'] = '-1';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'emusik_tx_article_type' => 'emusik_tx_article_type',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['arguments']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid_1']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid_1']['exception']['value'] = '-1';
  $handler->display->display_options['arguments']['tid_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['tid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_1']['default_argument_options']['argument'] = '-1';
  $handler->display->display_options['arguments']['tid_1']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_1']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_1']['validate_options']['vocabularies'] = array(
    'category' => 'category',
    'ding_content_tags' => 'ding_content_tags',
  );
  $handler->display->display_options['arguments']['tid_1']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid_1']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid_1']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid_1']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid_1']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid_1']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid_1']['set_breadcrumb'] = 0;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['arguments']['tid_2']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid_2']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_2']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid_2']['exception']['value'] = '-1';
  $handler->display->display_options['arguments']['tid_2']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_2']['default_argument_options']['argument'] = '-1';
  $handler->display->display_options['arguments']['tid_2']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid_2']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_2']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_2']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid_2']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_2']['validate_options']['vocabularies'] = array(
    'emusik_tx_material_type' => 'emusik_tx_material_type',
  );
  $handler->display->display_options['arguments']['tid_2']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid_2']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid_2']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid_2']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid_2']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid_2']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid_2']['set_breadcrumb'] = 0;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid_3']['id'] = 'tid_3';
  $handler->display->display_options['arguments']['tid_3']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid_3']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_3']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid_3']['exception']['value'] = '-1';
  $handler->display->display_options['arguments']['tid_3']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_3']['default_argument_options']['argument'] = '-1';
  $handler->display->display_options['arguments']['tid_3']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid_3']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_3']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_3']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_3']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid_3']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_3']['validate_options']['vocabularies'] = array(
    'emusik_tx_supplier' => 'emusik_tx_supplier',
  );
  $handler->display->display_options['arguments']['tid_3']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid_3']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid_3']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid_3']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid_3']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid_3']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid_3']['set_breadcrumb'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ding_news' => 'ding_news',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Article type',
    ),
    'tid_1' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Category',
    ),
    'tid_2' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Material type',
    ),
    'tid_3' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Supplier',
    ),
  );

  /* Display: Frontpage: Playlist list (contextual) */
  $handler = $view->new_display('panel_pane', 'Frontpage: Playlist list (contextual)', 'panel_pane_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_playlist_image']['id'] = 'field_playlist_image';
  $handler->display->display_options['fields']['field_playlist_image']['table'] = 'field_data_field_playlist_image';
  $handler->display->display_options['fields']['field_playlist_image']['field'] = 'field_playlist_image';
  $handler->display->display_options['fields']['field_playlist_image']['label'] = '';
  $handler->display->display_options['fields']['field_playlist_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_playlist_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_playlist_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_playlist_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_playlist_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_playlist_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_playlist_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_playlist_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_playlist_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_playlist_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_playlist_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_playlist_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_playlist_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_playlist_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_playlist_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_playlist_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_playlist_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_playlist_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_playlist_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_playlist_image']['field_api_classes'] = 0;
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
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '350',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['value'] = '-1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['argument'] = '-1';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'emusik_tx_article_type' => 'emusik_tx_article_type',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['arguments']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid_1']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid_1']['exception']['value'] = '-1';
  $handler->display->display_options['arguments']['tid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_1']['default_argument_options']['argument'] = '-1';
  $handler->display->display_options['arguments']['tid_1']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_1']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_1']['validate_options']['vocabularies'] = array(
    'category' => 'category',
  );
  $handler->display->display_options['arguments']['tid_1']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid_1']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid_1']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid_1']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid_1']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid_1']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid_1']['set_breadcrumb'] = 0;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['arguments']['tid_2']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid_2']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_2']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid_2']['exception']['value'] = '-1';
  $handler->display->display_options['arguments']['tid_2']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_2']['default_argument_options']['argument'] = '-1';
  $handler->display->display_options['arguments']['tid_2']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid_2']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_2']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_2']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid_2']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_2']['validate_options']['vocabularies'] = array(
    'emusik_tx_material_type' => 'emusik_tx_material_type',
  );
  $handler->display->display_options['arguments']['tid_2']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid_2']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid_2']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid_2']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid_2']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid_2']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid_2']['set_breadcrumb'] = 0;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid_3']['id'] = 'tid_3';
  $handler->display->display_options['arguments']['tid_3']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid_3']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_3']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid_3']['exception']['value'] = '-1';
  $handler->display->display_options['arguments']['tid_3']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_3']['default_argument_options']['argument'] = '-1';
  $handler->display->display_options['arguments']['tid_3']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid_3']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_3']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_3']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_3']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid_3']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_3']['validate_options']['vocabularies'] = array(
    'emusik_tx_supplier' => 'emusik_tx_supplier',
  );
  $handler->display->display_options['arguments']['tid_3']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid_3']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid_3']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid_3']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid_3']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid_3']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid_3']['set_breadcrumb'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'emusik_playlist' => 'emusik_playlist',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Article type',
    ),
    'tid_1' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Category',
    ),
    'tid_2' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Material type',
    ),
    'tid_3' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Supplier',
    ),
  );

  /* Display: Feed (playlists) */
  $handler = $view->new_display('feed', 'Feed (playlists)', 'feed_3');
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'feed_3';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
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
  /* Filter criterion: Content: Article type (field_ding_article_type) */
  $handler->display->display_options['filters']['field_ding_article_type_tid_1']['id'] = 'field_ding_article_type_tid_1';
  $handler->display->display_options['filters']['field_ding_article_type_tid_1']['table'] = 'field_data_field_ding_article_type';
  $handler->display->display_options['filters']['field_ding_article_type_tid_1']['field'] = 'field_ding_article_type_tid';
  $handler->display->display_options['filters']['field_ding_article_type_tid_1']['value'] = array(
    0 => '2',
  );
  $handler->display->display_options['filters']['field_ding_article_type_tid_1']['expose']['operator_id'] = 'field_ding_article_type_tid_1_op';
  $handler->display->display_options['filters']['field_ding_article_type_tid_1']['expose']['label'] = 'Article type (field_ding_article_type)';
  $handler->display->display_options['filters']['field_ding_article_type_tid_1']['expose']['operator'] = 'field_ding_article_type_tid_1_op';
  $handler->display->display_options['filters']['field_ding_article_type_tid_1']['expose']['identifier'] = 'field_ding_article_type_tid_1';
  $handler->display->display_options['filters']['field_ding_article_type_tid_1']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_ding_article_type_tid_1']['vocabulary'] = 'emusik_tx_article_type';
  $handler->display->display_options['filters']['field_ding_article_type_tid_1']['error_message'] = 0;
  $handler->display->display_options['path'] = 'emusik/rss/article-playlist';
  $translatables['emusik'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Post date'),
    t('All'),
    t('Search Terms'),
    t('Feed'),
    t('Concerts'),
    t('View panes'),
    t('Article list (contextual)'),
    t('Playlist list (contextual)'),
    t('Frontpage: Article list (contextual)'),
    t('Alle'),
    t('Frontpage: Playlist list (contextual)'),
    t('Feed (playlists)'),
    t('Article type (field_ding_article_type)'),
  );

  );
  $export['emusik'] = $view;

  return $export;
}
