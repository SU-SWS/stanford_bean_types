/**
 * @file
 * Fontawesome field widget.
 */

(function ($) {
  Drupal.behaviors.stanford_icon_grid = {
    attach: function (context, settings) {
      $('.field-name-field-s-icon-ext-columns-bg-colo option', context).each(function () {
        var values = $(this).attr('value');
        values = values.split(',');
        $(this).css('background-color', values[0]);
        if (values[1] !== undefined) {
          $(this).css('color', values[1]);
        }
      });
    }
  }
})(jQuery);
