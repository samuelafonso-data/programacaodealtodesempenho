#define BOT1 6
#define LED2 A1
void setup()
{
  pinMode(BOT1, INPUT_PULLUP);
  Serial.begin(9600);
  
  pinMode(LED2, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  Serial.write(!digitalRead(BOT1));
  delay(500);
  if(Serial.available())
    {
     	char dados=Serial.read();
      	digitalWrite(LED2,dados);
    }
}
