
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

void loop() 
{                                    
  digitalWrite(left1, HIGH);   
  digitalWrite(left2, LOW);         //Left Motor moving//
  
  digitalWrite(right1, HIGH);   
  digitalWrite(right2, LOW);         //right Motor moving//
  
  delay(3000);             
}
