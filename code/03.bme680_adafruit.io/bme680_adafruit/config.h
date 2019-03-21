// instructions au compilateur permettant de définir les différents paramètres de connexion
#define IO_USERNAME "greberg"
#define IO_KEY "29100448ffe24f73a0b6ee096bd043da"

#define WIFI_SSID "3kd.be"
#define WIFI_PASS "david3000"

#include "AdafruitIO_WiFi.h"
AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);
