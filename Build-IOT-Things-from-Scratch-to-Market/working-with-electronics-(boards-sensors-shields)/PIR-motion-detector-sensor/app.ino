#define LED_PIN 3
#define PIR_PIN 2

int pir_state = LOW;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(PIR_PIN, INPUT);

  Serial.begin(9600);
}

void loop() {
  int value = digitalRead(PIR_PIN);

  if (value == HIGH) {
    digitalWrite(LED_PIN, HIGH);

    if (pir_state == LOW) {
      Serial.println("Motion detected!");

      pir_state = HIGH;
    }
  } else {
    digitalWrite(LED_PIN, LOW);

    if (pir_state == HIGH) {
      Serial.println("Motion ended!");

      pir_state = LOW;
    }
  }
}
