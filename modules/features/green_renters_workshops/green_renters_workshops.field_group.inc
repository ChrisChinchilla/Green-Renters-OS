<?php
/**
 * @file
 * green_renters_workshops.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function green_renters_workshops_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_file_links|node|workshop|form';
  $field_group->group_name = 'group_file_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'workshop';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'File Links',
    'weight' => '34',
    'children' => array(
      0 => 'field_public_files',
      1 => 'field_private_files',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-file-links field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_file_links|node|workshop|form'] = $field_group;

  return $export;
}
