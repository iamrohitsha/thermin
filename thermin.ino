const int trig = 8;
const int echo = 4;
const int buzzer = 11;
float duration,distance;
int frequency;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buzzer , OUTPUT);
  Serial.begin(9600);
}

void loop() {
 digitalWrite(trig, HIGH);
 delayMicroseconds(10);
 digitalWrite(trig, LOW);

 duration = pulseIn(echo,HIGH);
 distance =  0.017* duration;
 Serial.print("Distance");
 Serial.print(distance);
 if(distance<=200.0){
 frequency = map(distance , 0, 200, 1000,3000);
 Serial.print("Frequency : ");
 Serial.println(frequency);
 tone(buzzer,frequency,1000);
 }
 

}
