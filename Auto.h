void leftAuto()
{
	updateArmMotors(-70);												//release arm
	wait1Msec(3500);
	updateArmMotors(0);													// arm is up, in place

	motor[front_left_drive_m] = -85;				//strafe left	1 sec
	motor[front_right_drive_m] = -85;
	motor[back_left_drive_m] = -85;
	motor[back_right_drive_m] = -85;
	wait1Msec(1200);
	motor[front_left_drive_m] = 0;				//stop
	motor[front_right_drive_m] = 0;
	motor[back_left_drive_m] = 0;
	motor[back_right_drive_m] = 0;


	motor[front_left_drive_m] = 95;					//drive forward for 1.5 sec
	motor[front_right_drive_m] = -95;
	motor[back_left_drive_m] = -95;
	motor[back_right_drive_m] = 95;
	wait1Msec(2000);
	motor[front_left_drive_m] = 0;					//stop driving
	motor[front_right_drive_m] = 0;
	motor[back_left_drive_m] = 0;
	motor[back_right_drive_m] = 0;


	motor[front_left_drive_m] = -95;				//strafe left
	motor[front_right_drive_m] = -95;
	motor[back_left_drive_m] = -95;
	motor[back_right_drive_m] = -95;
	wait1Msec(775);
	motor[front_left_drive_m] = 0;				//stop
	motor[front_right_drive_m] = 0;
	motor[back_left_drive_m] = 0;
	motor[back_right_drive_m] = 0;


	motor[front_left_drive_m] = -95;					//drive rev for 5 sec
	motor[front_right_drive_m] = 95;
	motor[back_left_drive_m] = 95;
	motor[back_right_drive_m] = -95;
	wait1Msec(3000);
	motor[front_left_drive_m] = 0;					//stop driving
	motor[front_right_drive_m] = 0;
	motor[back_left_drive_m] = 0;
	motor[back_right_drive_m] = 0;

}


// There is currently a warning error for this function
// (the yellow X) as the robot is not processing this code.
// Only one autonomous is used at a time, so the other one
// will have a warning error due to being unues at the time.
void rightAuto()
{
	updateArmMotors(-70);												//release arm
	wait1Msec(3500);
	updateArmMotors(0);													// arm is up, in place

	motor[front_left_drive_m] = 85;				//strafe right	1 sec
	motor[front_right_drive_m] = 85;
	motor[back_left_drive_m] = 85;
	motor[back_right_drive_m] = 85;
	wait1Msec(1200);
	motor[front_left_drive_m] = 0;				//stop
	motor[front_right_drive_m] = 0;
	motor[back_left_drive_m] = 0;
	motor[back_right_drive_m] = 0;


	motor[front_left_drive_m] = 95;					//drive forward for 1.5 sec
	motor[front_right_drive_m] = -95;
	motor[back_left_drive_m] = -95;
	motor[back_right_drive_m] = 95;
	wait1Msec(2000);
	motor[front_left_drive_m] = 0;					//stop driving
	motor[front_right_drive_m] = 0;
	motor[back_left_drive_m] = 0;
	motor[back_right_drive_m] = 0;


	motor[front_left_drive_m] = 95;				//strafe right
	motor[front_right_drive_m] = 95;
	motor[back_left_drive_m] = 95;
	motor[back_right_drive_m] = 95;
	wait1Msec(775);
	motor[front_left_drive_m] = 0;				//stop
	motor[front_right_drive_m] = 0;
	motor[back_left_drive_m] = 0;
	motor[back_right_drive_m] = 0;


	motor[front_left_drive_m] = -95;					//drive rev for 5 sec
	motor[front_right_drive_m] = 95;
	motor[back_left_drive_m] = 95;
	motor[back_right_drive_m] = -95;
	wait1Msec(3000);
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
