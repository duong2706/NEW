#include <Arduino.h>

#define LED PC13
void setup()
{
   pinMode(LED, OUTPUT);
}
void loop()
{
   digitalWrite(LED,HIGH);
   delay(500);
   digitalWrite(LED,LOW);
   delay(50000);
}