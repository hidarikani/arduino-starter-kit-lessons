int i = 0;
int blinkDelay = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  if (i > 9) {
    i = 0;
  }

  blinkDelay = 100 + (i * 80);

  digitalWrite(LED_BUILTIN, HIGH);   
  delay(blinkDelay);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(blinkDelay);

  i++;
}
