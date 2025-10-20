// Sensor de movimiento PIR - Arduino Uno
// Conexión:
// VCC → 5V
// GND → GND
// OUT → Pin 7

int pinPIR = 7;
int estado = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pinPIR, INPUT);
}

void loop() {
  estado = digitalRead(pinPIR);

  if (estado == HIGH) {
    Serial.println("Movimiento detectado");
  } else {
    Serial.println("Sin movimiento...");
  }

  delay(500);
}
