//#include "Macros.h"

void arm ()
{
		if(vexRT[Btn6U] == 1)
		{
			motor[left_back_arm] = 127;
			motor[left_front_arm] = 127;
			motor[right_front_arm] = 127;
			motor[right_back_arm] = 127;
		}
		else
		{
			motor[left_back_arm] = 0;
			motor[left_front_arm] = 0;
			motor[right_front_arm] = 0;
			motor[right_back_arm] = 0;
		}
}
