/*
  ATmega32U4 MAC Address Finder
  Board: Arduino Leonardo / Pro Micro (ATmega32U4)
  Note: ATmega32U4 does NOT have onboard network capabilities. 
        This sketch requires an external Ethernet Shield (e.g., W5100 / W5500) via SPI.
*/

#include <SPI.h>
#include <Ethernet.h>

// Fallback MAC address (used if DHCP/Shield doesn't provide a preset one)
byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };

void setup() {
  Serial.begin(115200);
  
  // Wait for native USB serial connection to open (essential for ATmega32U4)
  while (!Serial) {
    delay(10);
  }

  Serial.println();
  Serial.println("========================================");
  Serial.println("      ATmega32U4 MAC Address Finder     ");
  Serial.println("========================================");
  Serial.println("Initializing Ethernet Shield...");

  // Start Ethernet (tries to get IP via DHCP, initializes MAC)
  Ethernet.begin(mac);

  Serial.print("Configured MAC Address: ");
  
  // Format and print the MAC address array as a standard hex string
  for (byte i = 0; i < 6; i++) {
    if (mac[i] < 16) Serial.print("0");
    Serial.print(mac[i], HEX);
    if (i < 5) Serial.print(":");
  }
  Serial.println();
  Serial.println("========================================");
}

void loop() {
  // Nothing to do here
}
