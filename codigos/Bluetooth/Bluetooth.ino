#include <SoftwareSerial.h>

SoftwareSerial BT(18, 19); 

void setup() {
  Serial.begin(9600);
  BT.begin(9600); 
  Serial.println(" Bluetooth listo. Conéctate desde tu celular.");
}

void loop() {
  if (BT.available()) {
    char c = BT.read();
    Serial.print("BT → ");
    Serial.println(c);
  }

  if (Serial.available()) {
    char c = Serial.read();
    BT.write(c);
  }
}
