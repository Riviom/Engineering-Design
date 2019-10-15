const int threshold = 250;

void setupECG() {
  pinMode(10, INPUT); 
  pinMode(11, INPUT);

}

bool loopECG() {
  int ecgValue;
  if((digitalRead(10) == 1)||(digitalRead(11) == 1)){
    ecgValue = 0;
    // Serial.println("none");
  }
  else{
      ecgValue = analogRead(A0);
      Serial.println(ecgValue);
  }

//TODO: addHysteresis and Smoothing. For smoothing if ecgValue == 0 don't add it.

  if(ecgValue > threshold){
    return true;
  }else{
     return false;
  }

}
