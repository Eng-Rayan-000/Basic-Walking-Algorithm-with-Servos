#include <Servo.h>

// Define servos
Servo hipLeft, hipRight, kneeLeft, kneeRight;

void setup() {
  hipLeft.attach(9);
  hipRight.attach(8);
  kneeLeft.attach(7);
  kneeRight.attach(6);

  delay(1000); // Wait for power to stabilize

  // Set all servos to initial position (neutral)
  hipLeft.write(90);
  hipRight.write(90);
  kneeLeft.write(90);
  kneeRight.write(90);
  
  delay(1000); // Wait before starting walk
}

void loop() {
  // Step 1: Lift Right Leg
  kneeRight.write(60);
  delay(400);

  // Step 2: Swing Right Forward
  hipRight.write(120);
  delay(400);

  // Step 3: Lower Right Leg
  kneeRight.write(90);
  delay(400);

  // Step 4: Shift Weight Left
  hipLeft.write(60);
  delay(400);

  // Step 5: Lift Left Leg
  kneeLeft.write(60);
  delay(400);

  // Step 6: Swing Left Forward
  hipLeft.write(120);
  delay(400);

  // Step 7: Lower Left Leg
  kneeLeft.write(90);
  delay(400);

  // Step 8: Shift Weight Right
  hipRight.write(60);
  delay(400);
}
