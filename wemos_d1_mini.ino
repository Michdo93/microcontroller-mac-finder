/*
  Wemos D1 Mini MAC Address Finder
  Board: Wemos D1 Mini / NodeMCU (ESP8266)
  Description: Reads the factory-burned MAC address from the ESP8266 Wi-Fi hardware.
*/

#include <ESP8266WiFi.h>

void setup() {
  Serial.begin(115200);
  delay(1000);

  // Initialize Wi-Fi in station mode (no connection required)
  WiFi.mode(WIFI_STA);

  Serial.println();
  Serial.println("========================================");
  Serial.println("    Wemos D1 Mini (ESP8266) MAC Finder  ");
  Serial.println("========================================");
  Serial.print("MAC Address: ");
  Serial.println(WiFi.macAddress());
  Serial.println("========================================");
}

void loop() {
  // Nothing to do here
}
