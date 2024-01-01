#include "FastLED.h"

#define NUM_LEDS 3
#define DATA_PIN 5

CRGB leds[NUM_LEDS];
uint8_t delta = 5;
uint8_t start = 0;

void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);
  leds[0] = CRGB::Red;
  leds[1] = CRGB::Green;
  leds[2] = CRGB::Blue;
}

void loop() {
  start += delta;
  leds[0] = CHSV(start, 255, 50);
  leds[1] = CHSV(start-2*delta, 255, 50);
  leds[2] = CHSV(start-4*delta, 255, 50);
  FastLED.show();
  delay(50);
}
