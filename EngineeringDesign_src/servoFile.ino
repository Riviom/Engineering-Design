#include <Servo.h>

Servo servo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setupServo() {
  servo.attach(9);  
}

void pullServo(bool pooling) {
   if(pooling){
    servo.write(170);
  }
  //If not pooling the servo motor will turn to 10 degrees.
  else{
    servo.write(10);
  }
}
