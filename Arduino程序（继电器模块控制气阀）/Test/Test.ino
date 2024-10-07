int CH1 = 13;
int CH2 = 12;
int CH3 = 8;
int CH4 = 7;
int CH5 = 4;
int CH6 = 2;


void setup() {
  // put your setup code here, to run once:
  pinMode(CH1,OUTPUT);
  pinMode(CH2,OUTPUT);
  pinMode(CH3,OUTPUT);
  pinMode(CH4,OUTPUT);
  pinMode(CH5,OUTPUT);
  pinMode(CH6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(CH1,HIGH);
  digitalWrite(CH2,HIGH);
  digitalWrite(CH3,HIGH);
  digitalWrite(CH4,HIGH);
  digitalWrite(CH5,HIGH);
  digitalWrite(CH6,HIGH);
  delay(1000);
  digitalWrite(CH1,LOW);
  digitalWrite(CH2,LOW);
  digitalWrite(CH3,LOW);
  digitalWrite(CH4,LOW);
  digitalWrite(CH5,LOW);
  digitalWrite(CH6,LOW);
  delay(1000);
}
