/*
  ESP32 MAC Address Finder
  Board: ESP32 / ESP32-CAM / ESP32-WROOM
  Description: Reads the factory-burned MAC address from the ESP32 Wi-Fi hardware.
*/

#include <WiFi.h>

void setup() {
  Serial.begin(115200);
  delay(1000);

  // Initialize Wi-Fi in station mode (no connection required)
  WiFi.mode(WIFI_STA);

  Serial.println();
  Serial.println("========================================");
  Serial.println("       ESP32 MAC Address Finder         ");
  Serial.println("========================================");
  Serial.print("MAC Address: ");
  Serial.println(WiFi.macAddress());
  Serial.println("========================================");
}

void loop() {
  // Nothing to do here
}
