void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(19, OUTPUT);
  pinMode(A1, OUTPUT);
  digitalWrite(19, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  double proximity = analogRead(A0);
  //( (analogRead(A0) - 1017))/300.0 * 1023;
  
  Serial.println(proximity);
  //analogWrite(A1, proximity/4);

  for(int i = 0; i < 255; i++){
    analogWrite(A1, i);
    delay(50);
    if(i == 254){
      i = 0;
      }  
  }
  
}
