# Joystick

## Codigo:

```cpp
int ejeX = A0;
int ejeY = A1;
int boton = 7;

void setup() {
  Serial.begin(9600);
  pinMode(boton, INPUT_PULLUP); 
}

void loop() {
  int x = analogRead(ejeX);
  int y = analogRead(ejeY);
  int sw = digitalRead(boton);

  Serial.print("X: ");
  Serial.print(x);
  Serial.print(" | Y: ");
  Serial.print(y);
  Serial.print(" | Boton: ");
  if (sw == LOW) Serial.println("Presionado");
  else Serial.println("Suelto");

  delay(300);
}
```