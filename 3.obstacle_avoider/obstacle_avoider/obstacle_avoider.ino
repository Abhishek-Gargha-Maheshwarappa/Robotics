const int trigPin1 = 5;
const int echoPin1 = 4;

int left1 = 8;                      //Left Motor pin initialization//
 int left2 = 10;                  
 int right1 = 11;                     //Right Motor pin initialization//
 int right2 = 12;
long duration1, inches1, cm1;

void setup() {
   pinMode(left1, OUTPUT);          //Left Motor pin declaration// 
   pinMode(left2, OUTPUT);
   pinMode(right1, OUTPUT);         //Right Motor pin declaration// 
   pinMode(right2, OUTPUT); 
  // initialize serial communication:
  //pinMode(trigPin, OUTPUT);
  //pinMode(echoPin, INPUT);
  Serial.begin(9600);
}
void forward()
{
                
  digitalWrite(left1,HIGH);   
  digitalWrite(left2,LOW);          // forward move function //
  digitalWrite(right1,HIGH);               
  digitalWrite(right2,LOW);
  Serial.println("forward");
  
}

void backward()
{
                
  digitalWrite(left1,LOW);   
  digitalWrite(left2,HIGH);          // backward move function //
  digitalWrite(right1,LOW);               
  digitalWrite(right2,HIGH);
}

void right()
{
              
  digitalWrite(left1,HIGH);   
  digitalWrite(left2,LOW);          //  right turn function //
  digitalWrite(right1,LOW);               
  digitalWrite(right2,HIGH);
}

void left()
{
                
  digitalWrite(left1,LOW);   
  digitalWrite(left2,HIGH);          // left turn function //
  digitalWrite(right1,HIGH);               
  digitalWrite(right2,LOW);
}

void stopall()
{
               
  digitalWrite(left1,LOW);   
  digitalWrite(left2,LOW);          //stop//
  digitalWrite(right1,LOW);               
  digitalWrite(right2,LOW);
}


void loop()
{
 // forward();
 // delay(500);
  Ultra1();
  delay(100); 
  
  if(inches1 < 10)
  {
    Serial.println("left obstacle");
    stopall();
    delay(500);
    backward();
    delay(500);
    right();
    delay(100);
  }
 
 else{
  Serial.println("moving forward");
  forward();
  delay(1);
 }
}

void Ultra1()
{
  pinMode(trigPin1, OUTPUT);
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);

  // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(echoPin1, INPUT);
  duration1 = pulseIn(echoPin1, HIGH);

  inches1 = microsecondsToInches1(duration1);
  cm1 = microsecondsToCentimeters1(duration1);
  Serial.print(inches1);
  Serial.print("in1, ");
  Serial.print(cm1);
  Serial.print("cm1");
  Serial.println();
  delay(100);

  // convert the time into a distance
  }


long microsecondsToInches1(long microseconds1)
{
  // According to Parallax's datasheet for the PING))), there are
  // 73.746 microseconds per inch (i.e. sound travels at 1130 feet per
  // second).  This gives the distance travelled by the ping, outbound
  // and return, so we divide by 2 to get the distance of the obstacle.
  return microseconds1 / 74 / 2;
}

long microsecondsToCentimeters1(long microseconds1)
{
  // The speed of sound is 340 m/s or 29 microseconds per centimeter.
  // The ping travels out and back, so to find the distance of the
  // object we take half of the distance travelled.
  return microseconds1 / 29 / 2;
}
