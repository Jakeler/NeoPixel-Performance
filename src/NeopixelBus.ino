#include <Arduino.h>
#include "hw.h"

#include <NeoPixelBrightnessBus.h>
NeoPixelBrightnessBus<NeoGrbFeature, NeoEsp32I2s1800KbpsMethod> strip(LED_COUNT, LED_PIN);

void setup() {
    pinMode(TRIG_PIN, OUTPUT);

    strip.Begin();
    strip.SetBrightness(51);
    strip.Show();
}

RgbColor green(0, 0x80, 0);
RgbColor black(0);

void loop() {
    digitalWrite(TRIG_PIN, 1);
    strip.ClearTo(black);
    for (size_t i = 0; i < 100; i++)
    {
        strip.SetPixelColor(0, green);
        strip.Show();
        strip.SetPixelColor(0, black);
        strip.Show();
    }
    digitalWrite(TRIG_PIN, 0);
    delay(5000);


    digitalWrite(TRIG_PIN, 1);
    for (size_t i = 0; i < 100; i++)
    {
        strip.ClearTo(green);
        strip.Show();
        strip.ClearTo(black);
        strip.Show();
    }
    digitalWrite(TRIG_PIN, 0);
    delay(5000);


    digitalWrite(TRIG_PIN, 1);
    for (size_t i = 0; i < 100; i++)
    {
        // self made rainbow fill
        for (size_t i = 0; i < LED_COUNT; i++)
        {
            // all float HSB, do 50 hue steps
            strip.SetPixelColor(i, HsbColor(i*0.02, 1.0, 1.0));
        }
        strip.Show();
        strip.ClearTo(black);
        strip.Show();
    }
    digitalWrite(TRIG_PIN, 0);
    delay(5000);

}