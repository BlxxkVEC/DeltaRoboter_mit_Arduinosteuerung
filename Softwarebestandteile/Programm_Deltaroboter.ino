
  const int stepPinX = 2; //X.STEP
  const int stepPinY = 3; //Y.Step
  const int stepPinZ = 4; //Z.Step
  const int stepPinA = 12; //A.STEP
  const int dirPinX = 5; // X.DIR
  const int dirPinY = 6; // Y.DIR
  const int dirPinZ = 7; // Z.DIR
  const int dirPinA = 13; //A.DIR
  #define limitX  9
  #define limitY  10
  #define limitZ  11
  #define Magnet 44  
  const int speed = 400;

 void setup() {

 Serial.begin(115200);
 pinMode(stepPinX,OUTPUT); 
 pinMode(dirPinX,OUTPUT);
 pinMode(stepPinY,OUTPUT); 
 pinMode(dirPinY,OUTPUT);
 pinMode(stepPinZ,OUTPUT); 
 pinMode(dirPinZ,OUTPUT);
 pinMode(stepPinA,OUTPUT); 
 pinMode(dirPinA,OUTPUT);
 pinMode(limitX,INPUT_PULLUP);
 pinMode(limitY,INPUT_PULLUP);
 pinMode(limitZ,INPUT_PULLUP);
 pinMode(Magnet,OUTPUT);
 digitalWrite(Magnet,LOW);
 


  }
 
void home(){
//Home
 digitalWrite(dirPinY,LOW);
 while(digitalRead(limitY) == LOW)
  {
 
 digitalWrite(stepPinY,HIGH); 
 delayMicroseconds(speed); 
 digitalWrite(stepPinY,LOW); 
 delayMicroseconds(speed); 
 }
 digitalWrite(dirPinX,LOW);
 while(digitalRead(limitX) == LOW)
  {
 
 digitalWrite(stepPinX,HIGH); 
 delayMicroseconds(speed); 
 digitalWrite(stepPinX,LOW); 
 delayMicroseconds(speed); 
 }
 digitalWrite(dirPinZ,LOW);
 while(digitalRead(limitZ) == LOW)
  {
 
 digitalWrite(stepPinZ,HIGH); 
 delayMicroseconds(speed); 
 digitalWrite(stepPinZ,LOW); 
 delayMicroseconds(speed); 

 }

 delay(1000);
 if (digitalRead(Magnet) == HIGH){
 magnet_turn();
 }
 return;
}






void magnet_turn(){

 digitalWrite(dirPinA,LOW); 
 for(int x = 0; x < 200; x++) {
 digitalWrite(stepPinA,HIGH);
 delayMicroseconds(2000);
 digitalWrite(stepPinA,LOW);
 delayMicroseconds(2000);
 }
 delay(1000);
  digitalWrite(dirPinA,HIGH); //Changes the rotations direction
 // Makes 400 pulses for making two full cycle rotation
 for(int x = 0; x < 200; x++) {
 digitalWrite(stepPinA,HIGH);
 delayMicroseconds(2000);
 digitalWrite(stepPinA,LOW);
 delayMicroseconds(2000);
 }
 return;
}








void loop (){

home();

//Point 1 take
digitalWrite(dirPinX,HIGH);
digitalWrite(dirPinY,HIGH);
 for(int x = 0; x < 4000; x++) {
 digitalWrite(stepPinX,HIGH);
 digitalWrite(stepPinY,HIGH);
 delayMicroseconds(speed);
 digitalWrite(stepPinX,LOW);
 digitalWrite(stepPinY,LOW);
 delayMicroseconds(speed);
 
 }
 delay(1000);

digitalWrite(dirPinZ,HIGH);
 for(int x = 0; x < 200; x++) {
 digitalWrite(stepPinZ,HIGH);
 delayMicroseconds(speed);
 digitalWrite(stepPinZ,LOW);
 delayMicroseconds(speed);
 }
 digitalWrite(Magnet,HIGH);
delay(1000);
digitalWrite(dirPinX,LOW);
digitalWrite(dirPinY,LOW);
digitalWrite(dirPinZ,LOW);
 for(int x = 0; x < 150; x++) {
 digitalWrite(stepPinX,HIGH);
 digitalWrite(stepPinY,HIGH);
 digitalWrite(stepPinZ,HIGH);
 delayMicroseconds(speed);
 digitalWrite(stepPinX,LOW);
 digitalWrite(stepPinY,LOW);
 digitalWrite(stepPinZ,LOW);
 delayMicroseconds(speed);
 }

home();
 //Point 2 drop
digitalWrite(dirPinZ,HIGH);
digitalWrite(dirPinY,HIGH);
 for(int x = 0; x < 4000; x++) {
 digitalWrite(stepPinZ,HIGH);
 digitalWrite(stepPinY,HIGH);
 delayMicroseconds(speed);
 digitalWrite(stepPinZ,LOW);
 digitalWrite(stepPinY,LOW);
 delayMicroseconds(speed);
 
 }
 delay(1000);

digitalWrite(dirPinX,HIGH);
 for(int x = 0; x < 200; x++) {
 digitalWrite(stepPinX,HIGH);
 delayMicroseconds(speed);
 digitalWrite(stepPinX,LOW);
 delayMicroseconds(speed);
 }
 digitalWrite(Magnet,LOW);
delay(1000);
digitalWrite(dirPinX,LOW);
digitalWrite(dirPinY,LOW);
digitalWrite(dirPinZ,LOW);
 for(int x = 0; x < 150; x++) {
 digitalWrite(stepPinX,HIGH);
 digitalWrite(stepPinY,HIGH);
 digitalWrite(stepPinZ,HIGH);
 delayMicroseconds(speed);
 digitalWrite(stepPinX,LOW);
 digitalWrite(stepPinY,LOW);
 digitalWrite(stepPinZ,LOW);
 delayMicroseconds(speed);
 }
home();
  //Point 2 take
digitalWrite(dirPinZ,HIGH);
digitalWrite(dirPinY,HIGH);
 for(int x = 0; x < 4000; x++) {
 digitalWrite(stepPinZ,HIGH);
 digitalWrite(stepPinY,HIGH);
 delayMicroseconds(speed);
 digitalWrite(stepPinZ,LOW);
 digitalWrite(stepPinY,LOW);
 delayMicroseconds(speed);
 
 }
 delay(1000);

digitalWrite(dirPinX,HIGH);
 for(int x = 0; x < 200; x++) {
 digitalWrite(stepPinX,HIGH);
 delayMicroseconds(speed);
 digitalWrite(stepPinX,LOW);
 delayMicroseconds(speed);
 }
 digitalWrite(Magnet,HIGH);
delay(1000);
digitalWrite(dirPinX,LOW);
digitalWrite(dirPinY,LOW);
digitalWrite(dirPinZ,LOW);
 for(int x = 0; x < 150; x++) {
 digitalWrite(stepPinX,HIGH);
 digitalWrite(stepPinY,HIGH);
 digitalWrite(stepPinZ,HIGH);
 delayMicroseconds(speed);
 digitalWrite(stepPinX,LOW);
 digitalWrite(stepPinY,LOW);
 digitalWrite(stepPinZ,LOW);
 delayMicroseconds(speed);
 }

home();

 //Point 1 drop
digitalWrite(dirPinX,HIGH);
digitalWrite(dirPinY,HIGH);
 for(int x = 0; x < 4000; x++) {
 digitalWrite(stepPinX,HIGH);
 digitalWrite(stepPinY,HIGH);
 delayMicroseconds(speed);
 digitalWrite(stepPinX,LOW);
 digitalWrite(stepPinY,LOW);
 delayMicroseconds(speed);
 
 }
 delay(1000);

digitalWrite(dirPinZ,HIGH);
 for(int x = 0; x < 200; x++) {
 digitalWrite(stepPinZ,HIGH);
 delayMicroseconds(speed);
 digitalWrite(stepPinZ,LOW);
 delayMicroseconds(speed);
 }
 digitalWrite(Magnet,LOW);
delay(1000);
digitalWrite(dirPinX,LOW);
digitalWrite(dirPinY,LOW);
digitalWrite(dirPinZ,LOW);
 for(int x = 0; x < 150; x++) {
 digitalWrite(stepPinX,HIGH);
 digitalWrite(stepPinY,HIGH);
 digitalWrite(stepPinZ,HIGH);
 delayMicroseconds(speed);
 digitalWrite(stepPinX,LOW);
 digitalWrite(stepPinY,LOW);
 digitalWrite(stepPinZ,LOW);
 delayMicroseconds(speed);
 }
}
 

 
 