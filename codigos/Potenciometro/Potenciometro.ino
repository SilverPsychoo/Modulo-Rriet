#define POT A0

void setup() {
  Serial.begin(9600);
}

void loop() {
  int valor = analogRead(POT); // Lee valor entre 0 y 1023
  int porcentaje = map(valor, 0, 1023, 0, 100);

  Serial.print("Nivel del potenciómetro: ");
  Serial.print(porcentaje);
  Serial.println("%");

  delay(200);
}
