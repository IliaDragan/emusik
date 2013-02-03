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
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
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

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'emusik/rss/latest';

  /* Display: Library recommendations */
  $handler = $view->new_display('panel_pane', 'Library recommendations', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Library recommendations';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'library-recommendations';
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
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['field_ding_body']['field_api_classes'] = 0;
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
    1 => '1',
  );
  $handler->display->display_options['filters']['field_ding_article_type_tid']['group'] = 0;
  $handler->display->display_options['filters']['field_ding_article_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_ding_article_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ding_article_type_tid']['vocabulary'] = 'emusik_tx_article_type';

  /* Display: Concerts */
  $handler = $view->new_display('panel_pane', 'Concerts', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'concerts';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
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
    'format_type' => 'long_date_only',
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
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
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
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'latest-article ';
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
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['field_ding_body']['field_api_classes'] = 0;
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
    4 => '4',
  );
  $handler->display->display_options['filters']['field_ding_article_type_tid']['group'] = 0;
  $handler->display->display_options['filters']['field_ding_article_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_ding_article_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ding_article_type_tid']['vocabulary'] = 'emusik_tx_article_type';

  /* Display: Upcoming concert */
  $handler = $view->new_display('panel_pane', 'Upcoming concert', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming concert';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'upcoming-concert';
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
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['field_ding_body']['field_api_classes'] = 0;
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
    6 => '6',
  );
  $handler->display->display_options['filters']['field_ding_material_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_ding_material_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ding_material_type_tid']['vocabulary'] = 'emusik_tx_material_type';

  /* Display: Danish blogs recommendations */
  $handler = $view->new_display('panel_pane', 'Danish blogs recommendations', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Danish blogs recommendations';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'blog-recommendations';
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
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['field_ding_body']['field_api_classes'] = 0;
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
    12 => '12',
  );
  $handler->display->display_options['filters']['field_ding_supplier_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_ding_supplier_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ding_supplier_tid']['vocabulary'] = 'emusik_tx_supplier';

  /* Display: Album recomendations */
  $handler = $view->new_display('panel_pane', 'Album recomendations', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Album recomendations';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'album-recommendations';
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
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['field_ding_body']['field_api_classes'] = 0;
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
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Sort criterion: Content: Published */
  $handler->display->display_options['sorts']['status']['id'] = 'status';
  $handler->display->display_options['sorts']['status']['table'] = 'node';
  $handler->display->display_options['sorts']['status']['field'] = 'status';
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
    1 => '1',
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
    7 => '7',
    8 => '8',
  );
  $handler->display->display_options['filters']['field_ding_material_type_tid']['group'] = 0;
  $handler->display->display_options['filters']['field_ding_material_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_ding_material_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ding_material_type_tid']['vocabulary'] = 'emusik_tx_material_type';

  /* Display: Article list (contextual) */
  $handler = $view->new_display('panel_pane', 'Article list (contextual)', 'panel_pane_7');
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
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
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
  $handler->display->display_options['fields']['field_ding_body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_ding_body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ding_body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ding_body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_ding_body']['settings'] = array(
    'trim_length' => '400',
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
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
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
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
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
  $translatables['emusik'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Feed'),
    t('Library recommendations'),
    t('<a href="[path]" class="more">More</a>'),
    t('View panes'),
    t('Concerts'),
    t('Latest article'),
    t('Upcoming concert'),
    t('Danish blogs recommendations'),
    t('Album recomendations'),
    t('Article list (contextual)'),
    t('All'),
    t('Playlist list (contextual)'),
  );
  $export['emusik'] = $view;

  return $export;
}
