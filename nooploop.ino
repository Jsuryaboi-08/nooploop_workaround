void setup() {
  // put your setup code here, to run once:
  Serial.begin(921600);
}

void loop() {
  // put your main code here, to run repeatedly:
  char buf[128]={0x54,0,1};
  buf[127]=0x55;
  Serial.write(buf,128);  
  delay(5000);
}
