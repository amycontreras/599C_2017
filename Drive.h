//#include "Macros.h"

void updateDriveMotors(int front, int back, int left, int right)
{
		motor[front_left_drive_m] = front && left;
		motor[front_right_drive_m] = front && right;
		motor[back_left_drive_m] = back && left;
		motor[back_right_drive_m] = back && right;
}

void drive()
{
	if(abs(vexRT[Ch2]) > 15)
	{
		motor[front_left_drive_m] = vexRT[Ch2];
		motor[front_right_drive_m] = -vexRT[Ch2];
		motor[back_left_drive_m] = -vexRT[Ch2];
		motor[back_right_drive_m] = vexRT[Ch2];
	}
	else if(abs(vexRT[Ch1]) > 15)
	{
		motor[front_left_drive_m] = vexRT[Ch1];
		motor[front_right_drive_m] = vexRT[Ch1];
		motor[back_left_drive_m] = -vexRT[Ch1];
		motor[back_right_drive_m] = -vexRT[Ch1];
	}
	else if(abs(vexRT[Ch4]) > 15)
	{
		motor[front_left_drive_m] = vexRT[Ch4];
		motor[front_right_drive_m] = vexRT[Ch4];
		motor[back_left_drive_m] = vexRT[Ch4];
		motor[back_right_drive_m] = vexRT[Ch4];
	}
	else
	{
		motor[front_left_drive_m] = 0;
		motor[front_right_drive_m] = 0;
		motor[back_left_drive_m] = 0;
		motor[back_right_drive_m] = 0;
	}
}
