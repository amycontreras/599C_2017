//#include "Macros.h"

int driveY = 0;
int driveX = 0;
int strafe = 0;
int DEADZONE = 15;

void updateOI()
{
	driveY = vexRT[Ch2];
	driveX = vexRT[Ch4];
	strafe = vexRT[Ch1];
}

/*
void updateDriveMotors(int front, int back, int left, int right)
{
		motor[front_left_drive_m] = front && left;
		motor[front_right_drive_m] = front && right;
		motor[back_left_drive_m] = back && left;
		motor[back_right_drive_m] = back && right;
}*/

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
