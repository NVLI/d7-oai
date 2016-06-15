<?php
/**
 * @file
 * nvli_audio_video.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nvli_audio_video_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contributor|node|audio_video|form';
  $field_group->group_name = 'group_contributor';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'audio_video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contributor',
    'weight' => '12',
    'children' => array(
      0 => 'field_artists',
      1 => 'field_accompanying_artists',
      2 => 'field_recordists',
      3 => 'field_composers',
      4 => 'field_lyricists',
      5 => 'field_any_other',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contributor field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_contributor|node|audio_video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_extent|node|audio_video|form';
  $field_group->group_name = 'group_extent';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'audio_video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Extent',
    'weight' => '19',
    'children' => array(
      0 => 'field_digital_file_size',
      1 => 'field_duration',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-extent field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_extent|node|audio_video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_format|node|audio_video|form';
  $field_group->group_name = 'group_format';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'audio_video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Format ',
    'weight' => '17',
    'children' => array(
      0 => 'field_format',
      1 => 'field_codec',
      2 => 'field_bit_rate_bit_depth',
      3 => 'field_sampling_frequency',
      4 => 'field_playback_equipment',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-format field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_format|node|audio_video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_language|node|audio_video|form';
  $field_group->group_name = 'group_language';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'audio_video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Language',
    'weight' => '16',
    'children' => array(
      0 => 'field_language',
      1 => 'field_dialect',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-language field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_language|node|audio_video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_medium|node|audio_video|form';
  $field_group->group_name = 'group_medium';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'audio_video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Medium',
    'weight' => '5',
    'children' => array(
      0 => 'field_medium',
      1 => 'field_spatial',
      2 => 'field_temporal',
      3 => 'field_extent_original',
      4 => 'field_created',
      5 => 'field_condition',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-medium field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_medium|node|audio_video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_source|node|audio_video|form';
  $field_group->group_name = 'group_source';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'audio_video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Source',
    'weight' => '2',
    'children' => array(
      0 => 'field_source',
      1 => 'field_collection',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-source field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_source|node|audio_video|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contributor');
  t('Extent');
  t('Format ');
  t('Language');
  t('Medium');
  t('Source');

  return $field_groups;
}
