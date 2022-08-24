#include "Keyboard.h"
char ctrlKey = KEY_LEFT_SHIFT;

void setup() {
  Keyboard.begin();
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
}

void loop() {
  if (digitalRead(3)==HIGH){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('c');
    delay(100);
    Keyboard.release('c');
    Keyboard.release(KEY_LEFT_CTRL);
    delay(500);
  }
  if (digitalRead(4)==HIGH){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('v');
    delay(100);
    Keyboard.release('v');
    Keyboard.release(KEY_LEFT_CTRL);
    delay(500);
  }
  if (digitalRead(5)==HIGH){
    Keyboard.press('v');
  }else{
    Keyboard.release('v');
  }
  if (digitalRead(6)==HIGH){
    Keyboard.press('m');
  }else{
    Keyboard.release('m');
  }
}
