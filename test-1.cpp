#include <Arduino.h>

// Define the LED pin (use built-in LED or change to your pin number)
#define LED_PIN LED_BUILTIN

void setup() {
  // Initialize the LED pin as an output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Turn LED on
  digitalWrite(LED_PIN, HIGH);
  delay(5000);  // Wait for 5 seconds
  
  // Turn LED off
  digitalWrite(LED_PIN, LOW);
  delay(5000);  // Wait for 5 seconds
}