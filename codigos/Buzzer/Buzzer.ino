// Buzzer pasivo de 3 pines (VCC, GND, Señal)
// Arduino Uno
// Conecta:
// VCC → 5V
// GND → GND
// Señal → Pin 8

int buzzer = 8;

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // Sonido "suave" (frecuencia baja)
  tone(buzzer, 200);  // 200 Hz
  delay(500);

  // Sonido "fuerte" (frecuencia alta)
  tone(buzzer, 1200); // 1200 Hz
  delay(500);

  // Apagar
  noTone(buzzer);
  delay(500);
}
