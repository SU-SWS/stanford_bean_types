/**
 * @file
 * Applies some functionality on the paragraph types.
 */

(function ($) {
  Drupal.behaviors.stanfordBeanTypesHero = {
    attach: function (context, settings) {
      var winHeight = $(window).height();

      $('.hero-curtain', context).each(function () {
        var clonedBlock = $(this).detach().prependTo('body');
        var wrapper = $('<div>', {class: 'hero-reveal'}).css('top', 0 - winHeight + 'px');
        $(clonedBlock).siblings().wrapAll(wrapper);
      });

      function heroCurtain() {
        $('.hero-curtain').find('img, iframe').height($(window).height());
      }

      $(window).scroll(function (e) {
        var scrollPos = 0 - $(window).height() + $(window).scrollTop();
        console.log(scrollPos);
        if (scrollPos < 0) {
          $('.hero-reveal').css('top', scrollPos + 'px');
        } else {
          $('.hero-reveal').css('top', '0px');
        }
      });

      $(window).resize(heroCurtain);
      heroCurtain();
    }
  }
})(jQuery);
