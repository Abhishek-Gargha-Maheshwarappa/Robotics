 int left1 = 8;                      //Left Motor pin initialization//
 int left2 = 9;                  
 int right1 = 10;                     //Right Motor pin initialization//
 int right2 = 11;                 


 void setup() 
 {
   pinMode(left1, OUTPUT);          //Left Motor pin declaration// 
   pinMode(left2, OUTPUT);
   pinMode(right1, OUTPUT);         //Right Motor pin declaration// 
   pinMode(right2, OUTPUT);   
}

void forward()
{
                
  digitalWrite(left1,HIGH);   
  digitalWrite(left2,LOW);          // forward move function //
  digitalWrite(right1,HIGH);               
  digitalWrite(right2,LOW);
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
forward();
delay(3000);  
}
