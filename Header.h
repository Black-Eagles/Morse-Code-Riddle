#ifndef HEADER_H
#define HEADER_H

// Libs
#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// RFID
#define RFID_SDA_PIN 10
#define RFID_SCK_PIN 13
#define RFID_MOSI_PIN 11
#define RFID_MISO_PIN 12
#define RFID_RST_PIN 9

// Joystick
#define JOYSTICK_X_AXIS_PIN 1
#define JOYSTICK_Y_AXIS_PIN 0
#define JOYSTICK_BUTTON_PIN 5

// RGB-LED
#define RGB_GREEN_LED_PIN 2
#define RGB_RED_LED_PIN 4

// Buzzer
#define BUZZER_LED_PIN 7

// LED
#define GREEN_LED_PIN 8

// LCD
#define LCD_SCL_ANALOG_PIN 5
#define LCD_SDA_ANALOG_PIN 4

#endif