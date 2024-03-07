
//4.	Day 4: Sound an alarm using a buzzer.


int buzz = 9;
int dt = 10;


void setup() {
  pinMode(buzz,OUTPUT);

  

}

void loop() {
  digitalWrite(buzz,1);
  delay(dt);
  digitalWrite(buzz,0);
  delay(dt);
  

}
