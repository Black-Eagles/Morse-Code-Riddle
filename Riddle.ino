#include "Hardware/Pins.h"
#include "Hardware/LED.h"

void setup() {
    pinMode(GREEN_LED_PIN, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    ledOn();
    delay(500);
    ledOff();
    delay(500);
}
