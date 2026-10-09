# Microcontroller MAC Finder

A simple, collection of ready-to-use Arduino sketches to retrieve the MAC address from various microcontroller architectures (`ESP32`, `ESP8266 / Wemos D1 Mini`, and `ATmega32U4`).

---

## Overview of Sketches

| File | Target Board / MCU | Network Hardware | Required Library |
| :--- | :--- | :--- | :--- |
| `esp32.ino` | ESP32 / ESP32-CAM | Onboard Wi-Fi | `WiFi.h` (Built-in) |
| `wemos_d1_mini.ino` | Wemos D1 Mini / NodeMCU | Onboard Wi-Fi (ESP8266) | `ESP8266WiFi.h` (Built-in) |
| `atmega32u4.ino` | Arduino Leonardo / Pro Micro | External Ethernet Shield (W5100/W5500) | `SPI.h`, `Ethernet.h` |

---

## Hardware Requirements & Notes

### 1. ESP32 / ESP32-CAM (`esp32.ino`)
* **Hardware:** Any ESP32 or ESP32-CAM board.
* **Mechanism:** Queries the factory-burned station MAC address directly from the internal wireless controller using `WiFi.macAddress()`. No actual router connection is required.

### 2. Wemos D1 Mini / ESP8266 (`wemos_d1_mini.ino`)
* **Hardware:** Wemos D1 Mini, NodeMCU, or bare ESP8266 modules.
* **Mechanism:** Similar to the ESP32, it reads the unique hardware MAC address via `WiFi.macAddress()` without needing to join a Wi-Fi network.

### 3. ATmega32U4 (`atmega32u4.ino`)
* **Hardware:** Arduino Leonardo, Pro Micro, or compatible ATmega32U4 boards **plus** an external SPI Ethernet Shield (such as W5100 or W5500).
* **Important Note:** The ATmega32U4 chip itself **does not** feature onboard networking. A MAC address only exists when paired with an Ethernet or Wi-Fi module. 
* **USB Note:** Because the ATmega32U4 features native USB (CDC), the `while(!Serial)` loop ensures the sketch waits until you open the Serial Monitor before printing.

---

## How to Use

1. Clone or download this repository.
2. Open the desired `.ino` file in the **Arduino IDE**.
3. Select your corresponding target board under `Tools > Board`.
4. Select the correct port under `Tools > Port`.
5. Upload the sketch and open the **Serial Monitor** (set baud rate to **115200**).
6. Press the physical `RST` (Reset) button on your board if nothing appears immediately.
