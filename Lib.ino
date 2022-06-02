#include "Lib.h"

/* ----- BEING HARDWARE ----- */
// Buzzer
void buzzerOn(void) {
    digitalWrite(BUZZER_LED_PIN, HIGH);
}
void buzzerOff(void) {
    digitalWrite(BUZZER_LED_PIN, LOW);
}

// LED
void ledOn(void) {
    digitalWrite(GREEN_LED_PIN, HIGH);
}
void ledOff(void) {
    digitalWrite(GREEN_LED_PIN, LOW);
}

// RGB-LED
void redOn(void) {
    digitalWrite(RGB_RED_LED_PIN, HIGH);
}
void redOff(void) {
    digitalWrite(RGB_RED_LED_PIN, LOW);
}
void greenOn(void) {
    digitalWrite(RGB_GREEN_LED_PIN, HIGH);
}
void greenOff(void) {
    digitalWrite(RGB_GREEN_LED_PIN, LOW);
}

// Joystick
bool isLeft(void) {
    return false;
}
bool isRight(void) {
    return false;
}
bool isUp(void) {
    return false;
}
bool isDown(void) {
    return false;
}
bool isPressed(void) {
    return digitalRead(JOYSTICK_BUTTON_PIN);
}
/* ----- END HARDWARE ----- */