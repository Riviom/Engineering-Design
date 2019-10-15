

void setup(){
  //TODO: Change frequency and sensitivity of sensors
  setupArduino();
  //setupMPR();
  setupADXL();
  setupECG();
  setupServo();

 }
 bool lockedByAccelerometer = false;
 void loop(){
  
  //Serial.println(25*loopADXL());
  int accelerationlock = loopADXL(); //TODO: after locking, stop readings for 1/2s

  if(accelerationlock>0){
    lockedByAccelerometer = accelerationlock;
  }
 
  bool engagedByECG = loopECG();
 // Serial.print(engagedByECG);
  
  if(engagedByECG){
    pullServo(true);
  }else if(!lockedByAccelerometer){
    pullServo(false);
  }

  setMotorLight(lockedByAccelerometer);
 }
