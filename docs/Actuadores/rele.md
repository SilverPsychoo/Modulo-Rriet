# Relevador (Relay)

## Codigo:

```cpp
int rele = 3;

void setup() {
  pinMode(rele, OUTPUT);
}

void loop() {
  digitalWrite(rele, LOW);
  delay(1000);

  digitalWrite(rele, HIGH);
  delay(1000);
}
```