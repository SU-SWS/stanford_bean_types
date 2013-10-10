<?php
/**
 * @file
 * stanford_bean_types.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function stanford_bean_types_user_default_permissions() {
  $permissions = array();

  // Exported permission: create any stanford_banner bean.
  $permissions['create any stanford_banner bean'] = array(
    'name' => 'create any stanford_banner bean',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: create any stanford_contact bean.
  $permissions['create any stanford_contact bean'] = array(
    'name' => 'create any stanford_contact bean',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: create any stanford_large_block bean.
  $permissions['create any stanford_large_block bean'] = array(
    'name' => 'create any stanford_large_block bean',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: create any stanford_postcard bean.
  $permissions['create any stanford_postcard bean'] = array(
    'name' => 'create any stanford_postcard bean',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: create any stanford_social_media_connect bean.
  $permissions['create any stanford_social_media_connect bean'] = array(
    'name' => 'create any stanford_social_media_connect bean',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: delete any stanford_banner bean.
  $permissions['delete any stanford_banner bean'] = array(
    'name' => 'delete any stanford_banner bean',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: delete any stanford_contact bean.
  $permissions['delete any stanford_contact bean'] = array(
    'name' => 'delete any stanford_contact bean',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: delete any stanford_large_block bean.
  $permissions['delete any stanford_large_block bean'] = array(
    'name' => 'delete any stanford_large_block bean',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: delete any stanford_postcard bean.
  $permissions['delete any stanford_postcard bean'] = array(
    'name' => 'delete any stanford_postcard bean',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: delete any stanford_social_media_connect bean.
  $permissions['delete any stanford_social_media_connect bean'] = array(
    'name' => 'delete any stanford_social_media_connect bean',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
