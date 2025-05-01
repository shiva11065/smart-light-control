#include <SoftwareSerial.h>

SoftwareSerial BTSerial(2, 3); // RX | TX

const int ledPin = 13;
char incomingByte;

void setup() {
  pinMode(ledPin, OUTPUT);
  BTSerial.begin(9600);
  Serial.begin(9600);
}

void loop() {
  if (BTSerial.available()) {
    incomingByte = BTSerial.read();
    Serial.println(incomingByte);

    if (incomingByte == '1') {
      digitalWrite(ledPin, HIGH);
    } else if (incomingByte == '0') {
      digitalWrite(ledPin, LOW);
    }
  }
}
