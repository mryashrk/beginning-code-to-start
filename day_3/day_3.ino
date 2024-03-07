// 	Day 3: Button-controlled LED.

int led = 5;
int pushbt = 8;


void setup() {
  pinMode(led,OUTPUT);
  pinMode(pushbt,INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int val = digitalRead(pushbt);
  Serial.println(val);
  if(val==1){
    digitalWrite(led,1);
  
  }
  else{
    digitalWrite(led,0);
  }

  


}
