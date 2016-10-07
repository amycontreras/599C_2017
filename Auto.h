void auto()
{
	arm is down

	motor[front_left_drive_m] = 127;					//drive forward for 2 sec
	motor[front_right_drive_m] = -127;
	motor[back_left_drive_m] = -127;
	motor[back_right_drive_m] = 127;
	Wait1Msec(2000);
	motor[front_left_drive_m] = 127;					//stop driving
	motor[front_right_drive_m] = -127;
	motor[back_left_drive_m] = -127;
	motor[back_right_drive_m] = 127;

	updateArmMotors(127);												//release arm one sec
	Wait1Msec(1000);
	updateArmMotors(0);

	motor[front_left_drive_m] = -127;					//drive reverse 2 sec
	motor[front_right_drive_m] = 127;
	motor[back_left_drive_m] = 127;
	motor[back_right_drive_m] = -127;
	Wait1Msec(2000);
	motor[front_left_drive_m] = 0;					//stoppp
	motor[front_right_drive_m] = 0;
	motor[back_left_drive_m] = 0;
	motor[back_right_drive_m] = 0;

	updateArmMotors(127);										//arm back down for one sec
	Wait1Msec(1000);
	updateArmMotors(0);

	motor[front_left_drive_m] = 127;				//strafe left
	motor[front_right_drive_m] = 127;
	motor[back_left_drive_m] = 127;
	motor[back_right_drive_m] = 127;
	Wait1MSec(1000);
	motor[front_left_drive_m] = 0;				//strafe left
	motor[front_right_drive_m] = 0;
	motor[back_left_drive_m] = 0;
	motor[back_right_drive_m] = 0;


	updateArmMotors(127);											//arm go back up
	Wait1Msec(1000);
	updateArmMotors(0);
}
