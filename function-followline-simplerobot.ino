const int IN1 = 3;   
const int IN2 = 5;    
const int IN3 = 6;       
const int IN4 = 9; 


const int Lsensor = 10; // Left Sensor
const int Csensor = 11; // Center  Sensor
const int Rsensor  = 12; // Right Sensor

const int ForwardSpeed =250;
const int TurnSpeed =250;
const int BackSpeed =100;

void setup() {

  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);
  
  pinMode(Lsensor , INPUT);
  pinMode(Csensor , INPUT);
  pinMode(Rsensor , INPUT);  

  Serial.begin(9600);
}
void loop()
{
  int LS = digitalRead(Lsensor);
  int CS = digitalRead(Csensor);
  int RS = digitalRead(Rsensor);

  /* if(LS == 0 || CS == 0 || RS == 0)
  {
    Serial.println("White ");
    Serial.println("Left   Sensor : " + LS) ;
    Serial.println("Center Sensor : " + C1_S) ;
    Serial.println("Left   Sensor : " + RS) ;
  }
  
  if(LS == 1 || CS == 1 || RS == 1)
  {
    Serial.println("Black ");
    Serial.println("Left   Sensor : " + LS) ;
    Serial.println("Center Sensor : " + CS) ;
    Serial.println("Left   Sensor : " + RS) ;
  } */

  /********************  Forward Cases  **********************************/
  if(LS == 0 && CS == 1 && RS == 0)
  {
    //Forward();
    analogWrite(IN1 , ForwardSpeed);
    analogWrite(IN2 , 0);
    analogWrite(IN3 , ForwardSpeed);
    analogWrite(IN4 , 0);
  }
  
    /***********************  Left Cases  ***********************/
  else if(LS == 1 && CS == 0 && RS == 0)
  {
    //Left() ;
    analogWrite(IN1 , TurnSpeed);
    analogWrite(IN2 , 0);
    analogWrite(IN3 , 0);
    analogWrite(IN4 , 0);
  }

   else if(LS == 1 && CS == 1 && RS == 0)
  {
    //Left() ;
    analogWrite(IN1 , TurnSpeed);
    analogWrite(IN2 , 0);
    analogWrite(IN3 , 0);
    analogWrite(IN4 , 0);
  }

  /*******************  Right Cases  *******************************/
  else if(LS == 0 && CS == 0 && RS == 1)
  {
    //Right();
    analogWrite(IN1 , 0);
    analogWrite(IN2 , BackSpeed);
    analogWrite(IN3 , TurnSpeed);
    analogWrite(IN4 , 0);
  }

   else if(LS == 0 && CS == 1 && RS == 1)
  {
    //Right();
    analogWrite(IN1 , 0);
    analogWrite(IN2 , BackSpeed);
    analogWrite(IN3 , TurnSpeed);
    analogWrite(IN4 , 0);
  }
  }
   /*******************  if we used functions   *******************************/
void right() 
{
    analogWrite(IN1 , 0);
    analogWrite(IN2 , BackSpeed);
    analogWrite(IN3 , TurnSpeed);
    analogWrite(IN4 , 0);
}
void left() 
{
    analogWrite(IN1 , TurnSpeed);
    analogWrite(IN2 , 0);
    analogWrite(IN3 , 0);
    analogWrite(IN4 , backspeed);
}
void forward()
{
    analogWrite(IN1 , ForwardSpeed);
    analogWrite(IN2 , 0);
    analogWrite(IN3 , ForwardSpeed);
    analogWrite(IN4 , 0);
}
