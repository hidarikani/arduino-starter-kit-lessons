// define pins
#define RED 3
#define GREEN 5
#define BLUE 6

#define delayTime 10 // fading time between colors


void increasePulseWidth(int pin) {
  int i;
  for (i = 0; i < 256; i++) {
    analogWrite(pin, i);
    delay(delayTime);
  }
}

void decreasePulseWidth(int pin) {
  int i;
  for (i = 255; i > -1; i--) {
    analogWrite(pin, i);
    delay(delayTime);
  }
}

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);

  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
}

// main loop
void loop()
{
  increasePulseWidth(RED);
  increasePulseWidth(GREEN);
  decreasePulseWidth(RED);
  decreasePulseWidth(GREEN);
  increasePulseWidth(GREEN);
  increasePulseWidth(BLUE);
  decreasePulseWidth(GREEN);
  decreasePulseWidth(BLUE);
  increasePulseWidth(BLUE);
  increasePulseWidth(RED);
  decreasePulseWidth(BLUE);
  decreasePulseWidth(RED);
}
