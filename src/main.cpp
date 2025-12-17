// src/main.cpp
// ESP32-S3-0.42OLED - Минимальный рабочий код
// GPIO 48 (SDA), GPIO 47 (SCL)

#include <Arduino.h>
#include <U8g2lib.h>

// ESP32-S3-0.42: SDA=48, SCL=47
U8G2_SSD1306_72X40_ER_F_HW_I2C u8g2(U8G2_R0, U8X8_PIN_NONE, 47, 48);

void setup(void) {
  Serial.begin(115200);
  delay(2000);
  
  // Инициализация дисплея
  u8g2.begin();
  u8g2.setDrawColor(1);
  u8g2.setFontPosTop();
  u8g2.setFont(u8g2_font_luRS08_tr);
  u8g2.setFontMode(1);
  u8g2.setFontDirection(0);
  u8g2.clear();
  
  // Вывод "Hello World!"
  u8g2.clearBuffer();
  u8g2.drawFrame(0, 0, 72, 40);
  u8g2.setCursor(2, 1);
  u8g2.print("Hello");
  u8g2.setCursor(2, 12);
  u8g2.print("World!");
  u8g2.sendBuffer();
}

void loop(void) {
  // Ваш код здесь
  delay(1000);
}
