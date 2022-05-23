#ifndef BUZZER_H
#define BUZZER_H

#include <Arduino.h>
#include "Pins.h"

bool isRunning();
void on();
void off();
void peep(int delay);

#endif