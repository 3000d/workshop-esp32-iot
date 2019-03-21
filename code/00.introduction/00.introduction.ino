void setup() {
// LED sur pin 12
  pinMode(12, OUTPUT);  

}

void loop() {
  digitalWrite(12, HIGH);
  delay(200);
  digitalWrite(12, LOW);
  delay(800);
  

}
