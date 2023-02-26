#include <Arduino.h>
#include <BLEMidi.h>

int ButtonValue = 0 ;
int button1 = 13;  //button input pin in ESP32 (define more int button2,3,4... ect for multiple inputs)

void setup() {
  Serial.begin(115200);
  Serial.println("Initializing bluetooth");
  BLEMidiServer.begin("BLE MIDI device Anand");
  Serial.println("Waiting for connections...");

  pinMode(button1,INPUT_PULLUP);
 
}

void loop() {

  ButtonValue = digitalRead(button1);

static bool buttonAvalueOld = HIGH;

bool buttonAvalueNew = digitalRead(button1);

if (buttonAvalueNew != buttonAvalueOld){
      if (buttonAvalueNew == LOW){
      BLEMidiServer.noteOn(0, 69, 127);
      //Serial.println("Note On");
      }
      else {
      BLEMidiServer.noteOff(0, 69, 127);
      //Serial.println("Note Off");
      }
      
      buttonAvalueOld = buttonAvalueNew;
      delay(10);
}
    }
