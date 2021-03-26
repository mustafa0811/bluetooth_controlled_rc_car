int inByte;
void setup()
{
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}
void loop()
{
  if (Serial.available() > 0)
  {
  inByte = Serial.read();
  switch (inByte)
  {
    case '1':
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      Serial.println("LED");
      break;
    case '2':
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(3, LOW);
      for(int i=0; i<3; i++){
        digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      delay(250); 
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      delay(250);
        }
      digitalWrite(6, LOW);
      digitalWrite(9, LOW);//tekrar ileri
      Serial.println("ILERI SOL");
      break;
    case '3':
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      Serial.println("ILERI");
      break;
    case '4':
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      Serial.println("GERI");
      break;
    case '5':
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(4, LOW);
      for(int i=0; i<3; i++){
        digitalWrite(3, HIGH);
      digitalWrite(6, HIGH);
      delay(250); 
      digitalWrite(3, LOW);
      digitalWrite(6, LOW);
      delay(250);
        }
      digitalWrite(5, LOW);
      digitalWrite(10, LOW);//tekrar ileri
      Serial.println("ILERI SAG");
      break;
    case '6':
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(3, LOW);
      for(int i=0; i<3; i++){
        digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      delay(250); 
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      delay(250);
        }
      digitalWrite(6, LOW);
      digitalWrite(9, LOW);//tekrar geri
      Serial.println("GERI-SOL");
      break;
    case '7':
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(4, LOW);
      for(int i=0; i<3; i++){
        digitalWrite(3, HIGH);
      digitalWrite(6, HIGH);
      delay(250); 
      digitalWrite(3, LOW);
      digitalWrite(6, LOW);
      delay(250);
        }
      digitalWrite(5, LOW);
      digitalWrite(10, LOW);//tekrar geri
      Serial.println("GERI-SAG");
      break;
    case '8':
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      Serial.println("DUR");
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);//geri sağ
      delay(1000);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);//geri sol
      delay(1000);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);//dur
      Serial.println("PARK");
      break;
    case '0':
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      Serial.println("DUR");
      break;
  }
}}
