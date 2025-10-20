#include "DHT.h"

// Configuración del DHT11
#define DHTPIN 2     // Pin digital donde conectas la señal
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float temperatura = dht.readTemperature(); // °C
  float humedad = dht.readHumidity();        // %

  if (isnan(temperatura) || isnan(humedad)) {
    Serial.println("Error al leer del DHT11");
  } else {
    Serial.print("Temperatura: ");
    Serial.print(temperatura);
    Serial.print(" °C, Humedad: ");
    Serial.print(humedad);
    Serial.println(" %");
  }

  delay(2000); // Leer cada 2 segundos
}
