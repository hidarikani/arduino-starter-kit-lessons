// define pins
#define RED 2
#define YELLOW 3
#define GREEN 4

// define constants
#define BLINK_MAX  5
#define BLINK_DELAY 500
#define SWITCH_DELAY 5000
#define YELLOW_DELAY 2000 // Yellow is usually shorter than red and green

int i = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
    // Red light
    digitalWrite(RED, HIGH);
    digitalWrite(YELLOW, LOW);
    digitalWrite(GREEN, LOW);
    delay(SWITCH_DELAY);

    // Yellow light
    digitalWrite(RED, LOW);
    digitalWrite(YELLOW, HIGH);
    digitalWrite(GREEN, LOW);
    delay(YELLOW_DELAY);        

    // Green light
    digitalWrite(RED, LOW);
    digitalWrite(YELLOW, LOW);
    digitalWrite(GREEN, HIGH);
    delay(SWITCH_DELAY); 

    // Green light blinking
    for (i=0; i<BLINK_MAX; i++) {
      if (i % 2 == 0) {
        digitalWrite(GREEN, LOW);
        delay(BLINK_DELAY);
      }
      else {
        digitalWrite(GREEN, HIGH);
        delay(BLINK_DELAY);
      }
    }

    // Back to the yellow light
    digitalWrite(RED, LOW);
    digitalWrite(YELLOW, HIGH);
    digitalWrite(GREEN, LOW);
    delay(YELLOW_DELAY);
}
