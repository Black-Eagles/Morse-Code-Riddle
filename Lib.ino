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
    int data = analogRead(JOYSTICK_Y_AXIS_PIN);
    if (data <= 120) {
        return true;
    } else {
        return false;
    }
}
bool isRight(void) {
    int data = analogRead(JOYSTICK_Y_AXIS_PIN);
    if (data >= 900) {
        return true;
    } else {
        return false;
    }
}
bool isUp(void) {
        int data = analogRead(JOYSTICK_X_AXIS_PIN);
    if (data >= 900) {
        return true;
    } else {
        return false;
    }
}
bool isDown(void) {
    int data = analogRead(JOYSTICK_X_AXIS_PIN);
    if (data <= 100) {
        return true;
    } else {
        return false;
    }
}
bool isPressed(void) {
    return digitalRead(JOYSTICK_BUTTON_PIN);
}

// LCD
void lcdWrite(uint8_t location, char text) {
    lcd.setCursor(location, 0);
    lcd.write(text);
}

// RFID
bool cardPresent(void) {
    if (!nfcReader.PICC_IsNewCardPresent()) {
        return false;
    }
    if (!nfcReader.PICC_ReadCardSerial()) {
        return false;
    }
    return true;
}

/* ----- END HARDWARE ----- */