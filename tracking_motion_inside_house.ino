void setup()
{
  NSBegin(8, 2);
}

void loop()
{
  int a = analogRead(5);

  if (a<= 240)
  {
    NSClear();
    NSSetColor(0, 255,255,255);
    NSShow();
  }
  else if (a>240 && a<=460)
  {
    NSClear();
    NSSetColor(1, 0, 0, 255);
    NSShow();
  }
  else
  {
    NSClear();
    NSSetColor(2, 255, 0, 0);
    NSShow();
  }

  Serial.println(a);
  delay(100); 
}
