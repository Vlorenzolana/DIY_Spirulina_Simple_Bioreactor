int PUMPin = 4; //This is the output PUMPin on the Arduino we are using
int LED = 9;    //LED WHITE
int LED2 = 3;    //LED UV


void setup() {
  Serial.begin(19200);        // your setup code here, to run once:
  pinMode(PUMPin, OUTPUT);   // Sets the PUMPin as an output
  pinMode(LED, OUTPUT);     //Sets the LED as an output
  pinMode(LED2, OUTPUT);    //Sets the LED2 as an output
}
 
void loop() {
  // put your main code here, to run repeatedly:  
  digitalWrite(PUMPin, HIGH);  //Switch  ON
  delay(90000);                      //Wait 90 Second
  digitalWrite(PUMPin, LOW);   //Switch  OFF
  delay(1000);                      // Wait 1 second
  digitalWrite(LED, HIGH);          // LED ON
  delay(10000);                     // Wait 10 Second
  digitalWrite(LED, LOW);           // LED OFF
  delay(1000);                     // Wait LED 1second
  digitalWrite(LED2, HIGH);          // LED UV  ON
  delay(90000);                     // Wait 90 Second
  digitalWrite(LED2, LOW);           // LED UV OFF
  delay(1000);                     // Wait 1 second
}
