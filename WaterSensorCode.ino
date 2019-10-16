int nemdeger = 0;
int sensor = A0;
int kirmiziled = 7;
int yesilled = 5;

void setup() {
 pinMode(sensor, INPUT);
 pinMode(kirmiziled, OUTPUT);
 pinMode(yesilled, OUTPUT);
 Serial.begin(9600);
 Serial.println("Nem Durumu:");
 Serial.println("-------------");
}
void loop() {
  nemdeger = analogRead(A0);


if(nemdeger > 901){
Serial.print("Nem:");
Serial.println(nemdeger);
Serial.println("Durum: Toprak Kuru");
Serial.println("");
digitalWrite(kirmiziled, HIGH);
delay(500);
} else{
  digitalWrite(kirmiziled, LOW);
  delay(500);
}
  
if(nemdeger > 251 && nemdeger <= 900){
Serial.print("Nem:");
Serial.println(nemdeger);
Serial.println("Durum: Toprak Nemli");
Serial.println("");
digitalWrite(yesilled, HIGH);
delay(500);
} else{
  digitalWrite(yesilled, LOW);
  delay(500);
}
  
if(250 > nemdeger){
Serial.print("Nem:");
Serial.println(nemdeger);
Serial.println("Durum: Toprak Yas");
Serial.println("");
digitalWrite(kirmiziled, HIGH);
delay(500);
} else{
  digitalWrite(kirmiziled, LOW);
 delay(500);
}
}
Web Site = http://blog.ikizoglu.com/2018/03/arduino-toprak-nem-sensoru-kullanimi/
