<?php
/**
 * @file
 * nvli_newspaper.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function nvli_newspaper_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'museum_importer';
  $feeds_importer->config = array(
    'name' => 'Museum Importer',
    'description' => 'Museum Importer',
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
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'publisher',
            'target' => 'field_publisher',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'date',
            'target' => 'field_date',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'type',
            'target' => 'field_type',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'format',
            'target' => 'field_format',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'image_file',
            'target' => 'field_image_file',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'source',
            'target' => 'field_image_source',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'museum',
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
  $export['museum_importer'] = $feeds_importer;

  return $export;
}
