// Programmer: Matthew Clifford
// Date: 3.14.23
// Program: Fade

//resource: https://arduinointro.com/projects/2-leds-alternate-fade-effect-using-the-for-loop

int led_ten = 10;      // Pin 10 utilizing PWM
int led_eleven = 11;   // Pin 11 utilizing PWM
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 10 to be an output:
  pinMode(led_ten, OUTPUT);
  pinMode(led_eleven, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue = fadeValue+5) {
    // sets the value (range from 0 to 255):
    analogWrite(led_ten, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue = fadeValue-5) {
    // sets the value (range from 0 to 255):
    analogWrite(led_ten, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue = fadeValue+5) {
    // sets the value (range from 0 to 255):
    analogWrite(led_eleven, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue = fadeValue-5) {
    // sets the value (range from 0 to 255):
    analogWrite(led_eleven, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  
}
