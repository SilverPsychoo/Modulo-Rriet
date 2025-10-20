#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();        
  lcd.backlight();
}

void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Hola Mundo");
  delay(2000);

  lcd.clear();
  delay(500);

  lcd.setCursor(0, 0);
  lcd.print("Adios Mundo");
  delay(3000);

  lcd.clear();
  delay(1000);
}
