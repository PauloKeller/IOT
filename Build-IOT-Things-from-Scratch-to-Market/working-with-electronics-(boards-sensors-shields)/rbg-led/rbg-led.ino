#include <stdio.h>
#include <stdlib.h>
#include <Arduino.h>

#define RED_PIN 6
#define GREEN_PIN 5
#define BLUE_PIN 3

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
  int red_value = rand();
  int green_value = rand();
  int blue_value = rand();
  
  if (red_value < 150) {
    red_value = 0;
  }

  if (blue_value < 150) {
    blue_value = 0;
  }

  if (green_value < 150) {
    green_value = 0;
  }

  setColor(red_value, green_value, blue_value);
  delay(1000);
}

void setColor(int red, int green, int blue) {
  analogWrite(RED_PIN, red);
  analogWrite(BLUE_PIN, blue);
  analogWrite(GREEN_PIN, green);
}