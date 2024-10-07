int CH1=13;//前左
int CH2=8;//前右
int CH3=7;//后左
int CH4=4;//后右
void setup() {
  pinMode(CH1,OUTPUT);
  pinMode(CH2,OUTPUT);
  pinMode(CH3,OUTPUT);
  pinMode(CH4,OUTPUT);
}

void loop() {
  digitalWrite(CH2,HIGH);
  digitalWrite(CH4,HIGH);
  digitalWrite(CH3,LOW);
  delay(1000);
  digitalWrite(CH3,HIGH);
  digitalWrite(CH2,LOW);
  digitalWrite(CH4,LOW);
  delay(1000);
  /*digitalWrite(CH1,HIGH);
  digitalWrite(CH2,HIGH);
  digitalWrite(CH3,HIGH);
  digitalWrite(CH4,HIGH);
  delay(1000);
  digitalWrite(CH1,HIGH);
  digitalWrite(CH2,HIGH);
  digitalWrite(CH3,HIGH);
  digitalWrite(CH4,HIGH);
  delay(1000);*/
  /*for (int i=0;i<10;i++) {
    digitalWrite(CH1,HIGH);
    digitalWrite(CH2,HIGH);
    digitalWrite(CH3,LOW);
    digitalWrite(CH4,LOW);
    delay(1000);
    digitalWrite(CH1,LOW);
    digitalWrite(CH2,LOW);
    digitalWrite(CH3,HIGH);
    digitalWrite(CH4,HIGH);
    delay(1000);
  }
  for (int i=0;i<10;i++) {
    digitalWrite(CH1,HIGH);
    digitalWrite(CH2,LOW);
    digitalWrite(CH3,HIGH);
    digitalWrite(CH4,LOW);
    delay(1000);
    digitalWrite(CH1,LOW);
    digitalWrite(CH2,HIGH);
    digitalWrite(CH3,LOW);
    digitalWrite(CH4,HIGH);
    delay(1000);
  }*/
}
