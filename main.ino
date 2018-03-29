#define lightPin 4

// ---------------------------------------------------------------
// Variables
// ---------------------------------------------------------------


// ---------------------------------------------------------------
// Setup
// ---------------------------------------------------------------

 void setup()
 {
   Serial.begin(9600);
   attachInterrupt(0, magnet_detect, RISING);
   digitalWrite(lightPin, LOW);
 }1

// ---------------------------------------------------------------
// Main loop
// ---------------------------------------------------------------

 
 void loop()
 {

 }

  void magnet_detect() //Triggered whenever a magnet/interrupt is detected by the arduino
 {
   Serial.println("Magnet Detected");
   digitalWrite(lightPin, HIGH);
 }