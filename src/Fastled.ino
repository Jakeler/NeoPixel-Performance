#include <Arduino.h>
#include "hw.h"

#include <FastLED.h>

CRGB leds[LED_COUNT];

void setup() {
    pinMode(TRIG_PIN, OUTPUT);

    FastLED.addLeds<NEOPIXEL, LED_PIN>(leds, LED_COUNT);
    FastLED.setBrightness(51);
    FastLED.show();
}

void loop() {
    digitalWrite(TRIG_PIN, 1);
    FastLED.clearData();
    for (size_t i = 0; i < 100; i++)
    {
        leds[0] = CRGB::Green;
        FastLED.show();
        leds[0] = CRGB::Black;
        FastLED.show();
    }
    digitalWrite(TRIG_PIN, 0);
    delay(5000);


    digitalWrite(TRIG_PIN, 1);
    FastLED.clearData();
    for (size_t i = 0; i < 100; i++)
    {
        FastLED.showColor(CRGB::Green);
        FastLED.showColor(CRGB::Black);
    }
    digitalWrite(TRIG_PIN, 0);
    delay(5000);


    digitalWrite(TRIG_PIN, 1);
    FastLED.clearData();
    for (size_t i = 0; i < 100; i++)
    {
        fill_rainbow(leds, LED_COUNT, 0, 5);
        FastLED.show();
        FastLED.clear(true);
    }
    digitalWrite(TRIG_PIN, 0);
    delay(5000);
}