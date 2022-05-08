//Author: Sain Saji
//BaseCode for SSD1306 128x64 OLED Displays.
//Connections: GPIO PIN 5 - SCL[CLOCK] GPIO PIN 4 SDA[DATA]
//G[Ground] PIN 3
//VCC PIN 5 [3v3 OUT]
//Install latest Adafruit SSD1306 Libraries
//For Board Selection use https://github.com/earlephilhower/arduino-pico/releases/download/global/package_rp2040_index.json in File->Preferences
//Select Tools->Board->Raspberry Pi RP2040->Raspberry Pico

//Libraries
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

//Definitions
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
#define OLED_RESET     -1 // Make sure this is set to -1 for Pico
#define SCREEN_ADDRESS 0x3C //Use 3C with Pico
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup()
{
  display.begin(SSD1306_SWITCHCAPVCC,0x3C);
  display.fillScreen(0); //0 for filling with black dots. 1 for white
  display.display();
}

void loop()
{
}
