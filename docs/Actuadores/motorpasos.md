# Motor a pasos

## Codigo:

```cpp
#include <Stepper.h>
#define PASOS_POR_VUELTA 2048

Stepper motor(PASOS_POR_VUELTA, 40, 41, 42, 43);

void setup() {
  motor.setSpeed(15);
  Serial.begin(9600);
}

void loop() {
  motor.step(PASOS_POR_VUELTA);
  delay(1000);

  motor.step(-PASOS_POR_VUELTA);
  delay(1000);
}
```