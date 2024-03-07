int led = 3;
int photopin = A0;
int val;


void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  val = analogRead(photopin);
  Serial.print(val);
  Serial.print("   ,   ");
  int volt = val*0.249;
  Serial.println(volt);

  analogWrite(led,volt);
  // put your main code here, to run repeatedly:

}
