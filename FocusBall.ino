#include "AppObject.hpp"

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  
  AppObject::GetInstance().Iteration();
  delay(1000);                     
}
