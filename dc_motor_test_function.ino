                                                                          
#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

void setup() {

  motor1.setSpeed(255);
  motor2.setSpeed(255);
  motor3.setSpeed(255);
  motor4.setSpeed(255);
  
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
  
}

   void forward(int t){
   motor1.run(FORWARD);
   motor2.run(FORWARD);
   motor3.run(FORWARD);
   motor4.run(FORWARD);

   delay(t);
   motor1.run(RELEASE);
   motor2.run(RELEASE);
   motor3.run(RELEASE);
   motor4.run(RELEASE);
   delay(2000);
  
   }

   void right(int t){
   motor1.run(FORWARD);
   motor2.run(FORWARD);
   motor3.run(BACKWARD);
   motor4.run(BACKWARD);

   delay(t);
   motor1.run(RELEASE);
   motor2.run(RELEASE);
   motor3.run(RELEASE);
   motor4.run(RELEASE);
   delay(2000);
   }

   void left(int t){
   motor1.run(BACKWARD);
   motor2.run(BACKWARD);
   motor3.run(FORWARD);
   motor4.run(FORWARD);

   delay(t);
   motor1.run(RELEASE);
   motor2.run(RELEASE);
   motor3.run(RELEASE);
   motor4.run(RELEASE);
   delay(2000);
   }

   void backward(int t){
   motor1.run(BACKWARD);
   motor2.run(BACKWARD);
   motor3.run(BACKWARD);
   motor4.run(BACKWARD);

   delay(t);
   motor1.run(RELEASE);
   motor2.run(RELEASE);
   motor3.run(RELEASE);
   motor4.run(RELEASE);
   delay(2000);
   }
   

void loop() {
  
    right(1000);
    //forward(1000);
   // backward(1000);
    left(1000);
    
}
