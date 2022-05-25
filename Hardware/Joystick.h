#ifndef JOYSTICK_H
#define JOYSTICK_H

#include "Pins.h"

int getX(void);
int getY(void);

bool isLeft(void);
bool isRight(void);
bool isTop(void);
bool isButtom(void);
bool isPressed(void);

#endif