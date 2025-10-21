# Laser (HW-493)

Ten cuidado con este actuador, usalo de formula segura, sobretodo **NO LO APUNTES A LOS OJOS**

## Codigo:

```cpp
int laserPin = 8;

void setup() {
  pinMode(laserPin, OUTPUT);
}

void loop() {
  digitalWrite(laserPin, HIGH);
  delay(1000);

  digitalWrite(laserPin, LOW);
  delay(1000);
}
```