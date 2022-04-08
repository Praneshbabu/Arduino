
int trig=8;
int echo=9;
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
 getData=pulseIn(echo, HIGH);
 delay(25);
 
distance=((getData)/55);
 Serial.println(" Distance in CM");
 Serial.print(" ");
Serial.print(distance);
 
}
