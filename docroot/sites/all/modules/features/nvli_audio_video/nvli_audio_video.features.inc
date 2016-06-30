<?php
/**
 * @file
 * nvli_audio_video.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nvli_audio_video_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nvli_audio_video_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nvli_audio_video_node_info() {
  $items = array(
    'audio_video' => array(
      'name' => t('Audio / Video'),
      'base' => 'node_content',
      'description' => t('Use this content type to generate the Audio / Video.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
