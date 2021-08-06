void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(INPUT, A0);
  delay(100);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  float sVolt = 0;
  sVolt = analogRead(A0);

  float   FVolt = sVolt/41.8181;
  
  Serial.print("Data Sensor : ");
  Serial.println(FVolt);
  delay(100);
}
