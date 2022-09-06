#include <teensy.h>
int ds = 500;

#if defined(CORE_TEENSY)
#define LED_PIN 13
#endif


void setup()
{

  // allow controlling LED
  pinMode(LED_PIN, OUTPUT);
  // turn the LED on while running
  digitalWrite(LED_PIN, HIGH);

  //pauses for 1000 milliseconds (allows Teensy to boot up), adjust as needed
  delay(1000);

  Keyboard.set_key1(KEY_RIGHT_GUI); //windows key
  Keyboard.send_now();

  //Try to implement a Rickroll on your own

  /* Functions:
   * Keyboard.set_modifier(MODIFIERKEY);
   * Keyboard.set_key1(KEY);
   * Keyboard.send_now();
   * Keyboard.print("text");*/

 
}

void loop()
{
  // blink quickly when complete
  digitalWrite(LED_PIN, HIGH);
  delay(ds/2);
  digitalWrite(LED_PIN, LOW);
  delay(ds/2);
}
