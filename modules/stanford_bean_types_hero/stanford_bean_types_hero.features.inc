<?php
/**
 * @file
 * stanford_bean_types_hero.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_bean_types_hero_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}
