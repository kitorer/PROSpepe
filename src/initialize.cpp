#include "main.h"

void on_center_button() {
	static bool pressed = false;
	pressed = !pressed;
	if (pressed) {
		pros::lcd::set_text(2, "I was pressed!");
	} else {
		pros::lcd::clear_line(2);
	}
}

/**
 * Runs initialization code. This occurs as soon as the program is started.
 *
 * All other competition modes are blocked by initialize; it is recommended
 * to keep execution time for this mode under a few seconds.
 */
void initialize() {
	pros::lcd::initialize();
	pros::lcd::set_text(1, "YOU JUST LOST THE GAME" );
	pros::lcd::set_text(2, "The FitnessGram™ Pacer Test is a multis-");
	pros::lcd::set_text(3, "-tage aerobic capacity test that progre-");
	pros::lcd::set_text(4, "-ssively gets more difficult as it cont-");
	pros::lcd::set_text(5, "inues. The 20 meter pacer test will begin");
	pros::lcd::set_text(6, " in 30 seconds. Line up at the start. The");
	// running speed starts slowly, but gets faster each minute after you hear this signal. [beep] A single lap should be completed each time you hear this sound. [ding] Remember to run in a straight line, and run as long as possible. The second time you fail to complete a lap before the sound, your test is over. The test will begin on the word start. On your mark, get ready, start." );
	pros::lcd::register_btn1_cb(on_center_button);
////////////////////////////////////////////////////////////
pros::Motor left_initalizer(11);
pros::Motor right_mtr(20,true);
pros::Motor leftfront_mtr(12);
pros::Motor rightfront_mtr(19,true);
pros::Motor Lintake_mtr(1);
pros::Motor Rintake_mtr(10,true);
pros::Motor Tray_mtr(8);
pros::Motor Larm_mtr(2);
pros::Motor Rarmmtr(9);
}

/**
 * Runs while the robot is in the disabled state of Field Management System or
 * the VEX Competition Switch, following either autonomous or opcontrol. When
 * the robot is enabled, this task will exit.
 */
void disabled() {}

/**
 * Runs after initialize(), and before autonomous when connected to the Field
 * Management System or the VEX Competition Switch. This is intended for
 * competition-specific initialization routines, such as an autonomous selector
 * on the LCD.
 *
 * This task will exit when the robot is enabled and autonomous or opcontrol
 * starts.
 */
void competition_initialize() {}
