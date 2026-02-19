#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Touch Detection System using TTP223
 * @author Himanshu
 * @date 2026-02-18
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */

int touchPin=7;
int ledPin=13;
int buzzerPin=13;

void setup() {


    pinMode(touchPin,INPUT);
    pinMode(ledPin,OUTPUT);
    Serial.begin(9600);
}
void loop() {

    int state=digitalRead(touchPin);
    if(state==1)
    {
        digitalWrite(buzzerPin,HIGH); // we use high =1
        Serial.println("TOUCHED");
    }
    else
    {
        digitalWrite(buzzerPin,LOW); // we use low = 0
        Serial.println(" NOT TOUCHED");
    }

}


