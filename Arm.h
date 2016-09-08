#include "Macros.h"

void arm ()
{
		while(armOn == true)
		{
			motor[arm_m] = 127;
		}
}
