# Matriz LED

Para controlar esta matriz necesitas la librería **LedControl**.  

---

## Instalación de la librería

1. Abre Arduino IDE.
2. Ve a **Sketch → Include Library → Manage Libraries…**
3. En la barra de búsqueda escribe: `LedControl`
4. Selecciona la librería de **E. Reh** y haz clic en **Install**
5. Espera a que termine la instalación

---

## Codigo:

```cpp
#include <LedControl.h>

LedControl lc = LedControl(12, 11, 10, 1);

byte smiley[8] = {
  B00111100,
  B01000010,
  B10100101,
  B10000001,
  B10100101,
  B10011001,
  B01000010,
  B00111100
};

void setup() {
  lc.shutdown(0, false);
  lc.setIntensity(0, 8);
  lc.clearDisplay(0);

  for(int i=0; i<8; i++){
    lc.setRow(0, i, smiley[i]);
  }
}

void loop() {
}
```