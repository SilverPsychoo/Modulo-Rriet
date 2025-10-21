# Sensor de Temperatura (DHT11)

Para usar este código, necesitas la librería **DHT sensor library** de Adafruit.

## Instalación de la librería

1. Abre Arduino IDE.
2. Ve a **Sketch → Include Library → Manage Libraries…**
3. En la barra de búsqueda escribe: `DHT sensor library`
4. Busca la librería de **Adafruit** y haz clic en **Install**
5. Espera a que termine la instalación y reinicia Arduino IDE si es necesario

## Codigo:

```cpp
#include "DHT.h"

#define DHTPIN 2     
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float temperatura = dht.readTemperature(); 
  float humedad = dht.readHumidity();        

  if (isnan(temperatura) || isnan(humedad)) {
    Serial.println("Error al leer del DHT11");
  } else {
    Serial.print("Temperatura: ");
    Serial.print(temperatura);
    Serial.print(" °C, Humedad: ");
    Serial.print(humedad);
    Serial.println(" %");
  }

  delay(2000); 
}
```