//DEADZONE eliminates human error when driving. It is essentially
// an area around the joystick, a zone, that does not allow the
// robot to drive. The joystick must be moved a sufficient amount
// past the DEADZONE in order for the robot to move.
int DEADZONE = 15;

// INITIALIZING DRIVE VARIABLES
int driveY = 0;
int driveX = 0;
int strafeR = 0;
int strafeL = 0;

// UDPATING DRIVE VARIABLES
void driveVariables()
{
	driveY = vexRT[Ch3];
	driveX = vexRT[Ch1];
	strafeL = vexRT[Btn8L];
	strafeR = vexRT[Btn8R];
}

// This robot's physical structure requires holonomic drive code.
// Each motor is specifically modified so it runs in the positive
// or negative direction. This code checks whether or not the joystick
// channels are being accessed. By using an absolute value, the code
// within the 'if' statement is shortened.
void drive()
{
	// Notice how driveY must be greater than the strafing joystick to
	// move. This eliminates one movement overriding the other, and
	// creates smooth transitions between fwd/rev driving and strafing.
	if(abs(driveY) > DEADZONE)	// FWD REV
	{
		motor[front_left_drive_m] = driveY;
		motor[front_right_drive_m] = -driveY;
		motor[back_left_drive_m] = -driveY;
		motor[back_right_drive_m] = driveY;
	}
	else if(abs(driveX) > 15) 															// TURN
	{
		motor[front_left_drive_m] = driveX;
		motor[front_right_drive_m] = driveX;
		motor[back_left_drive_m] = -driveX;
		motor[back_right_drive_m] = -driveX;
	}
	else if(strafeR == 1)																// STRAFE
	{
		motor[front_left_drive_m] = 127;
		motor[front_right_drive_m] = 127;
		motor[back_left_drive_m] = 127;
		motor[back_right_drive_m] = 127;
	}
	else if(strafeL == 1)
	{
		motor[front_left_drive_m] = -127;
		motor[front_right_drive_m] = -127;
		motor[back_left_drive_m] = -127;
		motor[back_right_drive_m] = -127;
	}
	else																										// STOP
	{
		motor[front_left_drive_m] = 0;
		motor[front_right_drive_m] = 0;
		motor[back_left_drive_m] = 0;
		motor[back_right_drive_m] = 0;
	}
}
