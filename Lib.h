#ifndef LIB_H
#define LIB_H

#include "Header.h"

/* ----- BEING HARDWARE ----- */
// Buzzer
void buzzerOn(void);
void buzzerOff(void);

// LED
void ledOn(void);
void ledOff(void);

// RGB-LED
void redOn(void);
void redOff(void);
void greenOn(void);
void greenOff(void);

// Joystick
bool isLeft(void);
bool isRight(void);
bool isUp(void);
bool isDown(void);

// LCD
LiquidCrystal_I2C lcd(0x27, 16, 2);
/* ----- END HARDWARE ----- */

#endif