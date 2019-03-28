#define IO_USERNAME "votre username"
#define IO_KEY "votre clé"
#define WIFI_SSID "le ssid du wifi"
#define WIFI_PASS "le mot de passe du wifi"

#include "AdafruitIO_WiFi.h"

AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);

void setup(){
  Serial.begin(155200); // initialise la connection série

  while(!Serial); // debug only : attend que la console soit ouverte

  Serial.println("tentative de connexion"); 

  io.connect(); // utilisation de l'objet io pour se connecter (au wifi, d'abord, à la platerforme ensuite)
  
  // boucle sur le statut de la connection
  while(io.status() < AIO_CONNECTED){ // AOI_CONNECTED est une constante fournie par la bibliothèque adafruit.io
    Serial.print("."); // affiche un "." dans la console tant que la connection n'est pas établie
    delay(500);
  }

  // si nous sommes en dehors de la boucle, c'est que nous sommes connectés
  Serial.println(); // ligne vide
  
  Serial.println(io.statusText());

  
}
