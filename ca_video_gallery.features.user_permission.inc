<?php
/**
 * @file
 * ca_video_gallery.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ca_video_gallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ca_video content'.
  $permissions['create ca_video content'] = array(
    'name' => 'create ca_video content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ca_video content'.
  $permissions['delete any ca_video content'] = array(
    'name' => 'delete any ca_video content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ca_video content'.
  $permissions['delete own ca_video content'] = array(
    'name' => 'delete own ca_video content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ca_video content'.
  $permissions['edit any ca_video content'] = array(
    'name' => 'edit any ca_video content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ca_video content'.
  $permissions['edit own ca_video content'] = array(
    'name' => 'edit own ca_video content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
