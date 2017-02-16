// INITIALIZING ARM VARIABLES
int armUp = 0;
int armDown = 0;
int clawOpen = 0;
int clawClose = 0;
int wowButton = 0;


// UPDATING ARM VARIABLES
void armVariables()
{
	armUp =	vexRT[Btn6U];
	armDown = vexRT[Btn6D];
	clawOpen = vexRT[Btn5U];
	clawClose = vexRT[Btn5D];
	wowButton = vexRT[Btn7U];
}

// This function is essentially a shortcut for our arm code.
// It sets the motors all to the same speed, so once the function
// is used elsewhere, all motors move at the same directed speed.
void updateArmMotors(int speed)
{
	motor[top_arm] = speed;
	motor[mid_arm] = speed;
	motor[bot_arm] = speed;
}



void updateClawMotors(int speed)
{
	motor[right_claw] = -speed;
	motor[left_claw] = speed;
}
// This is the actual code for the arm. It checks whether or not
// button 6U or 6D is pressed on the joystick (6U runs the motors
// forward, 6D in reverse) and then acts accordingly. If neither
// buttons are pressed, the arm motors do not move. The same
// layout is mirrored with the claw function below.
void arm ()
{
	if(armUp == 1)
		updateArmMotors(-127);
	else if(armDown == 1)
		updateArmMotors(127);
	else
		updateArmMotors(0);
}

void claw()
{
	if(clawOpen == 1)
	{
		updateClawMotors(127);
	}
	else if(clawClose == 1)
	{
		updateClawMotors(-127);
	}
	else
		updateClawMotors(0);
}

/************************************************************/

int veerLeft = 1800;		//random val
int veerRight = 1000;		//random val
bool straightYet = false;
void gyroTesting()
{
	//if the robot begins to veer left AND if you are trying to go
	//forward, turn right a little until you go straight again??
	if((abs(SensorValue[gyro]) > veerLeft) && (abs(driveY) > 15) && straightYet)
	{
		motor[front_left_drive_m] = 127;
		motor[front_right_drive_m] = 127;
		motor[back_left_drive_m] = -127;
		motor[back_right_drive_m] = -127;

		wait1Msec(500);
		straightYet = true;
	}
	//if the robot begins to veer right AND if you are trying to go
	//forward, turn right a little until you go straight again??
	else if((abs(SensorValue[gyro]) > veerRight) && (abs(driveY) > 15) && straightYet)
	{
		motor[front_left_drive_m] = -127;
		motor[front_right_drive_m] = -127;
		motor[back_left_drive_m] = 127;
		motor[back_right_drive_m] = 127;

		wait1Msec(500);
		straightYet = true;
	}
}
