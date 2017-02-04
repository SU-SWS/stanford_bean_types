<?php
/**
 * @file
 * stanford_icon_grid.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_icon_grid_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_more_link_style|field_collection_item|field_s_icon_ext_columns|default';
  $field_group->group_name = 'group_s_more_link_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_icon_ext_columns';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'More Link Style',
    'weight' => '4',
    'children' => array(
      0 => 'field_s_icon_ext_columns_links',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'More Link Style',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'more-link',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_more_link_style|field_collection_item|field_s_icon_ext_columns|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_title_styles|field_collection_item|field_s_icon_ext_columns|default';
  $field_group->group_name = 'group_s_title_styles';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_icon_ext_columns';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title Styles',
    'weight' => '3',
    'children' => array(
      0 => 'field_s_icon_ext_columns_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Title Styles',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'element' => 'h2',
        'show_label' => '0',
        'label_element' => 'h2',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_s_title_styles|field_collection_item|field_s_icon_ext_columns|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('More Link Style');
  t('Title Styles');

  return $field_groups;
}
