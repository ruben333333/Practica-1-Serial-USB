const int LED_PIN = 25;

void setup() {
  Serial.begin(115200);
  delay(500);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
  Serial.println("Sistema llest. Escriu ON o OFF:");
}

void loop() {
  if (Serial.available() > 0) {
    String ordre = Serial.readStringUntil('\n');
    ordre.trim();
    ordre.toUpperCase();
    Serial.println("Rebut: " + ordre);
  }
}
