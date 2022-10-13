#include <Stepper.h>

#define STEPS 200
// Define stepper motor connections and motor interface type. Motor interface type must be set to 1 when using a driver

Stepper stepper(STEPS, 2, 3); // Pin 2 connected to DIRECTION & Pin 3 connected to STEP Pin of Driver

#define motorInterfaceType 1

int Val = 0;          //Default potentiometer readout      
double Speed = 0;     //Default current speed
double MaxSpeed = 10; //Maximum allowable speed
double MinSpeed = 4;  //Minimum non-zero speed

void setup() {
  // Read speed value
  stepper.setSpeed(1000);
  Serial.begin(9600);
}

void loop() {
  Val = map(analogRead(A0), 0, 1024, 0, 500);  //Potentiometer readout
  
  Speed = double(Val) / 490 * MaxSpeed;        //Define current speed based on max allowable speed and Potentiometer readout

  // Define off-state and input stepper motion
  if (abs(int(Speed)) >= MinSpeed) {
    stepper.step(int(Speed));
  }
  else {
    stepper.step(0);
  }


  // Print speed to serial monitor
  Serial.print(int(Speed));
  Serial.print("\n");
}
