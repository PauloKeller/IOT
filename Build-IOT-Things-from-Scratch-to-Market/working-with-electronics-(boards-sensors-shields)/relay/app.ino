#define PIN_RELAY 2

void setup() {
  pinMode(PIN_RELAY, OUTPUT);
}

void loop() {
  digitalWrite(PIN_RELAY, HIGH);
  delay(1000);
  digitalWrite(PIN_RELAY, LOW);
  delay(1000);
}
