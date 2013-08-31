<?php
/**
 * @file
 * mentee_profile.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mentee_profile_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'edit any mentee profile'.
  $permissions['edit any mentee profile'] = array(
    'name' => 'edit any mentee profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own mentee profile'.
  $permissions['edit own mentee profile'] = array(
    'name' => 'edit own mentee profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'view any mentee profile'.
  $permissions['view any mentee profile'] = array(
    'name' => 'view any mentee profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'view own mentee profile'.
  $permissions['view own mentee profile'] = array(
    'name' => 'view own mentee profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  return $permissions;
}
