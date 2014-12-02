<?php
/**
 * @file
 * civicrm_intergration.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function civicrm_intergration_user_default_roles() {
  $roles = array();

  // Exported role: Individual member.
  $roles['Individual member'] = array(
    'name' => 'Individual member',
    'weight' => 3,
  );

  return $roles;
}
