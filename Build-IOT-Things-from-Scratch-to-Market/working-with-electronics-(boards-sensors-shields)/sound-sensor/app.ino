#define SENSOR_PIN A0
#define LED_PIN 3

void setup() {
  Serial.begin(9600);

  pinMode(LED_PIN, OUTPUT);
}

float convertVoltage(int value) {
  float voltage = 5.0;
  float analog_range = 1023.0;

  return value * (voltage / analog_range);
}

void loop() {
  int value = analogRead(SENSOR_PIN);
  float voltage = convertVoltage(value);

  Serial.println(voltage);
  
  if (value >= 0) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }

  delay(500);
}
