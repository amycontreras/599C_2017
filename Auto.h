void newAuto()	 // you can change these time values!!!
{
	motor[front_left_drive_m] = -63;						//strafe left for one second
	motor[front_right_drive_m] = -63;						//max speed is 127, this is half speed currently
	motor[back_left_drive_m] = -63;
	motor[back_right_drive_m] = -63;
	wait1Msec(1000);
	motor[front_left_drive_m] = 0;							//stop
	motor[front_right_drive_m] = 0;
	motor[back_left_drive_m] = 0;
	motor[back_right_drive_m] = 0;

	// open claw .5s
	updateClawMotors(127);
	wait1Msec(500);
	updateClawMotors(0);


	motor[front_left_drive_m] = 95;							//drive forward for 1 sec
	motor[front_right_drive_m] = -95;
	motor[back_left_drive_m] = -95;
	motor[back_right_drive_m] = 95;
	wait1Msec(1000);
	motor[front_left_drive_m] = 0;							//stop
	motor[front_right_drive_m] = 0;
	motor[back_left_drive_m] = 0;
	motor[back_right_drive_m] = 0;


	// close claw .5s
	updateClawMotors(-127);
	wait1Msec(500);
	updateClawMotors(0);


	motor[front_left_drive_m] = -95;							//drive reverse for 1 sec
	motor[front_right_drive_m] = 95;
	motor[back_left_drive_m] = 95;
	motor[back_right_drive_m] = -95;
	wait1Msec(1000);
	motor[front_left_drive_m] = 0;							//stop
	motor[front_right_drive_m] = 0;
	motor[back_left_drive_m] = 0;
	motor[back_right_drive_m] = 0;


	//raise arm 1s
	updateArmMotors(127);
	wait1Msec(1000);
	updateArmMotors(0);


	// open claw .5s
	updateClawMotors(127);
	wait1Msec(500);
	updateClawMotors(0);


	//lower arm 1s
	updateArmMotors(-127);
	wait1Msec(1000);
	updateArmMotors(0);


	motor[front_left_drive_m] = 95;							//drive forward for 1 sec
	motor[front_right_drive_m] = -95;
	motor[back_left_drive_m] = -95;
	motor[back_right_drive_m] = 95;
	wait1Msec(1000);
	motor[front_left_drive_m] = 0;							//stop
	motor[front_right_drive_m] = 0;
	motor[back_left_drive_m] = 0;
	motor[back_right_drive_m] = 0;
}
