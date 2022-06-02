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
Joystick joystick;
bool isLeft(void);
bool isRight(void);
bool isUp(void);
bool isDown(void);
/* ----- END HARDWARE ----- */

#endif