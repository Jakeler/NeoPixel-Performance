#include <Arduino.h>
#include "hw.h"

#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
    pinMode(TRIG_PIN, OUTPUT);

    strip.begin();
    strip.clear();
    strip.setBrightness(51);
    strip.show();
}


uint32_t green = strip.Color(0, 0x80, 0);
uint32_t black = 0;

void loop() {
    digitalWrite(TRIG_PIN, 1);
    strip.clear();
    for (size_t i = 0; i < 100; i++)
    {
        strip.setPixelColor(0, green);
        strip.show();
        strip.setPixelColor(0, black);
        strip.show();
    }
    digitalWrite(TRIG_PIN, 0);
    delay(5000);


    digitalWrite(TRIG_PIN, 1);
    for (size_t i = 0; i < 100; i++)
    {
        strip.fill(green);
        strip.show();
        strip.fill(black);
        strip.show();
    }
    digitalWrite(TRIG_PIN, 0);
    delay(5000);


    digitalWrite(TRIG_PIN, 1);
    for (size_t i = 0; i < 100; i++)
    {
        // self made rainbow fill
        for (size_t i = 0; i < LED_COUNT; i++)
        {
            // hue is 16 bit, so multiply with 255
            strip.setPixelColor(i, strip.ColorHSV(i*5*0xff, 0xff, 0xff)); 
        }
        strip.show();
        strip.clear();
        strip.show();
    }
    digitalWrite(TRIG_PIN, 0);
    delay(5000);

}

