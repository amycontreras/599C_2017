//#include "Macros.h"

void arm ()
{
		while(vexRT[Btn7U] == true)
		{
			motor[arm_m] = 127;
		}
}

void pistons()
{
		if(vexRT[Btn7L] == 1)
		{
			SensorValue[sol] = 1;
		}
		else if(vexRT[Btn7R] == 1)
		{
			SensorValue[sol] = 0;
		}
}
