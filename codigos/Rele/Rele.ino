int rele = 7;

void setup() {
  pinMode(rele, OUTPUT);
}

void loop() {
  // Activa el relé (enciende)
  digitalWrite(rele, LOW);  // Algunos módulos se activan con LOW
  delay(1000);

  // Desactiva el relé (apaga)
  digitalWrite(rele, HIGH);
  delay(1000);
}
