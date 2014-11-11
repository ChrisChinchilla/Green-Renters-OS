<?php
/**
 * @file
 * creative_commons_block.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function creative_commons_block_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'cc_block';
  $context->description = '';
  $context->tag = 'Green Renters';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'idea' => 'idea',
        'resource' => 'resource',
        'workshop' => 'workshop',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ccblock-ccblock' => array(
          'module' => 'ccblock',
          'delta' => 'ccblock',
          'region' => 'footer_secondcolumn',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Green Renters');
  $export['cc_block'] = $context;

  return $export;
}
