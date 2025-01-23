
// the setup function runs once when you press reset or power the board
void setup() {
  int timesToBlink = 1;
  timesToBlink = timesToBlink + 2 * 4;

  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);

  for(int i = 0; i < 5; i++){
        digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
    delay(1000);                      // wait for a second
    digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
    delay(1000);
  }
}

// the loop function runs over and over again forever
void loop() {
}
