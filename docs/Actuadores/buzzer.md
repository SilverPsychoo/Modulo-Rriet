# Buzzer

## Codigo:

```cpp
int buzzer = 7;

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  tone(buzzer, 200);
  delay(500);

  tone(buzzer, 1200);
  delay(500);

  noTone(buzzer);
  delay(500);
}
```