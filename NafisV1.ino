const int leftForward = 4;
const int leftBackward = 5;
const int rightForward = 6;
const int rightBackward = 7; 

int camLeft = 9;
int camRight = 10;
int camStraight = 11;
 
int toArm = 12;  // send 5v to arm


void setup() {

  pinMode(rightForward, OUTPUT);
  pinMode(leftForward, OUTPUT);
  pinMode(leftBackward, OUTPUT);
  pinMode(rightBackward, OUTPUT);
  pinMode(camLeft , INPUT);
  pinMode(camRight , INPUT);
  pinMode(camStraight , INPUT);

  pinMode(toArm, OUTPUT);

}

void loop() {

  if(digitalRead(camLeft) == HIGH){
    moveLeft();
    delay(1000);
    
  }

  else if(digitalRead(camRight) == HIGH){
    moveRight();
    delay(1000);
  }

  else if(digitalRead(camStraight) == HIGH){
    moveStraight();
    delay(1000);
    
  }

  else {  // here the sonar code will be applied. 
    moveStop();
    delay(1000);

    // if distance found then send signal to Arm 
    
  }
}


 void moveLeft(){
    digitalWrite(rightForward, HIGH);
    digitalWrite(rightBackward, LOW);
    digitalWrite(leftForward, LOW);
    digitalWrite(leftBackward, HIGH);
 }

 void moveRight(){
    digitalWrite(rightForward, LOW);
    digitalWrite(rightBackward, HIGH);
    digitalWrite(leftForward, HIGH);
    digitalWrite(leftBackward, LOW);
  
 }

 void moveStraight(){
    digitalWrite(rightForward, HIGH);
    digitalWrite(rightBackward, LOW);
    digitalWrite(leftForward, HIGH);
    digitalWrite(leftBackward, LOW);
  
 }

 void moveStop(){
    digitalWrite(rightForward, LOW);
    digitalWrite(rightBackward, LOW);
    digitalWrite(leftForward, LOW);
    digitalWrite(leftBackward, LOW);
 }
  


