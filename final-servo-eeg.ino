#include <Servo.h>
Servo servo;
int data;
void setup() {
  // put your setup code here, to run once:
servo.attach(10);
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available()==0){
  
}
data=Serial.readString().toInt();
//Serial.println(data);
if(data==1){
servo.write(0);
delay(2000);
servo.write(200);
}
else{



}
}
