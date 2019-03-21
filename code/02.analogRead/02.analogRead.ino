void setup() {
  Serial.begin(9600);
  
}

void loop() {
  int val = analogRead(A6);
  Serial.println(val);
  delay(500);

}
