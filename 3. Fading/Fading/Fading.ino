

int ledPin1 = 11;    // LED connected to digital PWM pin 9
int ledPin2 = 13; 
void setup() {
 pinMode(ledPin1,OUTPUT);
 pinMode(ledPin2,OUTPUT);
}

void loop() {
    // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    analogWrite(ledPin1, fadeValue);
    delay(30);
  }

    // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    analogWrite(ledPin1, fadeValue);
    delay(30);
  }
  
   // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    analogWrite(ledPin2, fadeValue);
    delay(30);
  }

    // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    analogWrite(ledPin2, fadeValue);
    delay(30);
  }
}


