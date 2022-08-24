#include "Keyboard.h"
char ctrlKey = KEY_LEFT_SHIFT;

void setup() {
  Keyboard.begin();
  pinMode(7, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  if (digitalRead(7)==LOW){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press('n');
    digitalWrite(13,HIGH);
  }else{
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release('n');
    digitalWrite(13,LOW);
  }
}
