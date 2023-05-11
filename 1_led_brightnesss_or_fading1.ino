// C++ code
//
int brightness =0;
void setup()
{
  pinMode(12, OUTPUT);
}

void loop()
{
  for (brightness=0;brightness<=255;brightness+=50)
  {
  digitalWrite(12, brightness);
  delay(100); // Wait for 1000 millisecond(s)
 } 
  for (brightness=255;brightness>=0;brightness-=50)
  {
  digitalWrite(12, brightness);
  delay(100); // Wait for 1000 millisecond(s)
 }
}