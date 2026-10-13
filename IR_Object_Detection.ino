const int IR = PF_4;
const int LED = RED_LED;

void setup()
{
  pinMode(IR, INPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{
  if (digitalRead(IR) == LOW)
  {
    digitalWrite(LED, HIGH);  // Object detected
  }
  else
  {
    digitalWrite(LED, LOW);   // No object
  }

  delay(50);
}
