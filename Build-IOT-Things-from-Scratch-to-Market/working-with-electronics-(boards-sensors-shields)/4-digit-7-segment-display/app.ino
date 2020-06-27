#include "SevSeg.h"
SevSeg sevseg;

void setup() {
  byte numDigits = 4;
  byte digitPins[] = {2,3,4,5};
  byte segmentPins[] = {6,8,10,12,13,7,9,11};
  sevseg.begin(COMMON_ANODE, numDigits, digitPins, segmentPins);
}

void loop() {
  sevseg.setNumber(5482, 0);
  sevseg.refreshDisplay();
}