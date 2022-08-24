#include <Mouse.h>

void setup() {
  Mouse.begin();
}

void loop() {
  if(analogRead(A1) < 400){
    Mouse.move(1,0,0);
  }
  if(analogRead(A1) > 600){
    Mouse.move(-1,0,0);
  }
  if(analogRead(A0) < 400){
    Mouse.move(0,-1,0);
  }
  if(analogRead(A0) > 600){
    Mouse.move(0,1,0);
  }
  if(analogRead(A2) < 500){
    Mouse.press(MOUSE_LEFT);
  }else{
    Mouse.release(MOUSE_LEFT);
  }
}
