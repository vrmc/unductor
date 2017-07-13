int incomingByte = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // to send data only when you receive data
  if (Serial.available() > 0) {
      incomingByte = Serial.read();
      Serial.println(incomingByte);
  }
}
