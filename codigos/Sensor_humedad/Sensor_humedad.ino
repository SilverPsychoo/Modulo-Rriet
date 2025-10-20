#define SENSOR A0
int valor = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  valor = analogRead(SENSOR);

  int humedad = map(valor, 1023, 0, 0, 100);

  Serial.print("Humedad: ");
  Serial.print(humedad);
  Serial.println("%");

  delay(500);
}
