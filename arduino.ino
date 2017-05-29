const int trigPin=7;
const int echoPin=9;
long Duration;
int Distance;
int led=6;
void setup() {

  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  Duration=pulseIn(echoPin,HIGH);
  Distance=Duration*0.034/2;
  if(Distance<50)
  {
    digitalWrite(led,HIGH);
    
    
  }
  else 
  {
    digitalWrite(led,LOW);
  }
  Serial.print("Distance: ");
  Serial.println(Distance);
}
