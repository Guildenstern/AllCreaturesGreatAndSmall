/* super simple blink example - slighty modified - used to test CI */

#define USED_LED LED_BUILTIN
//#define USED_LED P0

void setup() {
  pinMode(USED_LED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(USED_LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(USED_LED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}