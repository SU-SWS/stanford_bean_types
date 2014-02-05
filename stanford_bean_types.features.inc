<?php
/**
 * @file
 * stanford_bean_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_bean_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "bean" && $api == "types") {
    return array("version" => "5");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function stanford_bean_types_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * [stanford_bean_types_bean_types_api_info description]
 * @return [type] [description]
 */
function stanford_bean_types_bean_types_api_info() {
  return array(
    'api' => bean_current_version(),
  );
}
