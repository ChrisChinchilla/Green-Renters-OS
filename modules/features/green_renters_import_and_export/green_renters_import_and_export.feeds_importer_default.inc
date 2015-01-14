<?php
/**
 * @file
 * green_renters_import_and_export.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function green_renters_import_and_export_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'g6';
  $feeds_importer->config = array(
    'name' => 'G6',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => FALSE,
        'allowed_extensions' => 'txt csv tsv xml opml',
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'flickr',
          1 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'bundle' => 'article',
        'update_existing' => '1',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'terms',
            'target' => 'field_tags',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          3 => array(
            'source' => 'published',
            'target' => 'created',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'live',
            'target' => 'status',
            'unique' => FALSE,
          ),
        ),
        'input_format' => 'full_html',
        'author' => '10',
        'authorize' => 1,
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['g6'] = $feeds_importer;

  return $export;
}
