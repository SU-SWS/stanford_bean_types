<?php
/**
 * @file
 * stanford_bean_types_permissions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_bean_types_permissions_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}
