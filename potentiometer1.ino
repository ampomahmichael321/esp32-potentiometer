const int potPin = 2; // use a reliable analog pin

void setup() {
  Serial.begin(115200);
  delay(1000); // give Serial Monitor time to connect
}

void loop() {
  int potValue = analogRead(potPin);
  Serial.print("Potentiometer value: ");
  Serial.println(potValue);
  delay(200); // slow down the print rate
}