#include "Header.h"
#include "Lib.h"

/* ----- BEGIN MAIN ----- */
void setup() {
    pinMode(BUZZER_LED_PIN, OUTPUT);
    pinMode(GREEN_LED_PIN, OUTPUT);
    pinMode(RGB_RED_LED_PIN, OUTPUT);
    pinMode(RGB_GREEN_LED_PIN, OUTPUT);
    pinMode(JOYSTICK_BUTTON_PIN, INPUT);
    Serial.begin(9600);
}

void loop() {
    
    Serial.print("X: ");
    Serial.print(analogRead(JOYSTICK_X_AXIS_PIN));
    Serial.print(" Y: ");
    Serial.println(analogRead(JOYSTICK_Y_AXIS_PIN));
    // beaconSignal();
}
/* ----- END MAIN ----- */












/* ----- BEGIN UTILS ----- */
void beaconSignal(void) {
    buzzerOn();
    delay(10);
    buzzerOff();
    delay(750);
}
/* ----- END UTILS ----- */