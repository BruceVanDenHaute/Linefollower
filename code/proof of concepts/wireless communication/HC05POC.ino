int ledPin = 7;
int state= 0;
void setup() {
  Serial.begin(9600);      // Serial Monitor
  Serial1.begin(9600);     // Serial1 for HC-05 module
  pinMode(ledPin, OUTPUT); 
    // Set the HC-05 to master or slave mode (AT commands may vary based on your HC-05 version)
  Serial1.print("AT+ROLE=0\r\n");  // 0: Slave mode, 1: Master mode

  // Set a recognizable name for your module
  Serial1.print("AT+NAME=MyBluetooth\r\n");

  // Set the PIN code for pairing (you can change this)
  Serial1.print("AT+PIN=1234\r\n"); 
}

void loop() {
  command();
  

}

void command() {
  
   if(Serial.available() > 0){ // Checks whether data is comming from the serial port
    state = Serial.read(); // Reads the data from the serial port   
    }

    if (state == '0') {
      digitalWrite(ledPin, LOW); // Turn LED OFF
      Serial1.println("LED: OFF"); // Send back, to the phone, the String "LED: ON"
      state=0;
    }
    else if (state == '1') {
      digitalWrite(ledPin, HIGH);
      Serial1.println("LED: ON");;
      state=0;
    } 
    else if (state == '2'){
      int baud = Serial.baud();
      Serial1.println(baud);
      Serial.println(baud);
      state=0;
    }

}