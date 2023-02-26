#include <Arduino.h>

int button1 = 13;
 
int ButtonValue1 = 0;


void setup() {
  
 Serial.begin(9600);
 pinMode(button1,INPUT_PULLUP);
  
}

void loop() {
  
  ButtonValue1 = digitalRead(button1);
  Serial.println(ButtonValue1);

}
