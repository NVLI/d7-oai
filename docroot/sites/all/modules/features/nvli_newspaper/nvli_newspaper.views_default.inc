<?php
/**
 * @file
 * nvli_newspaper.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nvli_newspaper_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'oai_pmh_newspaper_entity_end_points';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OAI-PMH Newspaper Entity End Points';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Newspaper ( OAI-PMH )';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'dc:title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Identifier */
  $handler->display->display_options['fields']['field_identifier']['id'] = 'field_identifier';
  $handler->display->display_options['fields']['field_identifier']['table'] = 'field_data_field_identifier';
  $handler->display->display_options['fields']['field_identifier']['field'] = 'field_identifier';
  $handler->display->display_options['fields']['field_identifier']['label'] = 'dc:identifier';
  $handler->display->display_options['fields']['field_identifier']['hide_empty'] = TRUE;
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['label'] = 'dc:publisher';
  $handler->display->display_options['fields']['field_publisher']['hide_empty'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_type']['id'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['table'] = 'field_data_field_type';
  $handler->display->display_options['fields']['field_type']['field'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['label'] = 'dc:type';
  $handler->display->display_options['fields']['field_type']['hide_empty'] = TRUE;
  /* Field: Content: Format */
  $handler->display->display_options['fields']['field_format']['id'] = 'field_format';
  $handler->display->display_options['fields']['field_format']['table'] = 'field_data_field_format';
  $handler->display->display_options['fields']['field_format']['field'] = 'field_format';
  $handler->display->display_options['fields']['field_format']['label'] = 'dc:format';
  $handler->display->display_options['fields']['field_format']['hide_empty'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'newspaper' => 'newspaper',
  );

  /* Display: Newspaper ( OAI-PMH ) */
  $handler = $view->new_display('views_oai_pmh', 'Newspaper ( OAI-PMH )', 'views_oai_pmh_1');
  $handler->display->display_options['display_description'] = 'Newspaper ( OAI-PMH )';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'views_oai_pmh_dc';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'dc';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'dc:title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_image_source']['id'] = 'field_image_source';
  $handler->display->display_options['fields']['field_image_source']['table'] = 'field_data_field_image_source';
  $handler->display->display_options['fields']['field_image_source']['field'] = 'field_image_source';
  $handler->display->display_options['fields']['field_image_source']['label'] = 'dc:source';
  $handler->display->display_options['fields']['field_image_source']['hide_empty'] = TRUE;
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['label'] = 'dc:language';
  $handler->display->display_options['fields']['field_language']['hide_empty'] = TRUE;
  /* Field: Content: Alternative */
  $handler->display->display_options['fields']['field_alternative']['id'] = 'field_alternative';
  $handler->display->display_options['fields']['field_alternative']['table'] = 'field_data_field_alternative';
  $handler->display->display_options['fields']['field_alternative']['field'] = 'field_alternative';
  $handler->display->display_options['fields']['field_alternative']['label'] = 'dc:coverage';
  $handler->display->display_options['fields']['field_alternative']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_alternative']['delta_offset'] = '0';
  /* Field: Content: Created */
  $handler->display->display_options['fields']['field_created']['id'] = 'field_created';
  $handler->display->display_options['fields']['field_created']['table'] = 'field_data_field_created';
  $handler->display->display_options['fields']['field_created']['field'] = 'field_created';
  $handler->display->display_options['fields']['field_created']['label'] = 'dc:date';
  $handler->display->display_options['fields']['field_created']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_created']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Image File */
  $handler->display->display_options['fields']['field_image_file']['id'] = 'field_image_file';
  $handler->display->display_options['fields']['field_image_file']['table'] = 'field_data_field_image_file';
  $handler->display->display_options['fields']['field_image_file']['field'] = 'field_image_file';
  $handler->display->display_options['fields']['field_image_file']['label'] = 'dc:identifier';
  $handler->display->display_options['fields']['field_image_file']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image_file']['delta_offset'] = '0';
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_image_source_1']['id'] = 'field_image_source_1';
  $handler->display->display_options['fields']['field_image_source_1']['table'] = 'field_data_field_image_source';
  $handler->display->display_options['fields']['field_image_source_1']['field'] = 'field_image_source';
  $handler->display->display_options['fields']['field_image_source_1']['label'] = 'dc:source';
  $handler->display->display_options['fields']['field_image_source_1']['hide_empty'] = TRUE;
  $handler->display->display_options['path'] = 'newspaper/oai-pmh/request';
  $export['oai_pmh_newspaper_entity_end_points'] = $view;

  return $export;
}
