/**
 * Utiliser les tableaux (array) et les boucles 
 * pour controler plusieurs leds connectées à des broches différentes de la carte 
 */
 // instruction au compilateur
#define NBR_LEDS 3
// définir un tableau (array) de références aux broches sur lesquelles 
int leds_pins[] = {12,27,33};
void setup() {

  /* initialiser les broches en sortie */
  // mauvaise méthode : 
  // pinMode(12, OUTPUT);
  // pinMode(27, OUTPUT);
  // pinMode(33, OUTPUT);
  

  // méthode correcte (plus efficace)
  for(int i = 0; i < NBR_LEDS; i++){
    pinMode(leds_pins[i], OUTPUT);
  }

}

void loop() {
  for(int i = 0; i < NBR_LEDS; i++){
    digitalWrite(leds_pins[i], HIGH);
    delay(30);
  }
  for(int i = NBR_LEDS-1; i >= 0; i--){
    digitalWrite(leds_pins[i], LOW);
    delay(30);
  }

}
