#define PIN_A_TWO A2

void setup() {
  analogReference(INTERNAL);
  Serial.begin(9600);
}

float convertTemperatureToCelcius(int value) {
  float celcius = 9.31;
  int converted_value = value / celcius;
  return converted_value;
}

void loop() {
  int value = analogRead(PIN_A_TWO);
  float read_temperature = convertTemperatureToCelcius(value);
  Serial.println(read_temperature);
  delay(1000);
}
