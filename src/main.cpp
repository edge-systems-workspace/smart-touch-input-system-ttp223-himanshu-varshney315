#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Touch Detection System using TTP223
 * @author Himanshu
 * @date 2026-02-19
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */

 // TODO 1:
 // Define touch sensor digital pin (Use pin 2)

 // TODO 2:
 // Create variable to store touch state
int touchPin=7;
int ledPin=13;
int buzzerPin=13;

void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)

    // TODO 4:
    // Configure touch pin as INPUT

    // TODO 5:
    // Print system initialization message

    pinMode(touchPin,INPUT);
    pinMode(ledPin,OUTPUT);
    Serial.begin(9600);
}

