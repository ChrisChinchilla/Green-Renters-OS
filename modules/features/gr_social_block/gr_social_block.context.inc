<?php
/**
 * @file
 * gr_social_block.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function gr_social_block_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'social-block';
  $context->description = '';
  $context->tag = 'Green Renters';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-social_buttons' => array(
          'module' => 'boxes',
          'delta' => 'social_buttons',
          'region' => 'sidebar_first',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Green Renters');
  $export['social-block'] = $context;

  return $export;
}
