
long S1,S2,S3,S4,S5,F1,F2,F3,F4,F5,X,Y,Z;

void setup() {
 
 Serial.begin(9600);
}

void loop() {
  
    
  S1 = random(0, 99);
  S2 = random(0, 99);
  S3 = random(0, 99);
  S4 = random(0, 99);
  S5 = random(0, 99);
  F1 = random(0, 99);
  F2 = random(0, 99);
  F3 = random(0, 99);
  F4 = random(0, 99);
  F5 = random(0, 99);
  X = random(0, 99);
  Y = random(0, 99);
  Z = random(0, 99);
  
  Serial.print("S1_");Serial.print(S1);Serial.print("#");
  Serial.print("S2_");Serial.print(S2);Serial.print("#");
  Serial.print("S3_");Serial.print(S3);Serial.print("#");
  Serial.print("S4_");Serial.print(S4);Serial.print("#");
  Serial.print("S5_");Serial.print(S5);Serial.print("#");
  Serial.print("F1_");Serial.print(F1);Serial.print("#");
  Serial.print("F2_");Serial.print(F2);Serial.print("#");
  Serial.print("F3_");Serial.print(F3);Serial.print("#");
  Serial.print("F4_");Serial.print(F4);Serial.print("#");
  Serial.print("F5_");Serial.print(F5);Serial.print("#");
  Serial.print("A");Serial.print(X);Serial.print("*");Serial.print(Y);Serial.print("*");Serial.print(Z);
  Serial.println();
  delay(1000);


}
