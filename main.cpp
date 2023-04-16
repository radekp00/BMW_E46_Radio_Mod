#include <Arduino.h>
#include <Wire.h>
#define outPin SCL0
uint16_t arr[] = {410, 100, 100, 200, 100, 200, 100, 200, 720, 100, 410, 200, 410, 100, 100, 100, 720, 200, 200, 100, 200, 320, 200, 2400, 410, 100, 100, 200, 100, 200, 100, 200, 720, 100, 200, 200, 100, 320, 100, 200, 100, 100, 720, 200, 320, 320, 320, 2500, 420, 100, 100, 200, 100, 200, 100, 100, 100, 100, 620, 100, 420, 320, 100, 100, 520, 200, 100, 100, 100, 720, 200, 100, 100, 720, 200, 320, 200, 100, 100, 100, 100, 100, 2900 }; 
int n = sizeof(arr) / sizeof(arr[0]);
void setup() {
  pinMode(outPin, OUTPUT);
  digitalWrite(outPin, HIGH);
  delay(1000);
  digitalWrite(outPin, LOW);
  delayMicroseconds(100);
  digitalWrite(outPin, HIGH);
  delay(350);
  
  for(int i = 0; i<n+1; i++){
    digitalWrite(outPin, !digitalRead(outPin));
    delayMicroseconds(arr[i]);
  }
  /*
  Serial.begin(9600);
  Wire.begin();
  delay(5000);
  Serial.println("hi");
  Serial.println('[');
  for(int j = 0; j<1; j++){
  for(int i = 0; i<1; i++){
  Wire.beginTransmission(0b1010000);
  Wire.write(0x00);
  Wire.write(0x00);
  Wire.requestFrom(0b1010000, 16);
  Wire.endTransmission();
  delay(12);
  while (Wire.available()) { // peripheral may send less than requested
    uint8_t c = Wire.read(); // receive a byte as character
    Serial.print(c, HEX);         // print the character
    Serial.print(", ");
  }
  //Serial.println(' ');
  
  delay(10);
  }
  }
  Serial.print(']');
  */
}

void loop() {
  // put your main code here, to run repeatedly:
}