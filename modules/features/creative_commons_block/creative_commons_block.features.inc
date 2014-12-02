<?php
/**
 * @file
 * creative_commons_block.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function creative_commons_block_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
