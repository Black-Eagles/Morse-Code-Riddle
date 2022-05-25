#include "LED.h"

void ledOn(void) {
    digitalWrite(BUZZER_LED_PIN, HIGH);
}

void ledOff(void) {
    digitalWrite(BUZZER_LED_PIN, LOW);
}