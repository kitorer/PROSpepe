#include "main.h"
pros::Controller master(pros::E_CONTROLLER_MASTER);
pros::Motor driveLeftBack(11, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor driveRightBack(20, pros::E_MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor driveLeftFront(12, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor driveRightFront(19, pros::E_MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor Tray(8, pros::E_MOTOR_GEARSET_36,false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor arm(2, pros::E_MOTOR_GEARSET_36,false, pros::E_MOTOR_ENCODER_COUNTS);

void opcontrol()
{
	while (true)
		{
           int power = master.get_analog(ANALOG_RIGHT_Y);
           int turn = master.get_analog(ANALOG_RIGHT_X);
           int left = power + turn;
           int right = power - turn;
					 int left1 = power +turn;
					 int right1 = power -turn;
           driveLeftFront  = left;
					 driveLeftBack  = left1;
           driveRightFront  = right;
					 driveRightBack  = right1;
           pros::delay(20);
   	}
     return;
}

void traycontrol()
 {
	while(true)
	{

	}
}
void armcontrol()
{
	while(true)
	{

	}
}
