#include <Arduino.h>
#include "hw.h"

#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
    pinMode(TRIG_PIN, OUTPUT);
    pinMode(LED_PIN, OUTPUT);

    strip.begin();
    strip.clear();
    strip.show();
}

void loop() {
    digitalWrite(TRIG_PIN, 1);
    
    strip.fill(0x0f0000);
    strip.show();
    delay(1000);

    strip.fill(0x000f00);
    strip.show();
    delay(1000);

    strip.fill(0x00000f);
    strip.show();
    delay(1000);

    strip.fill(0x00);
    strip.show();
    delay(1000);

    digitalWrite(TRIG_PIN, 0);

    delay(1000);
}

