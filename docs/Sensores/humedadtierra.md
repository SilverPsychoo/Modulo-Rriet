# Sensor de Humedad en la Tierra

## Codigo:

```cpp
#define sensor A0 
int valor = 0;

void setup()
{
    Serial.begin(9600);
}
void loop()
{
    int valor = map(analogRead(sensor), 0, 1023, 100, 0);
    Serial.print("Humedad: ");
    Serial.print(valor);
    Serial.println("%");
    delay(100);
}
```