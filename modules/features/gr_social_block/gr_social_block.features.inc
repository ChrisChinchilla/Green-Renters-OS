<?php
/**
 * @file
 * gr_social_block.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gr_social_block_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
