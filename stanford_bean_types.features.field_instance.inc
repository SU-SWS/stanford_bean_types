<?php
/**
 * @file
 * stanford_bean_types.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function stanford_bean_types_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-stanford_banner-field_s_image_info'
  $field_instances['bean-stanford_banner-field_s_image_info'] = array(
    'bundle' => 'stanford_banner',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Upload a banner image',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 0,
          'edit' => '',
          'view_mode' => 'stanford_9_col_banner',
        ),
        'type' => 'field_collection_view',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_image_info',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'bean-stanford_contact-field_s_contact_address_line_1'
  $field_instances['bean-stanford_contact-field_s_contact_address_line_1'] = array(
    'bundle' => 'stanford_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_contact_address_line_1',
    'label' => 'Address Line 1',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'bean-stanford_contact-field_s_contact_address_line_2'
  $field_instances['bean-stanford_contact-field_s_contact_address_line_2'] = array(
    'bundle' => 'stanford_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_contact_address_line_2',
    'label' => 'Address Line 2',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'bean-stanford_contact-field_s_contact_city_state_zip'
  $field_instances['bean-stanford_contact-field_s_contact_city_state_zip'] = array(
    'bundle' => 'stanford_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_contact_city_state_zip',
    'label' => 'City, State, Zip',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'bean-stanford_contact-field_s_contact_email'
  $field_instances['bean-stanford_contact-field_s_contact_email'] = array(
    'bundle' => 'stanford_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_contact_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'bean-stanford_contact-field_s_contact_fax'
  $field_instances['bean-stanford_contact-field_s_contact_fax'] = array(
    'bundle' => 'stanford_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This text field displays the fax number (e.g., "(555) 555-555" or for international numbers: "+31 42 123 4567").',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_contact_fax',
    'label' => 'Fax',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'bean-stanford_contact-field_s_contact_link'
  $field_instances['bean-stanford_contact-field_s_contact_link'] = array(
    'bundle' => 'stanford_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Each link is a URL about this website. The title provides a human readable name (e.g., "Map Link"). For each title enter the corresponding URL (e.g., "http://campus-map.stanford.edu/").',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_contact_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'bean-stanford_contact-field_s_contact_phone'
  $field_instances['bean-stanford_contact-field_s_contact_phone'] = array(
    'bundle' => 'stanford_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_contact_phone',
    'label' => 'Phone',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'bean-stanford_large_block-field_s_large_blk_read_more_link'
  $field_instances['bean-stanford_large_block-field_s_large_blk_read_more_link'] = array(
    'bundle' => 'stanford_large_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_large_blk_read_more_link',
    'label' => 'Read More Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'more-link',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'required',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'bean-stanford_large_block-field_s_large_block_body'
  $field_instances['bean-stanford_large_block-field_s_large_block_body'] = array(
    'bundle' => 'stanford_large_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_large_block_body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'bean-stanford_large_block-field_s_large_block_file_insert'
  $field_instances['bean-stanford_large_block-field_s_large_block_file_insert'] = array(
    'bundle' => 'stanford_large_block',
    'deleted' => 0,
    'description' => 'Upload and insert file links into your content',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_large_block_file_insert',
    'label' => 'File Insert',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => '',
      'file_extensions' => 'txt pdf doc docx ppt pptx xls xlsx xml odt zip rtf',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'insert' => 1,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'image' => 0,
          'image_3-col-header' => 0,
          'image_3-col-well-header' => 0,
          'image_3-col-well-profile' => 0,
          'image_4-col-header' => 0,
          'image_6-col-banner' => 0,
          'image_6-col-header' => 0,
          'image_6-col-header-short' => 0,
          'image_8-col-banner' => 0,
          'image_9-col-banner' => 0,
          'image_12-col-banner' => 0,
          'image_icon' => 0,
          'image_large' => 0,
          'image_large-landscape' => 0,
          'image_large-profile' => 0,
          'image_large-scaled' => 0,
          'image_large-square' => 0,
          'image_med-landscape' => 0,
          'image_med-landscape-scaled' => 0,
          'image_med-profile' => 0,
          'image_med-profile-scaled' => 0,
          'image_med-square' => 0,
          'image_medium' => 0,
          'image_sm-landscape' => 0,
          'image_sm-square' => 0,
          'image_thmb-landscape' => 0,
          'image_thmb-profile' => 0,
          'image_thmb-square' => 0,
          'image_thumbnail' => 0,
          'link' => 'link',
        ),
        'insert_width' => '',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'bean-stanford_large_block-field_s_large_block_image_insert'
  $field_instances['bean-stanford_large_block-field_s_large_block_image_insert'] = array(
    'bundle' => 'stanford_large_block',
    'deleted' => 0,
    'description' => 'Upload and insert an image into your content.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_large_block_image_insert',
    'label' => 'Image Insert',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '1000x1000',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 1,
        'insert_class' => '',
        'insert_default' => 'image_large-square',
        'insert_styles' => array(
          'auto' => 'auto',
          'image' => 'image',
          'image_3-col-header' => 0,
          'image_3-col-well-header' => 0,
          'image_3-col-well-profile' => 0,
          'image_4-col-header' => 0,
          'image_6-col-banner' => 0,
          'image_6-col-header' => 0,
          'image_6-col-header-short' => 0,
          'image_8-col-banner' => 0,
          'image_9-col-banner' => 0,
          'image_12-col-banner' => 0,
          'image_icon' => 0,
          'image_large' => 0,
          'image_large-landscape' => 0,
          'image_large-profile' => 0,
          'image_large-scaled' => 'image_large-scaled',
          'image_large-square' => 'image_large-square',
          'image_med-landscape' => 0,
          'image_med-landscape-scaled' => 0,
          'image_med-profile' => 0,
          'image_med-profile-scaled' => 0,
          'image_med-square' => 'image_med-square',
          'image_medium' => 0,
          'image_sm-landscape' => 0,
          'image_sm-square' => 'image_sm-square',
          'image_thmb-landscape' => 0,
          'image_thmb-profile' => 0,
          'image_thmb-square' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'bean-stanford_postcard-field_s_image_info'
  $field_instances['bean-stanford_postcard-field_s_image_info'] = array(
    'bundle' => 'stanford_postcard',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This displays an image in the block.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 0,
          'edit' => '',
          'view_mode' => 'stanford_3_col_header',
        ),
        'type' => 'field_collection_view',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_image_info',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'bean-stanford_postcard-field_s_postcard_body'
  $field_instances['bean-stanford_postcard-field_s_postcard_body'] = array(
    'bundle' => 'stanford_postcard',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_postcard_body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'bean-stanford_postcard-field_s_postcard_file'
  $field_instances['bean-stanford_postcard-field_s_postcard_file'] = array(
    'bundle' => 'stanford_postcard',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 4,
      ),
      'stanford_med_profile' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 5,
      ),
      'test' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_postcard_file',
    'label' => 'File',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'txt pdf doc docx xls xlsx rtf',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'insert' => 1,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'image' => 0,
          'image_3-col-header' => 0,
          'image_3-col-well-header' => 0,
          'image_3-col-well-profile' => 0,
          'image_4-col-header' => 0,
          'image_6-col-banner' => 0,
          'image_6-col-header' => 0,
          'image_6-col-header-short' => 0,
          'image_8-col-banner' => 0,
          'image_9-col-banner' => 0,
          'image_12-col-banner' => 0,
          'image_icon' => 0,
          'image_large' => 0,
          'image_large-landscape' => 0,
          'image_large-profile' => 0,
          'image_large-square' => 0,
          'image_med-landscape' => 0,
          'image_med-profile' => 0,
          'image_med-square' => 0,
          'image_medium' => 0,
          'image_sm-landscape' => 0,
          'image_sm-square' => 0,
          'image_stanford_30x30' => 0,
          'image_thmb-landscape' => 0,
          'image_thmb-profile' => 0,
          'image_thmb-square' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'bean-stanford_postcard-field_s_postcard_link'
  $field_instances['bean-stanford_postcard-field_s_postcard_link'] = array(
    'bundle' => 'stanford_postcard',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The link title should be a call to read more (e.g., "Learn more about our department"). The URL directs to more information.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
      'stanford_med_profile' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 6,
      ),
      'test' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_postcard_link',
    'label' => 'Read More Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'more-link',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'required',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'bean-stanford_social_media_connect-field_s_smc_facebook'
  $field_instances['bean-stanford_social_media_connect-field_s_smc_facebook'] = array(
    'bundle' => 'stanford_social_media_connect',
    'default_value' => array(
      0 => array(
        'title' => '',
        'url' => 'https://www.facebook.com/',
      ),
    ),
    'deleted' => 0,
    'description' => 'Insert a link to your Facebook account; if left empty, this field will not display.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_smc_facebook',
    'label' => 'Facebook',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'Facebook',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'bean-stanford_social_media_connect-field_s_smc_flickr'
  $field_instances['bean-stanford_social_media_connect-field_s_smc_flickr'] = array(
    'bundle' => 'stanford_social_media_connect',
    'default_value' => array(
      0 => array(
        'url' => 'http://www.flickr.com/',
      ),
    ),
    'deleted' => 0,
    'description' => 'Insert a link to your Flickr account; if left empty, this field will not display.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_smc_flickr',
    'label' => 'Flickr',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'Flickr',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'bean-stanford_social_media_connect-field_s_smc_googleplus'
  $field_instances['bean-stanford_social_media_connect-field_s_smc_googleplus'] = array(
    'bundle' => 'stanford_social_media_connect',
    'default_value' => array(
      0 => array(
        'url' => 'https://plus.google.com',
      ),
    ),
    'deleted' => 0,
    'description' => 'Insert a link to your Google+ account; if left empty, this field will not display.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_smc_googleplus',
    'label' => 'GooglePlus',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'GooglePlus',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'bean-stanford_social_media_connect-field_s_smc_linkedin'
  $field_instances['bean-stanford_social_media_connect-field_s_smc_linkedin'] = array(
    'bundle' => 'stanford_social_media_connect',
    'default_value' => array(
      0 => array(
        'url' => 'http://www.linkedin.com/',
      ),
    ),
    'deleted' => 0,
    'description' => 'Insert a link to your LinkedIn account; if left empty, this field will not display.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_smc_linkedin',
    'label' => 'LinkedIn',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'LinkedIn',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'bean-stanford_social_media_connect-field_s_smc_pinterest'
  $field_instances['bean-stanford_social_media_connect-field_s_smc_pinterest'] = array(
    'bundle' => 'stanford_social_media_connect',
    'default_value' => array(
      0 => array(
        'url' => 'http://pinterest.com/',
      ),
    ),
    'deleted' => 0,
    'description' => 'Insert a link to your Pinterest account; if left empty, this field will not display.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_smc_pinterest',
    'label' => 'Pinterest',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'Pinterest',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'bean-stanford_social_media_connect-field_s_smc_tumblr'
  $field_instances['bean-stanford_social_media_connect-field_s_smc_tumblr'] = array(
    'bundle' => 'stanford_social_media_connect',
    'default_value' => array(
      0 => array(
        'url' => 'https://www.tumblr.com/',
      ),
    ),
    'deleted' => 0,
    'description' => 'Insert a link to your Tumblr account; if left empty, this field will not display.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_smc_tumblr',
    'label' => 'Tumblr',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'Tumblr',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'bean-stanford_social_media_connect-field_s_smc_twitter'
  $field_instances['bean-stanford_social_media_connect-field_s_smc_twitter'] = array(
    'bundle' => 'stanford_social_media_connect',
    'default_value' => array(
      0 => array(
        'url' => 'https://twitter.com/',
      ),
    ),
    'deleted' => 0,
    'description' => 'Insert a link to your Twitter account; if left empty, this field will not display.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_smc_twitter',
    'label' => 'Twitter',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'Twitter',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'bean-stanford_social_media_connect-field_s_smc_vimeo'
  $field_instances['bean-stanford_social_media_connect-field_s_smc_vimeo'] = array(
    'bundle' => 'stanford_social_media_connect',
    'default_value' => array(
      0 => array(
        'url' => 'http://vimeo.com/',
      ),
    ),
    'deleted' => 0,
    'description' => 'Insert a link to your Vimeo account; if left empty, this field will not display.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_smc_vimeo',
    'label' => 'Vimeo',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'Vimeo',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'bean-stanford_social_media_connect-field_s_smc_youtube'
  $field_instances['bean-stanford_social_media_connect-field_s_smc_youtube'] = array(
    'bundle' => 'stanford_social_media_connect',
    'default_value' => array(
      0 => array(
        'url' => 'http://www.youtube.com/',
      ),
    ),
    'deleted' => 0,
    'description' => 'Insert a link to your YouTube account; if left empty, this field will not display.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_smc_youtube',
    'label' => 'YouTube',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'YouTube',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'bean-stanford_social_media_connect-field_s_smc_instagram'
  $field_instances['bean-stanford_social_media_connect-field_s_smc_instagram'] = array(
    'bundle' => 'stanford_social_media_connect',
    'default_value' => array(
      0 => array(
        'url' => 'http://www.instagram.com/',
      ),
    ),
    'deleted' => 0,
    'description' => 'Insert a link to your Instagram account; if left empty, this field will not display.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_s_smc_instagram',
    'label' => 'Instagram',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'Instagram',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address Line 1');
  t('Address Line 2');
  t('Body');
  t('Caption');
  t('City, State, Zip');
  t('Credits');
  t('Each link is a URL about this website. The title provides a human readable name (e.g., "Map Link"). For each title enter the corresponding URL (e.g., "http://campus-map.stanford.edu/").');
  t('Email');
  t('Enter the original name, if changed, and other information to aid in finding the original image.');
  t('Enter the photographer or organization credits.');
  t('Facebook');
  t('Fax');
  t('File');
  t('File Insert');
  t('Flickr');
  t('GooglePlus');
  t('Image');
  t('Image Insert');
  t('Insert a link to your Facebook account; if left empty, this field will not display.');
  t('Insert a link to your Flickr account; if left empty, this field will not display.');
  t('Insert a link to your Google+ account; if left empty, this field will not display.');
  t('Insert a link to your LinkedIn account; if left empty, this field will not display.');
  t('Insert a link to your Pinterest account; if left empty, this field will not display.');
  t('Insert a link to your Tumblr account; if left empty, this field will not display.');
  t('Insert a link to your Twitter account; if left empty, this field will not display.');
  t('Insert a link to your Vimeo account; if left empty, this field will not display.');
  t('Insert a link to your YouTube account; if left empty, this field will not display.');
  t('Link');
  t('LinkedIn');
  t('Optionally enter information to appear as a caption for this image. This text may be trimmed to 180 characters.');
  t('Phone');
  t('Pinterest');
  t('Read More Link');
  t('Source Info');
  t('The link title should be a call to read more (e.g., "Learn more about our department"). The URL directs to more information.');
  t('This displays an image in the block.');
  t('This text field displays the fax number (e.g., "(555) 555-555" or for international numbers: "+31 42 123 4567").');
  t('Tumblr');
  t('Twitter');
  t('Upload a banner image');
  t('Upload and insert an image into your content.');
  t('Upload and insert file links into your content');
  t('Vimeo');
  t('YouTube');

  return $field_instances;
}
