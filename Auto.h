void autonono()
{
	updateArmMotors(-127);												//release arm
	wait1Msec(3000);
	updateArmMotors(0);													// arm is up, in place

	motor[front_left_drive_m] = 95;				//strafe right 1 sec
	motor[front_right_drive_m] = 95;
	motor[back_left_drive_m] = 95;
	motor[back_right_drive_m] = 95;
	wait1Msec(1200);
	motor[front_left_drive_m] = 0;				//stop
	motor[front_right_drive_m] = 0;
	motor[back_left_drive_m] = 0;
	motor[back_right_drive_m] = 0;


	motor[front_left_drive_m] = 95;					//drive forward for 1.5 sec
	motor[front_right_drive_m] = -95;
	motor[back_left_drive_m] = -95;
	motor[back_right_drive_m] = 95;
	wait1Msec(1250);
	motor[front_left_drive_m] = 0;					//stop driving
	motor[front_right_drive_m] = 0;
	motor[back_left_drive_m] = 0;
	motor[back_right_drive_m] = 0;


	motor[front_left_drive_m] = 95;				//strafe right
	motor[front_right_drive_m] = 95;
	motor[back_left_drive_m] = 95;
	motor[back_right_drive_m] = 95;
	wait1Msec(785);
	motor[front_left_drive_m] = 0;				//stop
	motor[front_right_drive_m] = 0;
	motor[back_left_drive_m] = 0;
	motor[back_right_drive_m] = 0;


	motor[front_left_drive_m] = -95;					//drive rev for 5 sec
	motor[front_right_drive_m] = 95;
	motor[back_left_drive_m] = 95;
	motor[back_right_drive_m] = -95;
	wait1Msec(5000);
	motor[front_left_drive_m] = 0;					//stop driving
	motor[front_right_drive_m] = 0;
	motor[back_left_drive_m] = 0;
	motor[back_right_drive_m] = 0;

}

// s right
// fwd
// s right
// lift arm
// rev
