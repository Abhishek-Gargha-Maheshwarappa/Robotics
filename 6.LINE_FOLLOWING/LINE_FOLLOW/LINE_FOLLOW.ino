
int left1 = 8;          //Left Motor pin initialization//
int left2 = 9;
int right1 = 10;        //Right Motor pin initialization//
int right2 = 11;

int leftir = 3;         //left ir sensor pin initialisation//
int middleir1 = 4;       //middle ir sensor pin initialisation//
int middleir2 = 5;       //middle ir sensor pin initialisation//
int rightir = 6;       //right ir sensor pin initialisation//

void setup() 
{     
 
   pinMode(left1, OUTPUT);        //Left Motor pin declaration//
   pinMode(left2, OUTPUT);
   pinMode(right1, OUTPUT);       //Right Motor pin declaration//
   pinMode(right2, OUTPUT);
   
   pinMode(leftir, INPUT);        //left ir sensor pin declaration//
   pinMode(middleir1,INPUT);       //middle ir sensor pin declaration//
   pinMode(middleir2,INPUT);       //middle ir sensor pin declaration// 
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
  digitalWrite(left2,LOW);          // RIGHT turn function //
  digitalWrite(right1,LOW);               
  digitalWrite(right2,HIGH);
}

void left()
{              
  digitalWrite(left1,LOW);   
  digitalWrite(left2,HIGH);          // LEFT turn function //
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
  
    int IR_1 = digitalRead(leftir);
    int IR_2 = digitalRead(middleir1);
    int IR_3 = digitalRead(middleir2);
    int IR_4 = digitalRead(rightir);
    
           if ( IR_1 == HIGH && IR_2 == HIGH && IR_3 == HIGH && IR_3 == HIGH  )    //** when middle sensor senses it will take right turn **//*/
            {
              stopall();
              delay (1);
            }
            
           else if (IR_1 == LOW && IR_2 == LOW && IR_3 == LOW && IR_3 == LOW ) //** when left sensor senses it will take right turn **//
            {
              forward();
              delay(3);
            }
            
           else if ( IR_1 == HIGH || IR_4 == LOW )//** when right sensor senses it will take left turn **//
            {
              right();
              delay(1);
            }
            
            else if ( IR_1 == LOW || IR_4 == HIGH)//** when right sensor senses it will take left turn **//
            {
              left();
              delay(1);
            }            
           
}                                        
