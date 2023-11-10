// Arduino Line Follower Robot Code
#define R_S A1//ir sensor Right

#define L_S A0 //ir sensor Left


// L298 pins

const int IN1 = 3;
const int IN2 = 4;
const int IN3 = 6;
const int IN4 = 7;

void setup(){ 

pinMode(R_S, INPUT); 

pinMode(L_S, INPUT); 

delay(1000);

pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);

}

void loop(){  
if((digitalRead(R_S) == 0)&&(digitalRead(L_S) == 0)){move_forward();}   //if Right Sensor and Left Sensor are at White color then it will call forword function

if((digitalRead(R_S) == 1)&&(digitalRead(L_S) == 0)){turn_right();} //if Right Sensor is Black and Left Sensor is White then it will call turn Right function  

if((digitalRead(R_S) == 0)&&(digitalRead(L_S) == 1)){turn_left();}  //if Right Sensor is White and Left Sensor is Black then it will call turn Left function

if((digitalRead(R_S) == 1)&&(digitalRead(L_S) == 1)){move_stop();} //if Right Sensor and Left Sensor are at Black color then it will call Stop function

}
// FUnctions
    void move_backward() {
    digitalWrite(IN1 , HIGH);
    digitalWrite(IN2 , LOW);
    digitalWrite(IN3 , HIGH);
    digitalWrite(IN4 , LOW);
  }
  void move_forward() {
    digitalWrite(IN1 , LOW);
    digitalWrite(IN2 , HIGH);
    digitalWrite(IN3 , LOW);
    digitalWrite(IN4 , HIGH);
  }

  void move_stop() {
    digitalWrite(IN1 , HIGH);
    digitalWrite(IN2 , HIGH);
    digitalWrite(IN3 , HIGH);
    digitalWrite(IN4 , HIGH);
  }

  void turn_left() {
    digitalWrite(IN1 , LOW);
    digitalWrite(IN2 , HIGH);
    digitalWrite(IN3 , HIGH);
    digitalWrite(IN4 , LOW);
    
  }

  void turn_right() {
    digitalWrite(IN1 , HIGH);
    digitalWrite(IN2 , LOW);
    digitalWrite(IN3 , LOW);
    digitalWrite(IN4 , HIGH);
   
  }
