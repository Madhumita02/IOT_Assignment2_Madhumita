
/**
 * @file 01_DigitalWrite_Example.ino

 *
 *
 * Problem statement:- Glow led when button is pressed, otherwise off
 *
 */

#include <Arduino.h>

#define LED_PIN 4
#define BUTTON_PIN 5
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
}


void loop() {
  // put your main code here, to run repeatedly:

  if (!digitalRead(BUTTON_PIN)) {
    digitalWrite(LED_PIN, HIGH);
  }
  else {
    digitalWrite(LED_PIN, LOW);
  }
}