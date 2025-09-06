// Blink LED Example
// Turns an LED on for one second, then off for one second, repeatedly.

int ledPin = 13; // onboard LED on most Arduino boards

void setup() {
  pinMode(ledPin, OUTPUT); // set pin as output
}

void loop() {
  digitalWrite(ledPin, HIGH); // turn LED on
  delay(1000);                // wait 1 second
  digitalWrite(ledPin, LOW);  // turn LED off
  delay(1000);                // wait 1 second
}
