byte myByte=0x00;
int dt=500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(myByte, DEC);
  Serial.print("       ");
  Serial.print(myByte, BIN);
  Serial.print("       ");
  Serial.println(myByte, HEX);
  myByte++;
  delay(dt);
}
