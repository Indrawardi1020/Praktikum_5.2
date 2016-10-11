/
void setup() {
Serial.begin(115200);
}
void loop() {
Serial.write(0x00);
Serial.write(0x01);
Serial.write(0xF0);
Serial.write(0x1F);
Serial.write(0x2F);
delay(2000);
}
