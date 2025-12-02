#define STEPPER_PIN_1  D1
#define STEPPER_PIN_2  D2
#define STEPPER_PIN_3  D3
#define STEPPER_PIN_4  D4

#define BUTTON_PIN     D0
#define MQ2_PIN        A0

int state = 0;
int laststate = 0;

int step_number = 0;
int step_per_revolution = 2048;

unsigned long duration = 1000;

void setup() {
  pinMode(STEPPER_PIN_1, OUTPUT);
  pinMode(STEPPER_PIN_2, OUTPUT);
  pinMode(STEPPER_PIN_3, OUTPUT);
  pinMode(STEPPER_PIN_4, OUTPUT);

  pinMode(BUTTON_PIN, INPUT);

  Serial.begin(9600);
}

void OneStep(int direction) {
  if (direction > 0) {
    step_number++;
    if (step_number > 3) step_number = 0;
  } else {
    step_number--;
    if (step_number < 0) step_number = 3;
  }

  switch (step_number) {
    case 0:
      digitalWrite(STEPPER_PIN_1, HIGH);
      digitalWrite(STEPPER_PIN_2, LOW);
      digitalWrite(STEPPER_PIN_3, LOW);
      digitalWrite(STEPPER_PIN_4, LOW);
      break;

    case 1:
      digitalWrite(STEPPER_PIN_1, LOW);
      digitalWrite(STEPPER_PIN_2, HIGH);
      digitalWrite(STEPPER_PIN_3, LOW);
      digitalWrite(STEPPER_PIN_4, LOW);
      break;

    case 2:
      digitalWrite(STEPPER_PIN_1, LOW);
      digitalWrite(STEPPER_PIN_2, LOW);
      digitalWrite(STEPPER_PIN_3, HIGH);
      digitalWrite(STEPPER_PIN_4, LOW);
      break;

    case 3:
      digitalWrite(STEPPER_PIN_1, LOW);
      digitalWrite(STEPPER_PIN_2, LOW);
      digitalWrite(STEPPER_PIN_3, LOW);
      digitalWrite(STEPPER_PIN_4, HIGH);
      break;
  }

  delay(3);
}

void loop() {
  int gasValue = analogRead(MQ2_PIN);
  Serial.println(gasValue);

  if (gasValue > 700) {
    unsigned long start = millis();
    while (millis() - start < duration) {
      OneStep(1);
    }
  }

  state = digitalRead(BUTTON_PIN);

  if (state == HIGH && laststate == LOW) {
    for (int i = 0; i < 512; i++) {
      OneStep(1);
    }
  }

  laststate = state;
}
