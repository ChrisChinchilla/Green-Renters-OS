<?php
/**
 * @file
 * civicrm_intergration.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function civicrm_intergration_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contributions_memberships';
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
        'boxes-member_block' => array(
          'module' => 'boxes',
          'delta' => 'member_block',
          'region' => 'sidebar_first',
          'weight' => '5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Green Renters');
  $export['contributions_memberships'] = $context;

  return $export;
}
