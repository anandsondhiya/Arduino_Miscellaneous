int button1 = 34 ;

void setup() {
  Serial.begin(9600);
  pinMode(button1, INPUT);
}

void loop() {
  int ButtonState = digitalRead(button1);
  
  Serial.println(ButtonState);

}
