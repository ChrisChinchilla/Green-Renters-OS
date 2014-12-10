<?php
/**
 * @file
 * green_renters_workshops.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function green_renters_workshops_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'workshops_layout';
  $context->description = '';
  $context->tag = 'Workshops';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'workshops' => 'workshops',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-workshop_listing-block_1' => array(
          'module' => 'views',
          'delta' => 'workshop_listing-block_1',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Workshops');
  $export['workshops_layout'] = $context;

  return $export;
}
