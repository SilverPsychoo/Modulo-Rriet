#define TRIG 9
#define ECHO 10

long duracion;
int distancia;

void setup() {
  Serial.begin(9600);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}

void loop() {
  // Enviar pulso ultrasónico
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  // Medir el tiempo del rebote
  duracion = pulseIn(ECHO, HIGH);

  // Calcular distancia (cm)
  distancia = duracion * 0.034 / 2;

  // Mostrar en serial
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");

  delay(500);
}
