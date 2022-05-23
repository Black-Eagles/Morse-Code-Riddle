#include "Buzzer.h"

void on() {
    digitalWrite(BUZZER_LED_PIN, HIGH);
}

void off() {
    digitalWrite(BUZZER_LED_PIN, LOW);
}

void peep(int wait) {
    on();
    delay(wait);
    off();
}