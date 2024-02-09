#define RATING 100
#include "modules.hpp"


void UpTo(CRGB *leds, int leds_number,int l0, int l1, int l2, int l3, int l4) {
  
    for (int set = leds_number; set >= 0; set--) {
    if (set < 6) {

      leds[set] = l0;
      FastLED.show();
      delay(RATING);
    }

    else if (set >= 6 && set < 12) {
      leds[set] = l1;
      FastLED.show();
      delay(RATING);

    }
    else if (set >= 12 && set < 18) {
      leds[set] = l2;
      FastLED.show();
      delay(RATING);
    }
    else if (set >= 18 && set < 24 ) {
      leds[set] = l3;
      FastLED.show();
      delay(RATING);
    }
    else {
      leds[set] = l4;
      FastLED.show();
      delay(RATING);
    }

  }

}