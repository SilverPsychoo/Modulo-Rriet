# LED RGB

## Codigo:

```cpp
int rojo = 2;
int verde = 3;
int azul = 7;

void setup() {
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
}

void loop() {
  analogWrite(rojo, 255);
  analogWrite(verde, 0);
  analogWrite(azul, 0);
  delay(500);

  analogWrite(rojo, 0);
  analogWrite(verde, 255);
  analogWrite(azul, 0);
  delay(500);

  analogWrite(rojo, 0);
  analogWrite(verde, 0);
  analogWrite(azul, 255);
  delay(500);

  analogWrite(rojo, 255);
  analogWrite(verde, 255);
  analogWrite(azul, 0);
  delay(500);

  analogWrite(rojo, 0);
  analogWrite(verde, 255);
  analogWrite(azul, 255);
  delay(500);

  analogWrite(rojo, 255);
  analogWrite(verde, 0);
  analogWrite(azul, 255);
  delay(500);

  analogWrite(rojo, 255);
  analogWrite(verde, 255);
  analogWrite(azul, 255);
  delay(500);

  analogWrite(rojo, 0);
  analogWrite(verde, 0);
  analogWrite(azul, 0);
  delay(500);
}
```