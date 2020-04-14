// Define pins
// The original scanner has 8 light but Arduino has only 6 PWM pins
#define ONE 3
#define TWO 5
#define THREE 6
#define FOUR 9
#define FIVE 10
#define SIX 11

#define DIM 1

#define COLOR_STEP 2
#define PIN_STEP 10


void increasePulseWidth(int pin) {
  int i;
  for (i = DIM; i < 256; i++) {
    analogWrite(pin, i);
    delay(COLOR_STEP);
  }
}

void decreasePulseWidth(int pin) {
  int i;
  for (i = 255; i >= DIM; i--) {
    analogWrite(pin, i);
    delay(COLOR_STEP);
  }
}

void moveLights(int src, int dest) {
  int i;
  for (i = DIM; i < 256; i++) {
    analogWrite(src, 256 + DIM - i);
    analogWrite(dest, i);
    delay(COLOR_STEP);
  } 
}

void setup()
{
  pinMode(ONE, OUTPUT);
  pinMode(TWO, OUTPUT);
  pinMode(THREE, OUTPUT);
  pinMode(FOUR, OUTPUT);
  pinMode(FIVE, OUTPUT);
  pinMode(SIX, OUTPUT);

  digitalWrite(ONE, LOW);
  digitalWrite(TWO, LOW);
  digitalWrite(THREE, LOW);
  digitalWrite(FOUR, LOW);
  digitalWrite(FIVE, LOW);
  digitalWrite(SIX, LOW);

  increasePulseWidth(ONE);
}

// main loop
void loop()
{ 
    moveLights(ONE, TWO);
    moveLights(TWO, THREE);
    moveLights(THREE, FOUR);
    moveLights(FOUR, FIVE);
    moveLights(FIVE, SIX);

    moveLights(SIX, FIVE);
    moveLights(FIVE, FOUR);
    moveLights(FOUR, THREE);
    moveLights(THREE, TWO);
    moveLights(TWO, ONE);


}
