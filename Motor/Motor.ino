// Wanchalerm Junsong
int dir = 2;
int pul = 3;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(dir,OUTPUT);
  pinMode(pul,OUTPUT);
  digitalWrite(dir,LOW);
}

void loop() {
  for(int i=0;i<400;i++)
  {
   digitalWrite(pul,HIGH);
  delay(10);
  digitalWrite(pul,LOW);
  delay(10);
  }
  delay(2000);
}
