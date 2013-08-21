<?php
/**
 * @file
 * stanford_bean_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_bean_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_contact_us_address|bean|stanford_contact|default';
  $field_group->group_name = 'group_s_contact_us_address';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_contact';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Address',
    'weight' => '1',
    'children' => array(
      0 => 'field_s_contact_address_line_1',
      1 => 'field_s_contact_address_line_2',
      2 => 'field_s_contact_city_state_zip',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Address',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_contact_us_address|bean|stanford_contact|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard_content|bean|stanford_postcard|default';
  $field_group->group_name = 'group_s_postcard_content';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_postcard';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Content',
    'weight' => '8',
    'children' => array(
      0 => 'field_s_postcard_body',
      1 => 'field_s_postcard_file',
      2 => 'field_s_postcard_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Content',
      'instance_settings' => array(
        'classes' => 'postcard-content',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard_content|bean|stanford_postcard|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard_content|bean|stanford_postcard|stanford_med_profile';
  $field_group->group_name = 'group_s_postcard_content';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_postcard';
  $field_group->mode = 'stanford_med_profile';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Content',
    'weight' => '7',
    'children' => array(
      0 => 'field_s_postcard_body',
      1 => 'field_s_postcard_file',
      2 => 'field_s_postcard_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Content',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard_content|bean|stanford_postcard|stanford_med_profile'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard_image|bean|stanford_postcard|default';
  $field_group->group_name = 'group_s_postcard_image';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_postcard';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Image',
    'weight' => '6',
    'children' => array(
      0 => 'field_s_image_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Image',
      'instance_settings' => array(
        'classes' => 'postcard',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard_image|bean|stanford_postcard|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard_image|bean|stanford_postcard|stanford_med_profile';
  $field_group->group_name = 'group_s_postcard_image';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_postcard';
  $field_group->mode = 'stanford_med_profile';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Image',
    'weight' => '6',
    'children' => array(
      0 => 'field_s_image_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Image',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard_image|bean|stanford_postcard|stanford_med_profile'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard|bean|stanford_postcard|default';
  $field_group->group_name = 'group_s_postcard';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_postcard';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Postcard',
    'weight' => '1',
    'children' => array(
      0 => 'group_s_postcard_content',
      1 => 'group_s_postcard_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard',
      'instance_settings' => array(
        'classes' => 'postcard',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard|bean|stanford_postcard|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard|bean|stanford_postcard|stanford_med_profile';
  $field_group->group_name = 'group_s_postcard';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_postcard';
  $field_group->mode = 'stanford_med_profile';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Postcard',
    'weight' => '1',
    'children' => array(
      0 => 'group_s_postcard_image',
      1 => 'group_s_postcard_content',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard|bean|stanford_postcard|stanford_med_profile'] = $field_group;

  return $export;
}
