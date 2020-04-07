// define pins
#define RED 2
#define YELLOW 3
#define GREEN 4

// define constants
#define BLINK_MAX  5
#define BLINK_DELAY 500

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
    digitalWrite(RED, HIGH);
    digitalWrite(YELLOW, LOW);
    digitalWrite(GREEN, LOW);

    // TODO: make red light blink before going off

    delay(BLINK_DELAY);

    digitalWrite(RED, LOW);
    digitalWrite(YELLOW, HIGH);
    digitalWrite(GREEN, LOW);

    delay(BLINK_DELAY);        

    digitalWrite(RED, LOW);
    digitalWrite(YELLOW, LOW);
    digitalWrite(GREEN, HIGH);

    // TODO: make green ligh blink before going off

    delay(BLINK_DELAY);
}
