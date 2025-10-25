# Servo Motor

## Codigo:

```cpp
#include <Servo.h>

Servo miServo;  
int pos = 0;   

void setup() {
  miServo.attach(7); 
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) {
    miServo.write(pos);
    delay(15); 
  }

  for (pos = 180; pos >= 0; pos -= 1) {
    miServo.write(pos);
    delay(15);
  }
}
```