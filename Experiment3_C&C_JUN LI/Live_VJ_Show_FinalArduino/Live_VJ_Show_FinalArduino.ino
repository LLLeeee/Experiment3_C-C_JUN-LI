const int  buttonPin = 2;
int buttonPushCounter = 0;
int buttonState = 0;
int lastButtonState = 0;

void setup() {
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0); 
  int sensorValue1 = analogRead(A1); 
  int sensorValue2 = analogRead(A2); 
  int sensorValue3 = analogRead(A3); 
  int sensorValue4 = analogRead(A4); 
  int sensorValue5 = analogRead(A5); 
  int sensorValue6 = analogRead(A6); 
  int sensorValue7 = analogRead(A7); 
  Serial.print(buttonPushCounter);
  Serial.print("\t"); 
  Serial.print(sensorValue); 
  Serial.print("\t"); 
  Serial.print(sensorValue1); 
  Serial.print("\t"); 
  Serial.print(sensorValue2); 
  Serial.print("\t"); 
  Serial.print(sensorValue3); 
  Serial.print("\t"); 
  Serial.print(sensorValue4); 
  Serial.print("\t"); 
  Serial.print(sensorValue5); 
  Serial.print("\t"); 
  Serial.print(sensorValue6); 
  Serial.print("\t"); 
  Serial.println(sensorValue7); 
  buttonState = digitalRead(buttonPin);
  if (buttonPushCounter > 7 ) {
   buttonPushCounter = 0;
    } 
  if (buttonState != lastButtonState) {
    if (buttonState == HIGH) {
      buttonPushCounter++;
    } 
    delay(200);
  }
  lastButtonState = buttonState;
}
