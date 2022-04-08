
int trig=2;
int echo=4;
double getdata;
double distance;
void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
Serial.begin(9600);
}

void loop() {
  double getData;

 digitalWrite(trig,LOW);
delayMicroseconds(10);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
 digitalWrite(trig,LOW);
 delayMicroseconds(10);
 getData=pulseIn(echo,HIGH);
 
 
distance=(((12./665.)*(getData)));


Serial.print(distance);
Serial.print(",");
delay(500);

}
