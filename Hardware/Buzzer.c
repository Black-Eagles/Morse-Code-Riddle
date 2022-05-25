#include "Buzzer.h"

void beepOn(void) {
    digitalWrite(BUZZER_LED_PIN, HIGH);
}

void beepOff(void) {
    digitalWrite(BUZZER_LED_PIN, LOW);
}

void beep(int wait) {
    beepOn();
    delay(wait);
    beepOff();
}