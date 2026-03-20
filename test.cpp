#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define OLED_MOSI 11
#define OLED_CLK  13
#define OLED_DC   9
#define OLED_CS   10
#define OLED_RESET 8

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT,
  OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);

void setup() {
  if (!display.begin(SSD1306_SWITCHCAPVCC)) {
    while (true);
  }

  display.clearDisplay();
  display.setTextSize(2);
  display.setCursor(10, 20);
  display.println("OLED OK");
  display.display();
}

void loop() {}
