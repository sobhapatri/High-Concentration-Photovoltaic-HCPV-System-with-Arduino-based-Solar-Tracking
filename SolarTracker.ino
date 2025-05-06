#include <Servo.h>

Servo servo_updown;
Servo servo_rightleft;

int topr, topl, botr, botl;
int threshold = 50;

void setup() {
  servo_updown.attach(9);       // Vertical axis
  servo_rightleft.attach(10);   // Horizontal axis
  Serial.begin(9600);
}

void loop() {
  topr = analogRead(A0);
  topl = analogRead(A1);
  botr = analogRead(A2);
  botl = analogRead(A3);

  int avgtop = (topr + topl) / 2;
  int avgbot = (botr + botl) / 2;
  int avgleft = (topl + botl) / 2;
  int avgright = (topr + botr) / 2;

  int diffelev = avgtop - avgbot;
  int diffazi = avgright - avgleft;

  if (abs(diffelev) > threshold) {
    if (avgtop > avgbot) {
      servo_updown.write(servo_updown.read() + 1);  // Tilt up
    } else {
      servo_updown.write(servo_updown.read() - 1);  // Tilt down
    }
  }

  if (abs(diffazi) > threshold) {
    if (avgright > avgleft) {
      servo_rightleft.write(servo_rightleft.read() + 1);  // Pan right
    } else {
      servo_rightleft.write(servo_rightleft.read() - 1);  // Pan left
    }
  }

  delay(300);  // Delay for stability
}
