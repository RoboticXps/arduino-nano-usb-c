/*
Example for Arduino Nano USB-C with LED.
By: RoboticX Team
*/

const int ledPin = 5; // Define the LED pin

void setup() {
  // Set the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(ledPin, HIGH);

  // Wait for 1 second
  delay(1000);

  // Turn the LED off
  digitalWrite(ledPin, LOW);

  // Wait for 1 second
  delay(1000);
}
