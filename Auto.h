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



























void fwdAuto()
{
	// open claw .5s
	updateClawMotors(127);
	wait1Msec(500);
	updateClawMotors(0);

	//raise arm 1s
	updateArmMotors(127);
	wait1Msec(1000);
	updateArmMotors(0);

	//drive fwd 2.5s
	motor[front_left_drive_m] = 95;
	motor[front_right_drive_m] = -95;
	motor[back_left_drive_m] = -95;
	motor[back_right_drive_m] = 95;
	wait1Msec(2500);
	motor[front_left_drive_m] = 0;							//stop
	motor[front_right_drive_m] = 0;
	motor[back_left_drive_m] = 0;
	motor[back_right_drive_m] = 0;
}


void leftAuto()
{
	// open claw .5s
	updateClawMotors(127);
	wait1Msec(500);
	updateClawMotors(0);

	//raise arm 1s
	updateArmMotors(127);
	wait1Msec(1000);
	updateArmMotors(0);


	motor[front_left_drive_m] = -85;						//strafe left	1.2 sec
	motor[front_right_drive_m] = -85;
	motor[back_left_drive_m] = -85;
	motor[back_right_drive_m] = -85;
	wait1Msec(1200);
	motor[front_left_drive_m] = 0;							//stop
	motor[front_right_drive_m] = 0;
	motor[back_left_drive_m] = 0;
	motor[back_right_drive_m] = 0;


	motor[front_left_drive_m] = 95;							//drive forward for 2 sec
	motor[front_right_drive_m] = -95;
	motor[back_left_drive_m] = -95;
	motor[back_right_drive_m] = 95;
	wait1Msec(2000);
	motor[front_left_drive_m] = 0;							//stop
	motor[front_right_drive_m] = 0;
	motor[back_left_drive_m] = 0;
	motor[back_right_drive_m] = 0;


	motor[front_left_drive_m] = -95;						//strafe left
	motor[front_right_drive_m] = -95;
	motor[back_left_drive_m] = -95;
	motor[back_right_drive_m] = -95;
	wait1Msec(775);
	motor[front_left_drive_m] = 0;							//stop
	motor[front_right_drive_m] = 0;
	motor[back_left_drive_m] = 0;
	motor[back_right_drive_m] = 0;


	motor[front_left_drive_m] = -95;						//drive rev for 3 sec
	motor[front_right_drive_m] = 95;
	motor[back_left_drive_m] = 95;
	motor[back_right_drive_m] = -95;
	wait1Msec(3000);
	motor[front_left_drive_m] = 0;							//stop
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
	// open claw .5s
	updateClawMotors(127);
	wait1Msec(500);
	updateClawMotors(0);

	//raise arm 1s
	updateArmMotors(127);
	wait1Msec(1000);
	updateArmMotors(0);


	motor[front_left_drive_m] = 85;				   //strafe right	1.2 sec
	motor[front_right_drive_m] = 85;
	motor[back_left_drive_m] = 85;
	motor[back_right_drive_m] = 85;
	wait1Msec(1200);
	motor[front_left_drive_m] = 0;			   	//stop
	motor[front_right_drive_m] = 0;
	motor[back_left_drive_m] = 0;
	motor[back_right_drive_m] = 0;


	motor[front_left_drive_m] = 95;					//drive forward for 2 sec
	motor[front_right_drive_m] = -95;
	motor[back_left_drive_m] = -95;
	motor[back_right_drive_m] = 95;
	wait1Msec(2000);
	motor[front_left_drive_m] = 0;					//stop driving
	motor[front_right_drive_m] = 0;
	motor[back_left_drive_m] = 0;
	motor[back_right_drive_m] = 0;


	motor[front_left_drive_m] = 95;			  	//strafe right
	motor[front_right_drive_m] = 95;
	motor[back_left_drive_m] = 95;
	motor[back_right_drive_m] = 95;
	wait1Msec(775);
	motor[front_left_drive_m] = 0;			  	//stop
	motor[front_right_drive_m] = 0;
	motor[back_left_drive_m] = 0;
	motor[back_right_drive_m] = 0;


	motor[front_left_drive_m] = -95;			  //drive rev for 3 sec
	motor[front_right_drive_m] = 95;
	motor[back_left_drive_m] = 95;
	motor[back_right_drive_m] = -95;
	wait1Msec(3000);
	motor[front_left_drive_m] = 0;					//stop driving
	motor[front_right_drive_m] = 0;
	motor[back_left_drive_m] = 0;
	motor[back_right_drive_m] = 0;
}
