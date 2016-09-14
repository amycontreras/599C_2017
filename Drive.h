#include "Macros.h"

void drive()
{
	if(fwd > DEADZONE)
	{
		motor[front_left_drive_m] = fwd;
		motor[front_right_drive_m] = -fwd;
		motor[back_left_drive_m] = fwd;
		motor[back_right_drive_m] = -fwd;
	}
	else if(fwd < - DEADZONE)
	{
		motor[front_left_drive_m] = -fwd;
		motor[front_right_drive_m] = fwd;
		motor[back_left_drive_m] = -fwd;
		motor[back_right_drive_m] = fwd;
	}
	else if(spin > DEADZONE)
	{
		motor[front_left_drive_m] = spin;
		motor[front_right_drive_m] = spin;
		motor[back_left_drive_m] = spin;
		motor[back_right_drive_m] = spin;
	}
	else if(strafe > DEADZONE)
	{
		motor[front_left_drive_m] = -strafe;
		motor[front_right_drive_m] = strafe;
		motor[back_left_drive_m] = strafe;
		motor[back_right_drive_m] = -strafe;
	}
	else
	{
		motor[front_left_drive_m] = 0;
		motor[front_right_drive_m] = 0;
		motor[back_left_drive_m] = 0;
		motor[back_right_drive_m] = 0;
	}
}
