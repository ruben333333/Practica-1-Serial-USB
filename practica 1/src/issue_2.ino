void setup() {
  Serial.begin(115200);
  delay(500);
  Serial.println("Sistema llest. Escriu ON o OFF:");
}

void loop() {
  if (Serial.available() > 0) {
    String ordre = Serial.readStringUntil('\n');
    ordre.trim();
  }
}
