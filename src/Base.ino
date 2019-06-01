#include <Arduino.h>
#include "hw.h"

// LED object declaration

void setup() {
    Serial.begin(9600);
    pinMode(TRIG_PIN, OUTPUT);

    // LED init
}

void loop() {
    // Test 1: Set single Pixel on and off
    digitalWrite(TRIG_PIN, 1);
    // Full Strip clear
    for (size_t i = 0; i < 100; i++)
    {
        // Code
    }
    digitalWrite(TRIG_PIN, 0);
    delay(5000);


    // Test 2: Set all LEDs to the same color, then off
    digitalWrite(TRIG_PIN, 1);
    for (size_t i = 0; i < 100; i++)
    {
        // Code
    }
    digitalWrite(TRIG_PIN, 0);
    delay(5000);


    // Test 3: Build a rainbow with linear hue on the full strip, then off
    digitalWrite(TRIG_PIN, 1);
    for (size_t i = 0; i < 100; i++)
    {
        // Code
    }
    digitalWrite(TRIG_PIN, 0);
    delay(5000);

    // Print RAM usage
    Serial.println(ESP.getFreeHeap());
}