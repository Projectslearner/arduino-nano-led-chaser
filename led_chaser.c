/*
    Project name : Led chaser
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-led-chaser
*/

// Define the pins for the LEDs
const int ledPins[] = {2, 3, 4, 5, 6, 7};

void setup() 
{
  // Set all LED pins as outputs
  for (int i = 0; i < 6; i++) 
  {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop()
{
  // Loop through each LED and turn it on, then off
  for (int i = 0; i < 6; i++) 
  {
    digitalWrite(ledPins[i], HIGH); // Turn the LED on
    delay(100); // Delay for a short period
    digitalWrite(ledPins[i], LOW); // Turn the LED off
  }

  // Loop through each LED in reverse order and turn it on, then off
  for (int i = 5; i >= 0; i--) 
  {
    digitalWrite(ledPins[i], HIGH); // Turn the LED on
    delay(100); // Delay for a short period
    digitalWrite(ledPins[i], LOW); // Turn the LED off
  }
}
