<?php
/**
 * @file
 * nvli_audio_video.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nvli_audio_video_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
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
