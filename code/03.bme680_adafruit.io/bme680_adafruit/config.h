// instructions au compilateur permettant de définir les différents paramètres de connexion
#define IO_USERNAME ""
#define IO_KEY ""

#define WIFI_SSID ""
#define WIFI_PASS ""

#include "AdafruitIO_WiFi.h"
AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);
