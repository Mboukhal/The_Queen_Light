#include <FastLED.h>
#include "modules.hpp"

#define NUM_LEDS 30

#define DATA_PIN 5

CRGB leds[NUM_LEDS];

#define PANDORA CRGB::DarkMagenta
#define FREAX CRGB::Gold
#define BIOS CRGB::DarkTurquoise
#define COMMODORE CRGB::DarkGreen

// This function sets up the ledsand tells the controller about them
void setup() {
	// sanity check delay - allows reprogramming if accidently blowing power w/leds
   	delay(2000);

    FastLED.addLeds<SM16703, DATA_PIN, RBG>(leds, NUM_LEDS);
}

int interval = 500;



// This function runs over and over, and is where you do the magic to light
// your leds.


void loop() {

  UpTo(leds, NUM_LEDS, PANDORA, FREAX, BIOS, COMMODORE, CRGB::White);

  delay(2000);

  for( int i = 0; i < 30; i++) {
      leds[i] = CRGB::Black;
      FastLED.show();
  }
  delay(100);
  
}







