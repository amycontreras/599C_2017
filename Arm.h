// This function is essentially a shortcut for our arm code.
// It sets the motors all to the same speed, so once the function
// is used elsewhere, all motors move at the same directed speed.
void updateArmMotors(int speed)
{
	motor[left_back_arm] = speed;
	motor[left_front_arm] = speed;
	motor[right_front_arm] = speed;
	motor[right_back_arm] = speed;
}

// This is the actual code for the arm. It checks whether or not
// button 6U or 6D is pressed on the joystick (6U runs the motors
// forward, 6D in reverse) and then acts accordingly. If neither
// buttons are pressed, the arm motors do not move.
void arm ()
{
	if(vexRT[Btn6U] == 1)
		updateArmMotors(127);
	else if(vexRT[Btn6D] == 1)
		updateArmMotors(-127);
	else
		updateArmMotors(0);
}
