int led = 5;
int dt = 10;
int bright;


void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);

  
}

void loop() {
  for(bright=0;bright<=255;bright++){
    analogWrite(led,bright);
    Serial.println(bright);
    delay(dt);
    //analogWrite(led,LOW);
   // delay(dt);
  }

  
}
