#include "main.h"

/**
 * Runs the operator control code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the operator
 * control mode.
 *
 * If no competition control is connected, this function will run immediately
 * following initialize().
 *
 * If the robot is disabled or communications is lost, the
 * operator control task will be stopped. Re-enabling the robot will restart the
 * task, not resume it from where it left off.
 */
void opcontrol() {
	pros::Controller master(pros::E_CONTROLLER_MASTER);
	pros::Motor left_mtr(11);
	pros::Motor right_mtr(20,true);
	pros::Motor Lintake_mtr(1);
	pros::Motor Rintake_mtr(10);
	pros::Motor Tray_mtr(8);
	pros::Motor Larm_mtr(2);
	pros::Motor Rarmmtr(9);
	/*
	while (true) {
		pros::lcd::print(0, "%d %d %d", (pros::lcd::read_buttons() & LCD_BTN_LEFT) >> 2,
		                 (pros::lcd::read_buttons() & LCD_BTN_CENTER) >> 1,
		                 (pros::lcd::read_buttons() & LCD_BTN_RIGHT) >> 0);
		int left = master.get_analog(ANALOG_LEFT_Y);
		int right = master.get_analog(ANALOG_RIGHT_Y);
		left_mtr = left;
		right_mtr = right;
		pros::delay(20);
	}
	*/
	while (true) //arcade drive
		{
     int power = master.get_analog(ANALOG_LEFT_Y);
     int turn = master.get_analog(ANALOG_RIGHT_X);
     int left = power + turn;
     int right = power - turn;
     left_mtr.move(left);
     right_mtr.move(right);

     pros::delay(2);
   	}

}
