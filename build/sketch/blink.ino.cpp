#include <Arduino.h>
#line 1 "E:\\YT Content\\20204-07-13 Self-Balancing Robot Stick\\Code\\balancing-robot\\blink\\blink.ino"
// the setup function runs once when you press reset or power the board
#line 2 "E:\\YT Content\\20204-07-13 Self-Balancing Robot Stick\\Code\\balancing-robot\\blink\\blink.ino"
void setup();
#line 8 "E:\\YT Content\\20204-07-13 Self-Balancing Robot Stick\\Code\\balancing-robot\\blink\\blink.ino"
void loop();
#line 2 "E:\\YT Content\\20204-07-13 Self-Balancing Robot Stick\\Code\\balancing-robot\\blink\\blink.ino"
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(100);                      // wait for a second
}
