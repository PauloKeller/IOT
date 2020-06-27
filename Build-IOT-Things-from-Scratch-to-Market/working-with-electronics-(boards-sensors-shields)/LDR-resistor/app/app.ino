#define PIN_A0 A0

void setup() {
	Serial.begin(9600);
}

void loop() {
  int LDR = analogRead(PIN_A0);
  Serial.println(LDR);
  delay(500);
}
