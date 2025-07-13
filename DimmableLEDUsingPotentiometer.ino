int redPin = 10;
int potPin = A2;
int potVal;
int writeVal;
int wait = 1000;
int br = 9600;
void setup() {
  Serial.begin(br);
  pinMode(potPin, INPUT);
  pinMode(redPin, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  potVal = analogRead(potPin);
  // writeVal = (255.0/1023.0)*potVal;
  writeVal = pow(2, potVal/127.875)-1;
  analogWrite(redPin, writeVal);
  Serial.print(potVal);
  Serial.print("    ");
  Serial.println(writeVal);
  // put your main code here, to run repeatedly:

}
