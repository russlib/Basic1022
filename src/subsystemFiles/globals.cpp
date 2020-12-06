#include "main.h"


//drive motorss
pros::Motor leftMotor(4,pros::E_MOTOR_GEARSET_18,false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor rightMotor(13,pros::E_MOTOR_GEARSET_18,false, pros::E_MOTOR_ENCODER_COUNTS);

//CONTROLLER
pros::Controller controller(pros::E_CONTROLLER_MASTER);
