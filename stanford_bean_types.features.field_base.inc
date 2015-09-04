<?php
/**
 * @file
 * stanford_bean_types.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function stanford_bean_types_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_s_big_text_block_body'
  $field_bases['field_s_big_text_block_body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_big_text_block_body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_s_big_text_block_lead_text'
  $field_bases['field_s_big_text_block_lead_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_big_text_block_lead_text',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 100,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_s_big_text_block_more_link'
  $field_bases['field_s_big_text_block_more_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_big_text_block_more_link',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_s_contact_address_line_1'
  $field_bases['field_s_contact_address_line_1'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_contact_address_line_1',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_s_contact_address_line_2'
  $field_bases['field_s_contact_address_line_2'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_contact_address_line_2',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_s_contact_city_state_zip'
  $field_bases['field_s_contact_city_state_zip'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_contact_city_state_zip',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_s_contact_email'
  $field_bases['field_s_contact_email'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_contact_email',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'email',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'email',
  );

  // Exported field_base: 'field_s_contact_fax'
  $field_bases['field_s_contact_fax'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_contact_fax',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_s_contact_link'
  $field_bases['field_s_contact_link'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_contact_link',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_s_contact_phone'
  $field_bases['field_s_contact_phone'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_contact_phone',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_s_icon_body'
  $field_bases['field_s_icon_body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_icon_body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_s_icon_icon'
  $field_bases['field_s_icon_icon'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_icon_icon',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'icon-glass' => 'Glass',
        'icon-music' => 'Music',
        'icon-search' => 'Search',
        'icon-envelope-alt' => 'Envelope',
        'icon-heart' => 'Heart',
        'icon-star' => 'Star',
        'icon-star-empty' => 'Star-Empty',
        'icon-user' => 'User',
        'icon-film' => 'Film',
        'icon-th-large' => 'Table-Large',
        'icon-th' => 'Thable',
        'icon-th-list' => 'Table List',
        'icon-ok' => 'Ok',
        'icon-remove' => 'Remove',
        'icon-zoom-in' => 'Zoom-In',
        'icon-zoom-out' => 'Zoom-Out',
        'icon-off' => 'Off',
        'icon-signal' => 'Signal',
        'icon-cog' => 'Cog',
        'icon-trash' => 'Trash',
        'icon-home' => 'Home',
        'icon-file-alt' => 'File',
        'icon-time' => 'Time',
        'icon-road' => 'Road',
        'icon-download-alt' => 'Download',
        'icon-download' => 'Download',
        'icon-upload' => 'Upload',
        'icon-inbox' => 'Inbox',
        'icon-play-circle' => 'Play-Circle',
        'icon-repeat' => 'Repeat',
        'icon-refresh' => 'Refresh',
        'icon-list-alt' => 'List',
        'icon-lock' => 'Lock',
        'icon-flag' => 'Flag',
        'icon-headphones' => 'Headphones',
        'icon-volume-off' => 'Volume-Off',
        'icon-volume-down' => 'Volume-Down',
        'icon-volume-up' => 'Volume-Up',
        'icon-qrcode' => 'Qrcode',
        'icon-barcode' => 'Barcode',
        'icon-tag' => 'Tag',
        'icon-tags' => 'Tags',
        'icon-book' => 'Book',
        'icon-bookmark' => 'Bookmark',
        'icon-print' => 'Print',
        'icon-camera' => 'Camera',
        'icon-font' => 'Font',
        'icon-bold' => 'Bold',
        'icon-italic' => 'Italic',
        'icon-text-height' => 'Text-Height',
        'icon-text-width' => 'Text-Width',
        'icon-align-left' => 'Align-Left',
        'icon-align-center' => 'Align-Center',
        'icon-align-right' => 'Align-Right',
        'icon-align-justify' => 'Align-Justify',
        'icon-list' => 'List',
        'icon-indent-left' => 'Indent-Left',
        'icon-indent-right' => 'Indent-Right',
        'icon-facetime-video' => 'Facetime-Video',
        'icon-picture' => 'Picture',
        'icon-pencil' => 'Pencil',
        'icon-map-marker' => 'Map-Marker',
        'icon-adjust' => 'Adjust',
        'icon-tint' => 'Tint',
        'icon-edit' => 'Edit',
        'icon-share' => 'Share',
        'icon-check' => 'Check',
        'icon-move' => 'Move',
        'icon-step-backward' => 'Step-Backward',
        'icon-fast-backward' => 'Fast-Backward',
        'icon-backward' => 'Backward',
        'icon-play' => 'Play',
        'icon-pause' => 'Pause',
        'icon-stop' => 'Stop',
        'icon-forward' => 'Forward',
        'icon-fast-forward' => 'Fast-Forward',
        'icon-step-forward' => 'Step-Forward',
        'icon-eject' => 'Eject',
        'icon-chevron-left' => 'Chevron-Left',
        'icon-chevron-right' => 'Chevron-Right',
        'icon-plus-sign' => 'Plus-Sign',
        'icon-minus-sign' => 'Minus-Sign',
        'icon-remove-sign' => 'Remove-Sign',
        'icon-ok-sign' => 'Ok-Sign',
        'icon-question-sign' => 'Question-Sign',
        'icon-info-sign' => 'Info-Sign',
        'icon-screenshot' => 'Screenshot',
        'icon-remove-circle' => 'Remove-Circle',
        'icon-ok-circle' => 'Ok-Circle',
        'icon-ban-circle' => 'Ban-Circle',
        'icon-arrow-left' => 'Arrow-Left',
        'icon-arrow-right' => 'Arrow-Right',
        'icon-arrow-up' => 'Arrow-Up',
        'icon-arrow-down' => 'Arrow-Down',
        'icon-share-alt' => 'Share',
        'icon-resize-full' => 'Resize-Full',
        'icon-resize-small' => 'Resize-Small',
        'icon-plus' => 'Plus',
        'icon-minus' => 'Minus',
        'icon-asterisk' => 'Asterisk',
        'icon-exclamation-sign' => 'Exclamation-Sign',
        'icon-gift' => 'Gift',
        'icon-leaf' => 'Leaf',
        'icon-fire' => 'Fire',
        'icon-eye-open' => 'Eye-Open',
        'icon-eye-close' => 'Eye-Close',
        'icon-warning-sign' => 'Warning-Sign',
        'icon-plane' => 'Plane',
        'icon-calendar' => 'Calendar',
        'icon-random' => 'Random',
        'icon-comment' => 'Comment',
        'icon-magnet' => 'Magnet',
        'icon-chevron-up' => 'Chevron-Up',
        'icon-chevron-down' => 'Chevron-Down',
        'icon-retweet' => 'Retweet',
        'icon-shopping-cart' => 'Shopping-Cart',
        'icon-folder-close' => 'Folder-Close',
        'icon-folder-open' => 'Folder-Open',
        'icon-resize-vertical' => 'Resize-Vertical',
        'icon-resize-horizontal' => 'Resize-Horizontal',
        'icon-bar-chart' => 'Bar-Chart',
        'icon-twitter-sign' => 'Twitter-Sign',
        'icon-facebook-sign' => 'Facebook-Sign',
        'icon-camera-retro' => 'Camera-Retro',
        'icon-key' => 'Key',
        'icon-cogs' => 'Cogs',
        'icon-comments' => 'Comments',
        'icon-thumbs-up-alt' => 'Thumbs-Up',
        'icon-thumbs-down-alt' => 'Thumbs-Down',
        'icon-star-half' => 'Star-Half',
        'icon-heart-empty' => 'Heart-Empty',
        'icon-signout' => 'Signout',
        'icon-linkedin-sign' => 'Linkedin-Sign',
        'icon-pushpin' => 'Pushpin',
        'icon-external-link' => 'External-Link',
        'icon-signin' => 'Signin',
        'icon-trophy' => 'Trophy',
        'icon-github-sign' => 'Github-Sign',
        'icon-upload-alt' => 'Upload',
        'icon-lemon' => 'Lemon',
        'icon-phone' => 'Phone',
        'icon-check-empty' => 'Check-Empty',
        'icon-bookmark-empty' => 'Bookmark-Empty',
        'icon-phone-sign' => 'Phone-Sign',
        'icon-twitter' => 'Twitter',
        'icon-facebook' => 'Facebook',
        'icon-github' => 'Github',
        'icon-unlock' => 'Unlock',
        'icon-credit-card' => 'Credit-Card',
        'icon-rss' => 'Rss',
        'icon-hdd' => 'Hdd',
        'icon-bullhorn' => 'Bullhorn',
        'icon-bell' => 'Bell',
        'icon-certificate' => 'Certificate',
        'icon-hand-right' => 'Hand-Right',
        'icon-hand-left' => 'Hand-Left',
        'icon-hand-up' => 'Hand-Up',
        'icon-hand-down' => 'Hand-Down',
        'icon-circle-arrow-left' => 'Circle-Arrow-Left',
        'icon-circle-arrow-right' => 'Circle-Arrow-Right',
        'icon-circle-arrow-up' => 'Circle-Arrow-Up',
        'icon-circle-arrow-down' => 'Circle-Arrow-Down',
        'icon-globe' => 'Globe',
        'icon-wrench' => 'Wrench',
        'icon-tasks' => 'Tasks',
        'icon-filter' => 'Filter',
        'icon-briefcase' => 'Briefcase',
        'icon-fullscreen' => 'Fullscreen',
        'icon-group' => 'Group',
        'icon-link' => 'Link',
        'icon-cloud' => 'Cloud',
        'icon-beaker' => 'Beaker',
        'icon-cut' => 'Cut',
        'icon-copy' => 'Copy',
        'icon-paper-clip' => 'Paper-Clip',
        'icon-save' => 'Save',
        'icon-sign-blank' => 'Sign-Blank',
        'icon-reorder' => 'Reorder',
        'icon-list-ul' => 'List-Ul',
        'icon-list-ol' => 'List-Ol',
        'icon-strikethrough' => 'Strikethrough',
        'icon-underline' => 'Underline',
        'icon-table' => 'Table',
        'icon-magic' => 'Magic',
        'icon-truck' => 'Truck',
        'icon-pinterest' => 'Pinterest',
        'icon-pinterest-sign' => 'Pinterest-Sign',
        'icon-google-plus-sign' => 'Google-Plus-Sign',
        'icon-google-plus' => 'Google-Plus',
        'icon-money' => 'Money',
        'icon-caret-down' => 'Caret-Down',
        'icon-caret-up' => 'Caret-Up',
        'icon-caret-left' => 'Caret-Left',
        'icon-caret-right' => 'Caret-Right',
        'icon-columns' => 'Columns',
        'icon-sort' => 'Sort',
        'icon-sort-down' => 'Sort-Down',
        'icon-sort-up' => 'Sort-Up',
        'icon-envelope' => 'Envelope',
        'icon-linkedin' => 'Linkedin',
        'icon-undo' => 'Undo',
        'icon-legal' => 'Legal',
        'icon-dashboard' => 'Dashboard',
        'icon-comment-alt' => 'Comment',
        'icon-comments-alt' => 'Comments',
        'icon-bolt' => 'Bolt',
        'icon-sitemap' => 'Sitemap',
        'icon-umbrella' => 'Umbrella',
        'icon-paste' => 'Paste',
        'icon-lightbulb' => 'Lightbulb',
        'icon-exchange' => 'Exchange',
        'icon-cloud-download' => 'Cloud-Download',
        'icon-cloud-upload' => 'Cloud-Upload',
        'icon-user-md' => 'User-Md',
        'icon-stethoscope' => 'Stethoscope',
        'icon-suitcase' => 'Suitcase',
        'icon-bell-alt' => 'Bell',
        'icon-coffee' => 'Coffee',
        'icon-food' => 'Food',
        'icon-file-text-alt' => 'File-Text',
        'icon-building' => 'Building',
        'icon-hospital' => 'Hospital',
        'icon-ambulance' => 'Ambulance',
        'icon-medkit' => 'Medkit',
        'icon-fighter-jet' => 'Fighter-Jet',
        'icon-beer' => 'Beer',
        'icon-h-sign' => 'H-Sign',
        'icon-plus-sign-alt' => 'Plus-Sign',
        'icon-double-angle-left' => 'Double-Angle-Left',
        'icon-double-angle-right' => 'Double-Angle-Right',
        'icon-double-angle-up' => 'Double-Angle-Up',
        'icon-double-angle-down' => 'Double-Angle-Down',
        'icon-angle-left' => 'Angle-Left',
        'icon-angle-right' => 'Angle-Right',
        'icon-angle-up' => 'Angle-Up',
        'icon-angle-down' => 'Angle-Down',
        'icon-desktop' => 'Desktop',
        'icon-laptop' => 'Laptop',
        'icon-tablet' => 'Tablet',
        'icon-mobile-phone' => 'Mobile-Phone',
        'icon-circle-blank' => 'Circle-Blank',
        'icon-quote-left' => 'Quote-Left',
        'icon-quote-right' => 'Quote-Right',
        'icon-spinner' => 'Spinner',
        'icon-circle' => 'Circle',
        'icon-reply' => 'Reply',
        'icon-github-alt' => 'Github',
        'icon-folder-close-alt' => 'Folder-Close',
        'icon-folder-open-alt' => 'Folder-Open',
        'icon-expand-alt' => 'Expand',
        'icon-collapse-alt' => 'Collapse',
        'icon-smile' => 'Smile',
        'icon-frown' => 'Frown',
        'icon-meh' => 'Meh',
        'icon-gamepad' => 'Gamepad',
        'icon-keyboard' => 'Keyboard',
        'icon-flag-alt' => 'Flag',
        'icon-flag-checkered' => 'Flag-Checkered',
        'icon-terminal' => 'Terminal',
        'icon-code' => 'Code',
        'icon-reply-all' => 'Reply-All',
        'icon-mail-reply-all' => 'Mail-Reply-All',
        'icon-star-half-empty' => 'Star-Half-Empty',
        'icon-location-arrow' => 'Location-Arrow',
        'icon-crop' => 'Crop',
        'icon-code-fork' => 'Code-Fork',
        'icon-unlink' => 'Unlink',
        'icon-question' => 'Question',
        'icon-info' => 'Info',
        'icon-exclamation' => 'Exclamation',
        'icon-superscript' => 'Superscript',
        'icon-subscript' => 'Subscript',
        'icon-eraser' => 'Eraser',
        'icon-puzzle-piece' => 'Puzzle-Piece',
        'icon-microphone' => 'Microphone',
        'icon-microphone-off' => 'Microphone-Off',
        'icon-shield' => 'Shield',
        'icon-calendar-empty' => 'Calendar-Empty',
        'icon-fire-extinguisher' => 'Fire-Extinguisher',
        'icon-rocket' => 'Rocket',
        'icon-maxcdn' => 'Maxcdn',
        'icon-chevron-sign-left' => 'Chevron-Sign-Left',
        'icon-chevron-sign-right' => 'Chevron-Sign-Right',
        'icon-chevron-sign-up' => 'Chevron-Sign-Up',
        'icon-chevron-sign-down' => 'Chevron-Sign-Down',
        'icon-html5' => 'Html5',
        'icon-css3' => 'Css3',
        'icon-anchor' => 'Anchor',
        'icon-unlock-alt' => 'Unlock',
        'icon-bullseye' => 'Bullseye',
        'icon-ellipsis-horizontal' => 'Ellipsis-Horizontal',
        'icon-ellipsis-vertical' => 'Ellipsis-Vertical',
        'icon-rss-sign' => 'Rss-Sign',
        'icon-play-sign' => 'Play-Sign',
        'icon-ticket' => 'Ticket',
        'icon-minus-sign-alt' => 'Minus-Sign',
        'icon-check-minus' => 'Check-Minus',
        'icon-level-up' => 'Level-Up',
        'icon-level-down' => 'Level-Down',
        'icon-check-sign' => 'Check-Sign',
        'icon-edit-sign' => 'Edit-Sign',
        'icon-external-link-sign' => 'External-Link-Sign',
        'icon-share-sign' => 'Share-Sign',
        'icon-compass' => 'Compass',
        'icon-collapse' => 'Collapse',
        'icon-collapse-top' => 'Collapse-Top',
        'icon-expand' => 'Expand',
        'icon-eur' => 'Eur',
        'icon-gbp' => 'Gbp',
        'icon-usd' => 'Usd',
        'icon-inr' => 'Inr',
        'icon-jpy' => 'Jpy',
        'icon-cny' => 'Cny',
        'icon-krw' => 'Krw',
        'icon-btc' => 'Btc',
        'icon-file' => 'File',
        'icon-file-text' => 'File-Text',
        'icon-sort-by-alphabet' => 'Sort-By-Alphabet',
        'icon-sort-by-alphabet-alt' => 'Sort-By-Alphabet',
        'icon-sort-by-attributes' => 'Sort-By-Attributes',
        'icon-sort-by-attributes-alt' => 'Sort-By-Attributes',
        'icon-sort-by-order' => 'Sort-By-Order',
        'icon-sort-by-order-alt' => 'Sort-By-Order',
        'icon-thumbs-up' => 'Thumbs-Up',
        'icon-thumbs-down' => 'Thumbs-Down',
        'icon-youtube-sign' => 'Youtube-Sign',
        'icon-youtube' => 'Youtube',
        'icon-xing' => 'Xing',
        'icon-xing-sign' => 'Xing-Sign',
        'icon-youtube-play' => 'Youtube-Play',
        'icon-dropbox' => 'Dropbox',
        'icon-stackexchange' => 'Stackexchange',
        'icon-instagram' => 'Instagram',
        'icon-flickr' => 'Flickr',
        'icon-adn' => 'Adn',
        'icon-bitbucket' => 'Bitbucket',
        'icon-bitbucket-sign' => 'Bitbucket-Sign',
        'icon-tumblr' => 'Tumblr',
        'icon-tumblr-sign' => 'Tumblr-Sign',
        'icon-long-arrow-down' => 'Long-Arrow-Down',
        'icon-long-arrow-up' => 'Long-Arrow-Up',
        'icon-long-arrow-left' => 'Long-Arrow-Left',
        'icon-long-arrow-right' => 'Long-Arrow-Right',
        'icon-apple' => 'Apple',
        'icon-windows' => 'Windows',
        'icon-android' => 'Android',
        'icon-linux' => 'Linux',
        'icon-dribbble' => 'Dribbble',
        'icon-skype' => 'Skype',
        'icon-foursquare' => 'Foursquare',
        'icon-trello' => 'Trello',
        'icon-female' => 'Female',
        'icon-male' => 'Male',
        'icon-gittip' => 'Gittip',
        'icon-sun' => 'Sun',
        'icon-moon' => 'Moon',
        'icon-archive' => 'Archive',
        'icon-bug' => 'Bug',
        'icon-vk' => 'Vk',
        'icon-weibo' => 'Weibo',
        'icon-renren' => 'Renren',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_s_icon_link'
  $field_bases['field_s_icon_link'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_icon_link',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_s_large_blk_read_more_link'
  $field_bases['field_s_large_blk_read_more_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_large_blk_read_more_link',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_s_large_block_body'
  $field_bases['field_s_large_block_body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_large_block_body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_s_large_block_file_insert'
  $field_bases['field_s_large_block_file_insert'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_large_block_file_insert',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_s_large_block_image_insert'
  $field_bases['field_s_large_block_image_insert'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_large_block_image_insert',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'display_default' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_s_postcard_body'
  $field_bases['field_s_postcard_body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_postcard_body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_s_postcard_file'
  $field_bases['field_s_postcard_file'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_postcard_file',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_s_postcard_link'
  $field_bases['field_s_postcard_link'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_postcard_link',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_s_smc_facebook'
  $field_bases['field_s_smc_facebook'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_smc_facebook',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_s_smc_flickr'
  $field_bases['field_s_smc_flickr'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_smc_flickr',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_s_smc_googleplus'
  $field_bases['field_s_smc_googleplus'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_smc_googleplus',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_s_smc_instagram'
  $field_bases['field_s_smc_instagram'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_smc_instagram',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_s_smc_linkedin'
  $field_bases['field_s_smc_linkedin'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_smc_linkedin',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_s_smc_pinterest'
  $field_bases['field_s_smc_pinterest'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_smc_pinterest',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_s_smc_tumblr'
  $field_bases['field_s_smc_tumblr'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_smc_tumblr',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_s_smc_twitter'
  $field_bases['field_s_smc_twitter'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_smc_twitter',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_s_smc_vimeo'
  $field_bases['field_s_smc_vimeo'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_smc_vimeo',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_s_smc_youtube'
  $field_bases['field_s_smc_youtube'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_smc_youtube',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_s_testimonial_credits'
  $field_bases['field_s_testimonial_credits'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_testimonial_credits',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_s_testimonial_quote'
  $field_bases['field_s_testimonial_quote'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_testimonial_quote',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 350,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_testimonial_more_link'
  $field_bases['field_testimonial_more_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_testimonial_more_link',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  return $field_bases;
}
