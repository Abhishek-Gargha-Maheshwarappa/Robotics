/*
The analogWrite() function uses PWM, so if
 you want to change the pin you're using, be
 sure to use another PWM capable pin. On most
 Arduino, the PWM pins are identified with 
 a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.
*/

int led = 11;           // the PWM pin the LED is attached to
int brightness = 0;    // how bright the LED is
int fadeAmount = 6;    // how many points to fade the LED by

void setup() {
                           
  pinMode(led, OUTPUT);    // declare pin 9 to be an output:
  
}

void loop() {
  
  analogWrite(led, brightness);                 // set the brightness of pin 9:

  brightness = brightness + fadeAmount;         // change the brightness for next time through the loop:

                                                // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 400) {
    fadeAmount = -fadeAmount;
  }  
  delay(30);                                    // wait for 30 milliseconds to see the dimming effect
}
