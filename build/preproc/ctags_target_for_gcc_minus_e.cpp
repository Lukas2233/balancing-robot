# 1 "E:\\YT Content\\20204-07-13 Self-Balancing Robot Stick\\Code\\balancing-robot\\blink\\blink.ino"
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, 0x1);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, 0x1); // turn the LED on (HIGH is the voltage level)
  delay(100); // wait for a second
  digitalWrite(13, 0x0); // turn the LED off by making the voltage LOW
  delay(100); // wait for a second
}
