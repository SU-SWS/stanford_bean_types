<?php

/**
 * @file
 * Field Icon Block Template.
 */
?>

<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!$label_hidden): ?>
    <div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
  <?php endif; ?>

  <?php foreach($item_chunks as $chunk_delta => $items): ?>
    <?php ddl($offsets); ?>

    <div class="field-items clearfix"<?php print $content_attributes; ?>>
      <?php foreach ($items as $delta => $item): ?>
        <div class="collection-field-item span4 <?php print $delta % 2 ? 'odd ' : 'even '; print $offsets[$chunk_delta]; $offsets[$chunk_delta] = '';?>"<?php print $item_attributes[$delta]; ?>>
          <?php print render($item); ?>
        </div>
      <?php endforeach; ?>
    </div>

  <?php endforeach; ?>
</div>
