#define LED_PIN 12
#define BTN_PIN 32

bool prevState = LOW;
bool ledState  = LOW;
int compteur = 0;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BTN_PIN, INPUT);
  Serial.begin(115200);

}

void loop() {
  bool state = digitalRead(BTN_PIN);

  if (state != prevState) {
    if (state == HIGH) {   
    
      ledState = ! ledState;
      digitalWrite(LED_PIN, ledState);
    
      Serial.println("on");
    }else{
      Serial.println("off");
    }
    delay(50);
  }
  prevState = state;

}
