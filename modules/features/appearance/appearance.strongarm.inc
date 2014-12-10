<?php
/**
 * @file
 * appearance.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function appearance_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'color_greenrenters7_files';
  $strongarm->value = array(
    0 => 'public://color/greenrenters7-c9c37232/logo.png',
    1 => 'public://color/greenrenters7-c9c37232/colors.css',
  );
  $export['color_greenrenters7_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'color_greenrenters7_logo';
  $strongarm->value = 'public://color/greenrenters7-c9c37232/logo.png';
  $export['color_greenrenters7_logo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'color_greenrenters7_palette';
  $strongarm->value = array(
    'top' => '#d0d0d0',
    'bottom' => '#c2c4c5',
    'bg' => '#ffffff',
    'sidebar' => '#ffffff',
    'sidebarborders' => '#cccccc',
    'footer' => '#24272c',
    'titleslogan' => '#000000',
    'text' => '#4a4a4a',
    'link' => '#019dbf',
  );
  $export['color_greenrenters7_palette'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'color_greenrenters7_stylesheets';
  $strongarm->value = array(
    0 => 'public://color/greenrenters7-c9c37232/colors.css',
  );
  $export['color_greenrenters7_stylesheets'] = $strongarm;

  return $export;
}
