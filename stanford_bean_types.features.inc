<?php
/**
 * @file
 * stanford_bean_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_bean_types_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function stanford_bean_types_views_api() {
  return array("version" => "3.0");
}
