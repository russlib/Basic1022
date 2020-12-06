#include "main.h"

//helper functions




//tells the motor the power it needs

void tankDrive(double joystickL, double joystickR){
  leftMotor = joystickL;
  rightMotor = joystickR;
}

void setTankDriveMotors(){
  //speeed is different may try to have some sort of x^2
  // mod to make controlling easier, or perhaps a plaid mode
  double speeed = 1;
  double speedMulti = speeed * 1;
  double driveL = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
  double driveR = controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y);

tankDrive(driveL, driveR);

}
