#include <Arduino.h>
#include "hw.h"

#include <NeoPixelBus.h>
NeoPixelBus<NeoGrbFeature, NeoEsp32I2s1800KbpsMethod> strip(LED_COUNT, LED_PIN);

void setup() {
    pinMode(TRIG_PIN, OUTPUT);
    //pinMode(LED_PIN, OUTPUT);

    strip.Begin();
    strip.Show();
}

#define colorSaturation 50
RgbColor red(colorSaturation, 0, 0);
RgbColor green(0, colorSaturation, 0);
RgbColor blue(0, 0, colorSaturation);
RgbColor white(colorSaturation);
RgbColor black(0);

void loop() {
    digitalWrite(TRIG_PIN, 1);

    strip.SetPixelColor(0, red);
    strip.Show();
    strip.ClearTo(green);
    strip.Show();
    strip.ClearTo(blue);
    strip.Show();
    strip.ClearTo(black);
    strip.Show();

    digitalWrite(TRIG_PIN, 0);
    delay(1000);
}