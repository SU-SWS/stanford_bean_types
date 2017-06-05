<?php
/**
 * @file
 * stanford_bean_types_call_to_action.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_bean_types_call_to_action_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_cta_style|bean|stanford_call_to_action|default';
  $field_group->group_name = 'group_s_cta_style';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_call_to_action';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_cta_link',
      1 => 'field_s_cta_image',
      2 => 'field_s_cta_icon',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-s-cta-style field-group-fieldset cta-container',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_cta_style|bean|stanford_call_to_action|default'] = $field_group;

  return $field_groups;
}
