int driveY = 0;
int driveX = 0;
int strafe = 0;
int DEADZONE = 15;

void driveVariables()
{
	driveY = vexRT[Ch2];
	driveX = vexRT[Ch4];
	strafe = vexRT[Ch1];
}


void drive()
{
	if(abs(driveY) > DEADZONE && abs(driveY) > abs(strafe))
	{
		motor[front_left_drive_m] = driveY;
		motor[front_right_drive_m] = -driveY;
		motor[back_left_drive_m] = -driveY;
		motor[back_right_drive_m] = driveY;
	}
	else if(abs(driveX) > 15) //TURNING
	{
		motor[front_left_drive_m] = -driveX;
		motor[front_right_drive_m] = -driveX;
		motor[back_left_drive_m] = driveX;
		motor[back_right_drive_m] = driveX;
	}
	else if(abs(strafe) > 15)
	{
		motor[front_left_drive_m] = strafe;
		motor[front_right_drive_m] = strafe;
		motor[back_left_drive_m] = strafe;
		motor[back_right_drive_m] = strafe;
	}
	else
	{
		motor[front_left_drive_m] = 0;
		motor[front_right_drive_m] = 0;
		motor[back_left_drive_m] = 0;
		motor[back_right_drive_m] = 0;
	}
}
