int ButtonState = 0;

void setup()
{
  NSBegin(8, 2);
  pinMode(3, INPUT);
}

void loop()
{
  int b=analogRead(0);
  int a=analogRead(5);
  ButtonState=digitalRead(3);

  if (b<=90)
  {
    if (ButtonState == HIGH)
    {
      for (int i = 0; i < 100; i++)
      {
      int f = i * i;
      tone(10, f, 100);
      delay(10);
      }
    }

    if (a>400)
    {
    NSClear();
    NSSetColor(0, 255,255,255);
    NSSetColor(4, 255,255,255);
    NSShow();
    }
    else
    {
    NSClear();
    NSSetColor(0, 0,0,0);
    NSShow();
    } 
  }
}
