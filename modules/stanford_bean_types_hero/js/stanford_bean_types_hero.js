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

      var images = $('.hero-curtain img');

      function heroCurtain() {
        var winHeight = $(window).height();
        var winWidth = $(window).width();

        var heroAssets = $('.hero-curtain')
          .css('margin-bottom', $('.hero-reveal').height())
          .find('img, iframe');

        $(heroAssets).parent()
          .height(winHeight)
          .css('overflow', 'hidden');

        $.each(images, function () {

          var imgRatio = this.width / this.height;
          var winRatio = winWidth / winHeight;

          $(this).removeClass('stretch-vertical');
          $(this).removeClass('stretch-horizontal');

          // Taller than Wide Image
          if (imgRatio < 0) {
            if (imgRatio < winRatio) {
              // Window has more narrow width and so image needs to stretch vertically.
              $(this).addClass('stretch-vertical');
            } else {
              $(this).addClass('stretch-horizontal');
            }
          } else {
            if (imgRatio < winRatio) {
              // Window has more narrow width and so image needs to stretch horizontally.
              $(this).addClass('stretch-horizontal');
            } else {
              $(this).addClass('stretch-vertical');
            }
          }

          if ($(this).width() > winWidth) {
            $(this).css('left', ($(this).width() - winWidth) / -2);
          }
        });
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

      $(window).load(function () {
        if (typeof $.imagesLoaded !== 'undefined') {
          $('.hero-curtain').imagesLoaded(heroCurtain);
        } else {
          heroCurtain();
        }
      });
    }
  }
})(jQuery);
