#include <Arduino.h>

// User LD1 (green) = PA5, LD2 (yellow) = PE1, User LED3 (red) = PB14
#define LED PA5

void setup() {
    pinMode(LED, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    Serial.println("Hello, world!");
    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, LOW);
    delay(1000);
}