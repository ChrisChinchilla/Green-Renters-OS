<?php
/**
 * @file
 * green_renters_import_and_export.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function green_renters_import_and_export_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}
