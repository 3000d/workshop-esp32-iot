#include "config.h"

int count = 0;

AdafruitIO_Feed *counter = io.feed("workshop-trakk.count"); // la clé du feed dans equel publier

void setup(){
  Serial.begin(155200); // initialise la connection série

  while(!Serial); // debug only : attend que la console soit ouverte

  Serial.println("tentative de connexion"); 

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

  counter->save(count); // publication de la donnée dans le feed count

  count = count +1;

  delay(3000);
  
  
  
  
}
