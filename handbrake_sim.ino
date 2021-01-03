#include <Joystick.h>

Joystick_ Joystick;

void setup() {
  // put your setup code here, to run once:
  //pinMode(2, INPUT_PULLUP);
  Joystick.begin();
  Serial.begin(9600);
  Serial.println(" ");
  for(int i=0; i<=1023; i++)
  {
    Joystick.setThrottle(i);
    delay(10);
  }
  for (int i=1023; i>=0; i--)
  {
    Joystick.setThrottle(i);
    delay(10);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(2) == HIGH)
  {
    Joystick.setThrottle(0);
    Serial.print(digitalRead(2));
    Serial.println("HIGH ");
  }
  else if (digitalRead(2) == LOW)
  {
    Joystick.setThrottle(1023);
    Serial.print(digitalRead(2));
    Serial.println("LOW");
  }
  delay(50);
}
