#include <Arduino.h>

// User LD1 (green) = PB0 or PA5, LD2 (yellow) = PE1, User LED3 (red) = PB14
#define LED PB0

void setup() {
    pinMode(LED, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    Serial.println("Hello, world!");
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(500);
}