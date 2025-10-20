int sensorIR = 7;
int estado;

void setup() {
  Serial.begin(9600);
  pinMode(sensorIR, INPUT);
}

void loop() {
  estado = digitalRead(sensorIR);

  if (estado == LOW) { 
    Serial.println("Objeto detectado");
  } else {
    Serial.println("No hay objeto");
  }

  delay(300);
}
