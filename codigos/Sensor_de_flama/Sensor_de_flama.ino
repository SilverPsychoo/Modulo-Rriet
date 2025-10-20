int sensorFlama = 7;
int estado;

void setup() {
  pinMode(sensorFlama, INPUT);
  Serial.begin(9600);
}

void loop() {
  estado = digitalRead(sensorFlama);

  if (estado == LOW) { 
    Serial.println("No hay llama");
  } else {
    Serial.println("¡Llama detectada!");
  }

  delay(500); 
}
