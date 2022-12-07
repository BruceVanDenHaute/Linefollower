#define AIN1 5
#define AIN2 6
#define BIN1 9
#define BIN2 10

void setup() {
  Serial.begin(9600);
}

void loop() {
for(int k = 0; k<255; k+=10)
   {
    analogWrite (AIN1,k);
    analogWrite (BIN1,k);
    delay(100);
   }

  for(int k =255 ; k>= 0; k-=10)
   {
    analogWrite(AIN1,k);
    analogWrite (BIN1,k);
    delay(100);
   }

   for(int k = 0; k<255; k+=10)
   {
    analogWrite (AIN2,k);
    analogWrite (BIN2,k);
    delay(100);
   }

  for(int k =255 ; k>= 0; k-=10)
   {
    analogWrite(AIN2,k);
    analogWrite (BIN2,k);
    delay(100);
   }
  
  }
