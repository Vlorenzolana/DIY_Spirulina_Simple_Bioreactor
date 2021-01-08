int PUMPin = 4;    //This is the output PUMPin on the Arduino we are using
int LED = 9;

void setup() {
  Serial.begin(19200);
  // put your setup code here, to run once:
  pinMode(PUMPin, OUTPUT);           // Sets the PUMPin as an output
  pinMode(LED, OUTPUT);         //LED Sets the PUMPin as an output
}
 
void loop() {
  // put your main code here, to run repeatedly:  
  digitalWrite(PUMPin, HIGH);  //Switch  ON
  delay(10000);                      //Wait 1 Second
  digitalWrite(PUMPin, LOW);   //Switch  OFF
  delay(1000);                      // Wait 1 second
  digitalWrite(LED, HIGH);          // LED ON
  delay(20000);                     // Wait 20 Second
  digitalWrite(LED, LOW);           // LED OFF
  delay(900000);                     // Wait 15min 900second
}
