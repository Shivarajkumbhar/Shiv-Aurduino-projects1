// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  
  pinMode(9, OUTPUT); //EN A PIN FOR MOTER 1
  pinMode(10, OUTPUT); //EN B FOR PIN MOTER 2
}

void loop()
{
  analogWrite(9,127);
  analogWrite(10,127);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  delay(3000);                //FORWARD MOTER
  
  analogWrite(9,127);
  analogWrite(10,127);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  delay(3000);                //REVERSE MOTER
  
  analogWrite(9,127);
  analogWrite(10,127);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  delay(3000);               //STOP THE MOTER
  
  analogWrite(9,190);
  analogWrite(10,255);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  delay(3000);               //LEFT TURN
  
  analogWrite(9,190);
  analogWrite(10,255);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  delay(3000);               //RIGHT TURN
  
  analogWrite(9,0);
  analogWrite(10,0);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  delay(3000);              //STOP
}