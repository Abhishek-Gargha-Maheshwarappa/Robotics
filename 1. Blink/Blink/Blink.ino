int led = 13; 


void Blink(int duration){

 digitalWrite(led, HIGH);           // turn the LED on (HIGH is the voltage level)
 delay(duration);                       // wait for a second (milliseconds)
 digitalWrite(led, LOW);            // turn the LED off by making the voltage LOW
 delay(duration);                       // wait for a second (milliseconds)
  
}

void setup() {  
  
 pinMode(led, OUTPUT);       // led pin initialization as an output 
  
}

void loop() {
  Blink(2000);
}
