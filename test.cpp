#include <Arduino.h>
#include <U8g2lib.h>
#include <SPI.h>

// clock = 13, data = 11 handled by hardware SPI
// cs = 10, dc = 9, reset = 8
U8G2_SSD1309_128X64_NONAME0_F_4W_HW_SPI u8g2(
  U8G2_R0,
  /* cs=*/ 10,
  /* dc=*/ 9,
  /* reset=*/ 8
);

void setup() {
  u8g2.begin();
}

void loop() {
  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_ncenB08_tr);
  u8g2.drawStr(0, 24, "Hello");
  u8g2.drawStr(0, 48, "SSD1309");
  u8g2.sendBuffer();
  delay(1000);
}
