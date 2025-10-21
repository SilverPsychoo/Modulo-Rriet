# Pantalla de 7 segmentos con 74HC595

Este ejemplo usa la librería **ShiftRegister74HC595** para manejar **2 displays de 7 segmentos** con Arduino, usando menos pines que si los conectaras directo.

---

## Instalación de la librería

1. Abre Arduino IDE.
2. Ve a **Sketch → Include Library → Manage Libraries…**
3. En la barra de búsqueda escribe: `ShiftRegister74HC595`
4. Busca la librería de **Lukas F. Hartmann** (u otra compatible) y haz clic en **Install**
5. Espera a que termine la instalación

## Codigo:

```cpp
#include <ShiftRegister74HC595.h>

int dataPIN = 0;
int latchPIN = 2;
int clockPIN = 1;

ShiftRegister74HC595<2> sr(dataPIN, clockPIN, latchPIN);

int digit1, digit2;
uint8_t digits[] = { 
  B11000000,
  B11111001,
  B10100100,
  B10110000,
  B10011001,
  B10010010,
  B10000010,
  B11111000,
  B10000000,
  B10010000
};

void setup() {
}

void loop() {
  showNumber(69);
  delay(2000);
  for(int i=0; i<=99; i++) {
    showNumber(i);
    delay(350);
  }
  delay(2000);
  for(int i=99; i>=0; i--) {
    showNumber(i);
    delay(350);
  }
  delay(2000);   
}

void showNumber(int num) {
  digit1 = num % 10;
  digit2 = (num / 10) % 10;
  uint8_t numberToPrint[] = {digits[digit2], digits[digit1]};
  sr.setAll(numberToPrint);
}
```