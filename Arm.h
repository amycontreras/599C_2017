// INITIALIZING ARM VARIABLES
int armUp = 0;
int armDown = 0;
int wristUp = 0;
int wristDown = 0;
int clawOpen = 0;
int clawClose = 0;
int armPot = 0;
int theta = 0;//DESIRED VAL

// UPDATING ARM VARIABLES
void armVariables()
{
	armUp =	vexRT[Btn6U];
	armDown = vexRT[Btn6D];
	wristUp = vexRT[Btn5U];
	wristDown = vexRT[Btn5D];
	clawOpen = vexRT[Btn8R];
	clawClose = vexRT[Btn8L];
	armPot = SensorValue[pot];
}

// This function is essentially a shortcut for our arm code.
// It sets the motors all to the same speed, so once the function
// is used elsewhere, all motors move at the same directed speed.
void updateArmMotors(int speed)
{
	motor[left_bot_arm] = speed;
	motor[left_top_arm] = speed;
}

void updateWristMotors(int speed)
{
	motor[left_wrist] = -speed;
	motor[right_wrist] = speed;
}

void updateClawMotors(int speed)
{
	motor[left_claw] = -speed;
	motor[right_claw] = speed;
}
// This is the actual code for the arm. It checks whether or not
// button 6U or 6D is pressed on the joystick (6U runs the motors
// forward, 6D in reverse) and then acts accordingly. If neither
// buttons are pressed, the arm motors do not move. The same
// layout is mirrored with the wrist and claw functions below.
void arm ()
{
	if(armPot > theta)
	{
		if(armUp == 1)
			updateArmMotors(127);
		else if(armDown == 1)
			updateArmMotors(-127);
	}
	else if(armPot < theta || armPot == theta)
		updateArmMotors(0);
}

void wrist()
{
	if(wristDown == 1)
		updateWristMotors(-127);
	else if(wristUp == 1)
		updateWristMotors(127);
	else
		updateWristMotors(0);
}

void claw()
{
	if(clawOpen == 1)
		updateClawMotors(127);
	else if(clawClose == 1)
		updateClawMotors(-127);
	else
		updateClawMotors(0);
}
