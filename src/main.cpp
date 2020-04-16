#include <WiFi.h>          

//needed for library
#include <DNSServer.h>
#include <WebServer.h>

#include "WiFiManager.h"

const char* version = "0.1";
byte mac[6];
char id[12];

void setup() {
  Serial.begin(115200);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

  WiFi.macAddress(mac);
  sprintf(id, "fermentito%02X%02X", mac[4], mac[5]);

  Serial.print("Fermentito version ");
  Serial.println(version);
  Serial.print("ID: ");
  Serial.println(id);
}

void loop() {

}