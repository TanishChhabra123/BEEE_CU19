void setup()
{
  for(int i=10;i<=13;i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  for(int i=13;i>=10;i--)
  {
    if(i!=13)
    {
      digitalWrite(i,HIGH);
      digitalWrite(i+1,HIGH);
      delay(250);
    }
    else
    {
      digitalWrite(i,HIGH);
      digitalWrite(i-3,HIGH);
      delay(250);
    }
    for(int i=13;i>=10;i--)
    {
      digitalWrite(i,LOW);
    }
    delay(150);
  }
}
