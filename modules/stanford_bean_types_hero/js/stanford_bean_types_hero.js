(function ($) {
  Drupal.behaviors.stanfordBeanTypesHero = {
    attach: function (context, settings) {

      // Move the hero to the top of the body tag.
      $('.hero-curtain', context).each(function () {
        var clonedBlock = $(this).detach().prependTo('body');
        var wrapper = $('<div>', {class: 'hero-reveal'});
        $(clonedBlock).siblings().wrapAll(wrapper);

        // If focus is moved away from the hero, scroll to the top of the normal page.
        $(this).find('a').last().focusout(function (e) {
          if ($(this).is(':visible')) {
            var topPage = $(clonedBlock).height();
            $('body').scrollTop(topPage);
          }
        })
      });

      function heroCurtain() {
        var winHeight = $(window).height();
        $('.hero-curtain')
          .css('margin-bottom', $('.hero-reveal').height())
          .find('img, iframe')
          .height(winHeight)
          .css('width', 'auto')
          .parent()
          .height(winHeight)
          .css('overflow', 'hidden');
      }

      $(window).scroll(function (e) {
        var curtain = $('.hero-curtain');
        var scrollPos = 0 - $(curtain).height() + $(window).scrollTop();

        if (scrollPos < 0) {
          $('.hero-reveal').removeClass('below-hero');
          $(curtain).removeClass('below-hero');
        } else {
          $('.hero-reveal').addClass('below-hero');
          $(curtain).addClass('below-hero');
        }
      });

      $(window).resize(heroCurtain);
      heroCurtain();
    }
  }
})(jQuery);
