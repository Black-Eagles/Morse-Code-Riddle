#include "Hardware/Pins.h"

void setup() {
    pinMode(BUZZER_LED_PIN, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    Serial.print("X: ");
    Serial.print(analogRead(JOYSTICK_X_AXIS_PIN));
    Serial.print(" Y: ");
    Serial.println(analogRead(JOYSTICK_Y_AXIS_PIN));
}
