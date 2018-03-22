// Define RGB pins
int redPin = 6;
int greenPin = 5;
int bluePin = 3;

// ---------------------------------------------------------------
// Variables
// ---------------------------------------------------------------

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(40, lightPin);

int brightness = 40; // 1/3 brightness

// ---------------------------------------------------------------
// Setup
// ---------------------------------------------------------------

void setup()
{
    pixels.begin();
    pixels.setBrightness(0); // Set lights to off state 
    pixels.show();
    // Set button input pin
    pinMode(buttonPin, INPUT);
    digitalWrite(buttonPin, HIGH);
    // Set LED output pins
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT); 
    // Set RGB to off state 
    analogWrite(redPin, 255);
    analogWrite(greenPin, 255);
    analogWrite(bluePin, 255);

    Serial.begin(9600);
}

// ---------------------------------------------------------------
// Main loop
// ---------------------------------------------------------------

void loop()
{

    // Get button event and act accordingly
    int b = checkButton();
    if (b == 1)
        clickEvent();
    if (b == 2)
        doubleClickEvent();
    if (b == 3)
        holdEvent();
    if (b == 4)
        longHoldEvent();
}