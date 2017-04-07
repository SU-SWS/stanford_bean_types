/**
 * @file
 * Fontawesome field widget.
 */

(function ($) {
  Drupal.behaviors.stanford_icon_grid = {
    attach: function (context, settings) {
      $('.stanford-fontawesome-icon', context).find('option').each(function () {
        if (!$(this).hasClass('icon-added')) {
          var icon = $('<i>', {
            class: 'fa fa-' + $(this).attr('value')
          });
          $(this).addClass('icon-added').prepend(icon);
        }
      });

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
