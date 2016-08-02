<?php
/**
 * @file
 * nvli_audio_video.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nvli_audio_video_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'audio_video_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OAI-PMH Entity End Points';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Audio / Video Content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['label'] = 'dc:source';
  $handler->display->display_options['fields']['field_source']['hide_empty'] = TRUE;
  /* Field: Content: Identifier */
  $handler->display->display_options['fields']['field_identifier']['id'] = 'field_identifier';
  $handler->display->display_options['fields']['field_identifier']['table'] = 'field_data_field_identifier';
  $handler->display->display_options['fields']['field_identifier']['field'] = 'field_identifier';
  $handler->display->display_options['fields']['field_identifier']['label'] = 'dc:identifier';
  $handler->display->display_options['fields']['field_identifier']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'dc:title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Relation */
  $handler->display->display_options['fields']['field_relation']['id'] = 'field_relation';
  $handler->display->display_options['fields']['field_relation']['table'] = 'field_data_field_relation';
  $handler->display->display_options['fields']['field_relation']['field'] = 'field_relation';
  $handler->display->display_options['fields']['field_relation']['label'] = 'dc:relation';
  $handler->display->display_options['fields']['field_relation']['hide_empty'] = TRUE;
  /* Field: Content: Rights */
  $handler->display->display_options['fields']['field_rights']['id'] = 'field_rights';
  $handler->display->display_options['fields']['field_rights']['table'] = 'field_data_field_rights';
  $handler->display->display_options['fields']['field_rights']['field'] = 'field_rights';
  $handler->display->display_options['fields']['field_rights']['label'] = 'dc:rights';
  $handler->display->display_options['fields']['field_rights']['hide_empty'] = TRUE;
  /* Field: Content: Subject */
  $handler->display->display_options['fields']['field_subject']['id'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['table'] = 'field_data_field_subject';
  $handler->display->display_options['fields']['field_subject']['field'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['label'] = 'dc:subject';
  $handler->display->display_options['fields']['field_subject']['hide_empty'] = TRUE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = 'dc:description';
  $handler->display->display_options['fields']['field_description']['hide_empty'] = TRUE;
  /* Field: Content: Creator */
  $handler->display->display_options['fields']['field_creator']['id'] = 'field_creator';
  $handler->display->display_options['fields']['field_creator']['table'] = 'field_data_field_creator';
  $handler->display->display_options['fields']['field_creator']['field'] = 'field_creator';
  $handler->display->display_options['fields']['field_creator']['label'] = 'dc:creator';
  $handler->display->display_options['fields']['field_creator']['hide_empty'] = TRUE;
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['label'] = 'dc:publisher';
  $handler->display->display_options['fields']['field_publisher']['hide_empty'] = TRUE;
  /* Field: Content: Artists */
  $handler->display->display_options['fields']['field_artists']['id'] = 'field_artists';
  $handler->display->display_options['fields']['field_artists']['table'] = 'field_data_field_artists';
  $handler->display->display_options['fields']['field_artists']['field'] = 'field_artists';
  $handler->display->display_options['fields']['field_artists']['label'] = 'dc:contributor';
  $handler->display->display_options['fields']['field_artists']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_artists']['delta_offset'] = '0';
  /* Field: Content: Date (Broadcast/Release) */
  $handler->display->display_options['fields']['field_date_broadcast_release']['id'] = 'field_date_broadcast_release';
  $handler->display->display_options['fields']['field_date_broadcast_release']['table'] = 'field_data_field_date_broadcast_release';
  $handler->display->display_options['fields']['field_date_broadcast_release']['field'] = 'field_date_broadcast_release';
  $handler->display->display_options['fields']['field_date_broadcast_release']['label'] = 'dc:date';
  $handler->display->display_options['fields']['field_date_broadcast_release']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_date_broadcast_release']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_type']['id'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['table'] = 'field_data_field_type';
  $handler->display->display_options['fields']['field_type']['field'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['label'] = 'dc:type';
  $handler->display->display_options['fields']['field_type']['hide_empty'] = TRUE;
  /* Field: Content: Coverage */
  $handler->display->display_options['fields']['field_coverage']['id'] = 'field_coverage';
  $handler->display->display_options['fields']['field_coverage']['table'] = 'field_data_field_coverage';
  $handler->display->display_options['fields']['field_coverage']['field'] = 'field_coverage';
  $handler->display->display_options['fields']['field_coverage']['label'] = 'dc:coverage';
  $handler->display->display_options['fields']['field_coverage']['hide_empty'] = TRUE;
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['label'] = 'dc:language';
  $handler->display->display_options['fields']['field_language']['hide_empty'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'dc:format';
  $handler->display->display_options['fields']['type']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
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
    'audio_video' => 'audio_video',
  );

  /* Display: OAI-PMH */
  $handler = $view->new_display('views_oai_pmh', 'OAI-PMH', 'views_oai_pmh_1');
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
  $handler->display->display_options['path'] = 'av/oai-pmh/request';
  $export['audio_video_content'] = $view;

  return $export;
}
