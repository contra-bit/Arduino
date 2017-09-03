/*
  Fade

  This example shows how to fade an LED on pin 9 using the analogWrite()
  function.

  The analogWrite() function uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. On most Arduino, the PWM pins
  are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Fade
*/

int led_0 = 7;
int led_1 = 8;
int led_2 = 9;
int led_3 = 10;
int led_4 = 11;

// the PWM pin the LED is attached to
int brightness_0 = 0;    // how bright the LED is
int brightness_1 = 50;
int brightness_2 = 100;
int brightness_3 = 150;
int brightness_4 = 200;

int fadeAmount_0 = 5;    // how many points to fade the LED by
int fadeAmount_1 = 5;
int fadeAmount_2 = 5;
int fadeAmount_3 = 5;
int fadeAmount_4 = 5;

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(led_0, OUTPUT);
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of pin 9:
  analogWrite(led_0, brightness_0);
  analogWrite(led_1, brightness_1);
  analogWrite(led_2, brightness_2);
  analogWrite(led_3, brightness_3);
  analogWrite(led_4, brightness_4);
    
  // change the brightness for next time through the loop:
  brightness_0 = brightness_0 + fadeAmount_0;
  brightness_1 = brightness_1 + fadeAmount_1;
  brightness_2 = brightness_2 + fadeAmount_2;
  brightness_3 = brightness_3 + fadeAmount_3;
  brightness_4 = brightness_4 + fadeAmount_4;
   

  // reverse the direction of the fading at the ends of the fade:
  if (brightness_0 <= 0 || brightness_0 >= 255) {
    fadeAmount_0 = -fadeAmount_0;
  } else if (brightness_1 <= 0 || brightness_1 >= 255) {
    fadeAmount_1 = -fadeAmount_1;
  } else if (brightness_2 <= 0 || brightness_2 >= 255) {
    fadeAmount_2 = -fadeAmount_2;
  } else if (brightness_3 <= 0 || brightness_3 >= 255) {
    fadeAmount_3 = -fadeAmount_3;
  } else if (brightness_4 <= 0 || brightness_4 >= 255) {
    fadeAmount_4 = -fadeAmount_4;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(15);
}
