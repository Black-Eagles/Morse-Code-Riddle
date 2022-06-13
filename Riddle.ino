#include "Header.h"
#include "Lib.h"

#define DEBUG_TERMINAL

/* ----- BEGIN MAIN ----- */
void setup() {
    lcd.init();
    lcd.backlight();
    SPI.begin();
    nfcReader.PCD_Init();
    pinMode(BUZZER_LED_PIN, OUTPUT);
    pinMode(GREEN_LED_PIN, OUTPUT);
    pinMode(RGB_RED_LED_PIN, OUTPUT);
    pinMode(RGB_GREEN_LED_PIN, OUTPUT);
    pinMode(JOYSTICK_BUTTON_PIN, INPUT);
    Serial.begin(9600);
}

// Debug
#ifdef DEBUG_TERMINAL
void debugMsg() {
    // Joystick
    Serial.print("X: ");
    Serial.print(analogRead(JOYSTICK_X_AXIS_PIN));
    Serial.print(" Y: ");
    Serial.println(analogRead(JOYSTICK_Y_AXIS_PIN));

    // RFID
    Serial.println(cardPresent());
}
#endif

void loop() {
    // Debug
    #ifdef DEBUG_TERMINAL
    debugMsg();
    #endif

    // Main
    if (cardPresent()) {
            buzzerOn();
            delay(1500);
            buzzerOff();
            delay(500);
    } else {
        beaconSignal();
    }
}
/* ----- END MAIN ----- */












/* ----- BEGIN UTILS ----- */
void beaconSignal(void) {
    buzzerOn();
    delay(20);
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