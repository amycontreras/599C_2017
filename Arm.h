void updateArmMotors(speed)
{
	motor[left_back_arm] = speed;
	motor[left_front_arm] = speed;
	motor[right_front_arm] = speed;
	motor[right_back_arm] = speed;
}

void arm ()
{
	if(vexRT[Btn6U] == 1)
	{
		updateArmMotors(127);
	}
	else
	{
		updateArmMotors(0);
	}
}
