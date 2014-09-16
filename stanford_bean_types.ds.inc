<?php
/**
 * @file
 * stanford_bean_types.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function stanford_bean_types_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_12_col_banner_tall';
  $ds_view_mode->label = 'Banner 12 Column Tall';
  $ds_view_mode->entities = array(
    'bean' => 'bean',
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_12_col_banner_tall'] = $ds_view_mode;

  return $export;
}
