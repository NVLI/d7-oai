<?php
/**
 * @file
 * nvli_audio_video.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function nvli_audio_video_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'audio_video_importer';
  $feeds_importer->config = array(
    'name' => 'Audio / Video Importer',
    'description' => 'Audio / Video Importer',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Body',
            'target' => 'body',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Source',
            'target' => 'field_source',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Collection',
            'target' => 'field_collection',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Identifier',
            'target' => 'field_identifier',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Alternative',
            'target' => 'field_alternative',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Medium',
            'target' => 'field_medium',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Extent_Original',
            'target' => 'field_extent_original:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'Spatial',
            'target' => 'field_spatial',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'Temporal',
            'target' => 'field_temporal',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'Created',
            'target' => 'field_created:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'Condition',
            'target' => 'field_condition',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          12 => array(
            'source' => 'Relation',
            'target' => 'field_relation',
            'unique' => FALSE,
            'language' => 'und',
          ),
          13 => array(
            'source' => 'Rights',
            'target' => 'field_rights',
            'unique' => FALSE,
            'language' => 'und',
          ),
          14 => array(
            'source' => 'Subject',
            'target' => 'field_subject',
            'unique' => FALSE,
            'language' => 'und',
          ),
          15 => array(
            'source' => 'Keywords',
            'target' => 'field_keywords',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          16 => array(
            'source' => 'Description',
            'target' => 'field_description',
            'unique' => FALSE,
            'language' => 'und',
          ),
          17 => array(
            'source' => 'Creator',
            'target' => 'field_creator',
            'unique' => FALSE,
            'language' => 'und',
          ),
          18 => array(
            'source' => 'Publisher',
            'target' => 'field_publisher',
            'unique' => FALSE,
            'language' => 'und',
          ),
          19 => array(
            'source' => 'Artists',
            'target' => 'field_artists',
            'unique' => FALSE,
            'language' => 'und',
          ),
          20 => array(
            'source' => 'Accompanying_Artists',
            'target' => 'field_accompanying_artists',
            'unique' => FALSE,
            'language' => 'und',
          ),
          21 => array(
            'source' => 'Recordists',
            'target' => 'field_recordists',
            'unique' => FALSE,
            'language' => 'und',
          ),
          22 => array(
            'source' => 'Composers',
            'target' => 'field_composers',
            'unique' => FALSE,
            'language' => 'und',
          ),
          23 => array(
            'source' => 'Lyricists',
            'target' => 'field_lyricists',
            'unique' => FALSE,
            'language' => 'und',
          ),
          24 => array(
            'source' => 'Any_Other',
            'target' => 'field_any_other',
            'unique' => FALSE,
            'language' => 'und',
          ),
          25 => array(
            'source' => 'Date_Broadcast_Release',
            'target' => 'field_date_broadcast_release:end',
            'unique' => FALSE,
            'language' => 'und',
          ),
          26 => array(
            'source' => 'Type',
            'target' => 'field_type',
            'unique' => FALSE,
            'language' => 'und',
          ),
          27 => array(
            'source' => 'Type',
            'target' => 'field_coverage',
            'unique' => FALSE,
            'language' => 'und',
          ),
          28 => array(
            'source' => 'Language',
            'target' => 'field_language',
            'unique' => FALSE,
            'language' => 'und',
          ),
          29 => array(
            'source' => 'Dialect',
            'target' => 'field_dialect',
            'unique' => FALSE,
            'language' => 'und',
          ),
          30 => array(
            'source' => 'Format',
            'target' => 'field_format',
            'unique' => FALSE,
            'language' => 'und',
          ),
          31 => array(
            'source' => 'Codec',
            'target' => 'field_codec',
            'unique' => FALSE,
            'language' => 'und',
          ),
          32 => array(
            'source' => 'Bit_Rate_Bit_Depth',
            'target' => 'field_bit_rate_bit_depth',
            'unique' => FALSE,
            'language' => 'und',
          ),
          33 => array(
            'source' => 'Sampling_Frequency',
            'target' => 'field_sampling_frequency',
            'unique' => FALSE,
            'language' => 'und',
          ),
          34 => array(
            'source' => 'Playback_Equipment_Used',
            'target' => 'field_playback_equipment',
            'unique' => FALSE,
            'language' => 'und',
          ),
          35 => array(
            'source' => 'A_to_D_Convertor_Mak_Model',
            'target' => 'field_a_to_d_convertor_make_mode',
            'unique' => FALSE,
            'language' => 'und',
          ),
          36 => array(
            'source' => 'Digital_File_Size',
            'target' => 'field_digital_file_size',
            'unique' => FALSE,
            'language' => 'und',
          ),
          37 => array(
            'source' => 'Duration',
            'target' => 'field_duration',
            'unique' => FALSE,
            'language' => 'und',
          ),
          38 => array(
            'source' => 'Date_of_Digitization',
            'target' => 'field_date_of_digitization:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          39 => array(
            'source' => 'LTO6_Tape_Number',
            'target' => 'field_lto6_tape_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
          40 => array(
            'source' => 'HDD_Number',
            'target' => 'field_hdd_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
          41 => array(
            'source' => 'Remarks',
            'target' => 'field_remarks',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'audio_video',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['audio_video_importer'] = $feeds_importer;

  return $export;
}
