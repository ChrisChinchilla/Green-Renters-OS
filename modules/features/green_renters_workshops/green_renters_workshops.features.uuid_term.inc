<?php
/**
 * @file
 * green_renters_workshops.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function green_renters_workshops_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Workshops',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0f4e6fe9-e5a3-4c60-acff-7fd0f51b03cd',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'All',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2abc391d-d6c9-4067-9c71-6145fb06c17c',
    'vocabulary_machine_name' => 'audience',
  );
  return $terms;
}
