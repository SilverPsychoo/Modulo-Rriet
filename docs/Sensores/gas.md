# Sensor de Gas Metano MQ4

## Codigo:

```cpp
int pinAnalog = A0;
int pinDigital = 3;

void setup() {
  Serial.begin(9600);
  pinMode(pinDigital, INPUT);
}

void loop() {
  int lecturaAnalog = analogRead(pinAnalog);
  int lecturaDigital = digitalRead(pinDigital);

  Serial.print("Lectura analogica: ");
  Serial.print(lecturaAnalog);
  Serial.print(" | Lectura digital: ");
  Serial.print(lecturaDigital);

  if (lecturaDigital == Low) {
    Serial.print(" Alta concentracion de gas detectada!");
  }

  Serial.println();
  delay(1000);
}
```
