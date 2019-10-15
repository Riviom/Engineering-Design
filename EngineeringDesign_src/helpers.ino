


void setupArduino(){
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

//TODO: state machine with motor 
void setMotorLight(bool value){
  digitalWrite(LED_BUILTIN, value);  
}

bool addHysterisis(bool currentState, int currentValue, int minimumTreshold, int maximumTreshold){
  bool newState;
  if(currentValue >8 && currentState == unlocked){
    newState = true;  //locked
  }
  if(currentValue <4 && currentState == locked){
    newState = false; //unlocked;
  }
  return newState;
}
  
