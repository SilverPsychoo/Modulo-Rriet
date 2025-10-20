#include <LedControl.h>

LedControl lc = LedControl(11, 13, 10, 1);

byte smiley[8] = {
  B00111100,
  B01000010,
  B10100101,
  B10000001,
  B10100101,
  B10011001,
  B01000010,
  B00111100
};

void setup() {
  lc.shutdown(0, false);
  lc.setIntensity(0, 8);
  lc.clearDisplay(0);

  for(int i=0; i<8; i++){
    lc.setRow(0, i, smiley[i]);
  }
}

void loop() {
}
