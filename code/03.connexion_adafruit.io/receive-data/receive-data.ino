#include "config.h"

#define LED_PIN 5

AdafruitIO_Feed *led = io.feed("workshop-trakk.led"); // la clé du feed dans equel publier

void setup(){
  Serial.begin(155200); // initialise la connection série

  while(!Serial); // debug only : attend que la console soit ouverte

  Serial.println("tentative de connexion"); 

  led->onMessage(handleMessage); // definition d'une fonction de callback quand on reçoit un messsage sur le feed led
  
  io.connect();
  while(io.status() < AIO_CONNECTED){
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print(io.statusText());
  
}


void loop(){
  io.run();  // obligatoire en début de boucle pour maintenir la connexion au serveur et pour mettre à jour les éventuelles données reçues
}

// lorsqu'un message sera reçu sur le feed "led", cette fonction sera appelée.
// le paramètre est un type de données défini par la librairie adafruit.io
// permet de manipuler des valeurs numériques en entrée
void handleMessage(AdafruitIO_Data *data){
  Serial.print("reçu ");
  if(data->toLevelPin() == HIGH){
    Serial.println("ON/HIGH");
  }else{
    Serial.println("OFF/LOW");
  }
  digitalWrite(LED_PIN, data->toPinLevel());
}
