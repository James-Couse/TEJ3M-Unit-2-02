// 
// Created by: James Couse
// Created on: Oct 22 2023
//

int BlinkTime = 2000;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(BlinkTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
