# Módulo Bluetooth HC-05

Para interactuar con Arduino desde el celular mediante Bluetooth, recomendamos usar la app “Serial Bluetooth Terminal”:

[Serial Bluetooth Terminal en Google Play](https://play.google.com/store/apps/details?id=de.kai_morich.serial_bluetooth_terminal)


Con esta app puedes:

- Enviar caracteres desde tu celular asi aparecerán en el monitor Serial de Arduino
- Escribir en el monitor Serial y se enviará al celular

### Pasos para conectarte

1. Enciende tu módulo HC-05/06 y empareja tu celular con él (desde ajustes de Bluetooth).  
2. Abre la app **Serial Bluetooth Terminal** en tu celular.  
3. Selecciona el dispositivo HC-05/06 en la app para conectarte.  
4. Envía caracteres desde la app → se mostrarán en el monitor Serial de Arduino.  
5. Escribe algo en el monitor Serial de Arduino → se enviará al celular.

## Codigo:

```cpp
#include <SoftwareSerial.h>

SoftwareSerial BT(18, 19); 

void setup() {
  Serial.begin(9600);
  BT.begin(9600); 
  Serial.println(" Bluetooth listo. Conéctate desde tu celular.");
}

void loop() {
  if (BT.available()) {
    char c = BT.read();
    Serial.print("BT → ");
    Serial.println(c);
  }

  if (Serial.available()) {
    char c = Serial.read();
    BT.write(c);
  }
}
```