# Potenciometro

## Codigo:

```cpp
#define POT A0

void setup() {
  Serial.begin(9600);
}

void loop() {
  int valor = analogRead(POT);
  int porcentaje = map(valor, 0, 1023, 0, 100);

  Serial.print("Nivel del potenciómetro: ");
  Serial.print(porcentaje);
  Serial.println("%");

  delay(200);
}
```