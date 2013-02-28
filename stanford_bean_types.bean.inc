<?php
/**
 * @file
 * stanford_bean_types.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function stanford_bean_types_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'stanford_banner';
  $bean_type->label = 'Stanford Banner';
  $bean_type->options = '';
  $bean_type->description = 'Displays a banner image to be used in the header on pages.';
  $export['stanford_banner'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'stanford_postcard';
  $bean_type->label = 'Stanford Postcard';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['stanford_postcard'] = $bean_type;

  return $export;
}
