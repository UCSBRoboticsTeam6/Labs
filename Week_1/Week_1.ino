int pins[7] = {15,16,11,12,10,17,18};

int i = 0;

void setup() {
  // put your setup code here, to run once:
  for (int j = 0; j < 7; j++)
    pinMode(pins[j], OUTPUT);
//  pinMode(A9, OUTPUT);
//  digitalWrite(A9, HIGH);
  

}

void loop() {
    if (i==0) digitalWrite(pins[6], LOW);
    else digitalWrite(pins[i - 1], LOW);
    digitalWrite(pins[i], HIGH);
    delayMicroseconds(50000);
    i++;
    if (i == 7)
      i = 0;
} 
