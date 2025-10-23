void setup() {
  Serial.begin(115200);
  pinMode(2, OUTPUT); // LED biru internal di GPIO 2
}

void loop() {
  if (Serial.available()) {
    char data = Serial.read();
    if (data == '1') {
      digitalWrite(2, HIGH);
      Serial.println("LED ON");
    } else if (data == '0') {
      digitalWrite(2, LOW);
      Serial.println("LED OFF");
    }
  }
}
