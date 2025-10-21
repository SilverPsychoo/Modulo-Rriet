# LCD

Para usar este LCD necesitas la librería **LiquidCrystal_I2C**.  

---

## Instalación de la librería

1. Abre Arduino IDE.
2. Ve a **Sketch → Include Library → Manage Libraries…**
3. En la barra de búsqueda escribe: `LiquidCrystal I2C`
4. Selecciona la librería de **Frank de Brabander** y haz clic en **Install**
5. Espera que termine la instalación

## Codigo:

```cpp
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
```