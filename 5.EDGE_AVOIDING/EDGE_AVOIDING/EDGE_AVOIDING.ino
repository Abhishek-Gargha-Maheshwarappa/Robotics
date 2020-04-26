
int left1 = 8;          //Left Motor pin initialization//
int left2 = 9;
int right1 = 10;        //Right Motor pin initialization//
int right2 = 11;

int leftir = 2;         //left ir sensor pin initialisation//
int rightir = 7;       //right ir sensor pin initialisation//

void setup() 
{     
 
   pinMode(left1, OUTPUT);        //Left Motor pin declaration//
   pinMode(left2, OUTPUT);
   pinMode(right1, OUTPUT);       //Right Motor pin declaration//
   pinMode(right2, OUTPUT);
   
   pinMode(leftir, INPUT);        //left ir sensor pin declaration//
   pinMode(rightir, INPUT);       //Right ir sensor pin declaration//
 
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
  digitalWrite(left2,LOW);         //stop//
  digitalWrite(right1,LOW);               
  digitalWrite(right2,LOW);
}

void loop() 
{                                 
  
    int IR_L = digitalRead(leftir);
    int IR_R = digitalRead(rightir);
 
            if (IR_L == LOW ) //** when left sensor senses it will take right turn **//
            {
              stopall();
              delay(500);
              
              backward();
              delay(1000);
              
              right();
              delay(500);
            }
            else if (IR_R == LOW ) //** when right sensor senses it will take left turn **//
            {
              stopall();
              delay(500);

              backward();
              delay(1000);
              
              left();
              delay (1500);
            }
            else 
            { 
              forward();
              delay(10); 
             }
}                                        
