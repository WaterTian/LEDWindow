#include <FastLED.h>
#define NUM_LEDS 300
#define DATA_PIN 7

CRGB leds[NUM_LEDS];


void setup() {
  delay(2000);
  FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
  
  FastLED.addLeds<WS2811, 6, RGB>(leds, 144);
}

void loop() {
   for(int i = 0; i < NUM_LEDS; i++) {
      leds[i] = CRGB::White;
      FastLED.show();
      delay(10);
      leds[i] = CRGB::Black;
   }
}
