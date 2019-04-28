//set max frequencies to 10 in the processing 3 file

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  Serial.println("Av:0,1;0.1,10;0.2,20;0.3,30;0.4,40;0.5,0;0.6,60;0.7,70;0.8,80;0.9,90$");
  Serial.println("Bv:0,1;0.1,10;0.2,20;0.3,30;0.4,40;0.5,50;0.6,60;0.7,70;0.8,80;0.9,90$");
  Serial.println("Cv:0,1;0.1,10;0.2,20;0.3,30;0.4,40;0.5,0;0.6,60;0.7,70;0.8,80;0.9,90$");
  Serial.println("Ai:0,1;0.1,10;0.2,20;0.3,30;0.4,40;0.5,50;0.6,60;0.7,70;0.8,80;0.9,90$");
  Serial.println("Bi:0,1;0.1,10;0.2,20;0.3,30;0.4,40;0.5,50;0.6,60;0.7,70;0.8,80;0.9,90$");
  Serial.println("Ci:0,1;0.1,10;0.2,20;0.3,30;0.4,40;0.5,0;0.6,60;0.7,70;0.8,80;0.9,90$");
  Serial.println("Ap:0,1;0.1,10;0.2,20;0.3,30;0.4,40;0.5,50;0.6,60;0.7,70;0.8,80;0.9,90$");
  Serial.println("Bp:0,1;0.1,10;0.2,20;0.3,30;0.4,40;0.5,50;0.6,60;0.7,70;0.8,80;0.9,90$");
  Serial.println("Cp:0,1;0.1,10;0.2,20;0.3,30;0.4,40;0.5,0;0.6,60;0.7,70;0.8,80;0.9,90$");
}
