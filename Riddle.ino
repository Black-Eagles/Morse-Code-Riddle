#include "Header.h"
#include "Lib.h"

/* ----- BEGIN MAIN ----- */
void setup() {
    lcd.init();
    lcd.backlight();
    pinMode(BUZZER_LED_PIN, OUTPUT);
    pinMode(GREEN_LED_PIN, OUTPUT);
    pinMode(RGB_RED_LED_PIN, OUTPUT);
    pinMode(RGB_GREEN_LED_PIN, OUTPUT);
    pinMode(JOYSTICK_BUTTON_PIN, INPUT);
    Serial.begin(9600);
}

void loop() {
    // beaconSignal();
    if (isDown()) {
        beaconSignal();
    }
}
/* ----- END MAIN ----- */












/* ----- BEGIN UTILS ----- */
void beaconSignal(void) {
    buzzerOn();
    delay(10);
    buzzerOff();
    delay(750);
}

uint8_t lcdcursor = 0;
void moveLeft() {
    if (lcdcursor > 0) {
        lcdcursor--;
        return;
    }
    if (lcdcursor == 0) {
        return;
    }
}
void moveRight() {
    if (lcdcursor < 15) {
        lcdcursor++;
        return;
    }
    if (lcdcursor == 15) {
        return;
    }
}
/* ----- END UTILS ----- */