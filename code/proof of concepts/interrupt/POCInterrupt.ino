#include <SoftwareSerial.h>
int ledPin = 4;

SoftwareSerial bluetoothSerial(0, 1);  // RX, TX

void setup() {
  Serial.begin(9600);         // Serial Monitor
  pinMode(ledPin, OUTPUT);
  bluetoothSerial.begin(9600); // Bluetooth module

  // Set the HC-05 to master or slave mode (AT commands may vary based on your HC-05 version)
  bluetoothSerial.print("AT+ROLE=0\r\n");  // 0: Slave mode, 1: Master mode

  // Set the PIN code for pairing (you can change this)
  bluetoothSerial.print("AT+PIN=1234\r\n");
}

void loop() {
  if (bluetoothSerial.available()) {
    char data = bluetoothSerial.read();
    Serial.write(data);  // Display data received from Bluetooth module on Serial Monitor
  }

  if (Serial.available()) {
    char data = Serial.read();
    bluetoothSerial.write(data);  // Send data from Serial Monitor to Bluetooth module
  }
if (bluetoothSerial.available()) {
        char command = bluetoothSerial.read();
        if (command == '1') {
            digitalWrite(ledPin, HIGH);  // Turn on LED
        } else if (command == '0') {
            digitalWrite(ledPin, LOW);   // Turn off LED
        }
    }
  
}
