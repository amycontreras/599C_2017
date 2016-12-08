void driveReverse(int speed)
{
	motor[front_left_drive_m] = -speed;
	motor[front_right_drive_m] = speed;
	motor[back_left_drive_m] = speed;
	motor[back_right_drive_m] = -speed;
}

void driveForward(int speed)
{
	motor[front_left_drive_m] = speed;
	motor[front_right_drive_m] = -speed;
	motor[back_left_drive_m] = -speed;
	motor[back_right_drive_m] = speed;
}

void strafeRight(int speed)
{
	motor[front_left_drive_m] = speed;
	motor[front_right_drive_m] = speed;
	motor[back_left_drive_m] = speed;
	motor[back_right_drive_m] = speed;
}

void strafeLeft(int speed)
{
	motor[front_left_drive_m] = -speed;
	motor[front_right_drive_m] = -speed;
	motor[back_left_drive_m] = -speed;
	motor[back_right_drive_m] = -speed;
}




void middleAuto()	 // you can change these time values!!!
{
	strafeLeft(95);
	wait1Msec(1000);
	strafeLeft(0);

	// open claw .5s
	updateClawMotors(127);
	wait1Msec(500);
	updateClawMotors(0);


	driveForward(95);
	wait1Msec(1000);
	driveForward(0);


	// close claw .5s
	updateClawMotors(-127);
	wait1Msec(500);
	updateClawMotors(0);


	driveReverse(95);
	wait1Msec(1000);
	driveReverse(0);


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


	driveForward(95);
	wait1Msec(1000);
	driveForward(0);
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
	driveForward(95);
	wait1Msec(2500);
	driveForward(0);
}




void rightAuto()
{
	// FACE ROBOT SIDEWAYS

	updateClawMotors(127);			// open claw .5s
	wait1Msec(500);
	updateClawMotors(0);

	updateArmMotors(127); 	//raise arm 1s
	wait1Msec(1000);
	updateArmMotors(0);

	strafeLeft(95);						//strafe left	1.2 sec TO TILE
	wait1Msec(1200);
	strafeLeft(0);


	driveForward(95);
	wait1Msec(2000);
	driveForward(0);

	strafeLeft(95);						//strafe left TO FENCE
	wait1Msec(775);
	strafeLeft(0);


	driveReverse(95);						//drive rev for 3 sec ALONG STARS
	wait1Msec(3000);
	driveReverse(0);

}



// There is currently a warning error for this function
// (the yellow X) as the robot is not processing this code.
// Only one autonomous is used at a time, so the other one
// will have a warning error due to being unues at the time.
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


	strafeRight(95);			   //strafe right	1.2 sec TO TILE
	wait1Msec(1200);
	strafeRight(0);

	driveForward(95);					//drive forward for 2 sec TO WALL
	wait1Msec(2000);
	driveForward(0);


	strafeRight(95);		  	//strafe right TO FENCE
	wait1Msec(775);
	strafeRight(0);


	driveReverse(95);			  //drive rev for 3 sec
	wait1Msec(3000);
	driveReverse(0);
}




void totalLeftAuto() //ALL STARS, BEG AT LEFT SIDE
{

	strafeRight(100);				   //strafe right	1.2 sec TO TILE
	wait1Msec(1200);
	strafeRight(0);

	updateClawMotors(-127);
	wait1Msec(500);
	updateClawMotors(0);

	updateArmMotors(-127);
	wait1Msec(700);
	updateArmMotors(0);



	driveForward(100);				//drive forward for 1.5 sec TO WALL
	wait1Msec(2000);
	driveForward(0);


	strafeRight(120);			  	//strafe right TO FENCE
	wait1Msec(900);
	strafeRight(0);


	driveReverse(100);			  //drive rev for 2 sec FOR LEFT STARS
	wait1Msec(2000);
	driveReverse(0);

	strafeLeft(100);				   //strafe LEFT	.3 sec TO TILE, OFF CORNER
	wait1Msec(200);
	strafeLeft(0);

	driveReverse(100);			  //drive rev for .5 sec PASS FOOT
	wait1Msec(400);
	driveReverse(0);


	strafeRight(100);			  	//strafe right TO FENCE
	wait1Msec(200);
	strafeRight(0);


	driveReverse(100);			  //drive rev for 2 sec FOR MIDDLE STARS
	wait1Msec(2000);
	driveReverse(0);


	strafeLeft(100);				   //strafe LEFT	1 sec TO TILE, OFF CORNER
	wait1Msec(200);
	strafeLeft(0);

	driveReverse(100);			  //drive rev for 1 sec PASS FOOT
	wait1Msec(400);
	driveReverse(0);

	strafeRight(100);				   //strafe right	1 sec TO FENCE
	wait1Msec(300);
	strafeRight(0);

	driveReverse(100);			  //drive rev for 3 sec FOR RIGHT STARS
	wait1Msec(2000);
	driveReverse(0);
}




void totalRightAuto()
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


	motor[front_left_drive_m] = -95;						//drive rev for 7 sec
	motor[front_right_drive_m] = 95;
	motor[back_left_drive_m] = 95;
	motor[back_right_drive_m] = -95;
	wait1Msec(7000);
	motor[front_left_drive_m] = 0;							//stop
	motor[front_right_drive_m] = 0;
	motor[back_left_drive_m] = 0;
	motor[back_right_drive_m] = 0;
}


void doLeft()
{
	driveForward(127);
	wait1Msec(1000);
	driveForward(0);

	strafeLeft(100);
	wait1Msec(2000);
	strafeLeft(0);

	strafeRight(100);
	wait1Msec(1000);
	strafeRight(0);

	driveReverse(127);
	wait1Msec(1500);
	driveReverse(0);


	updateClawMotors(-127);
	wait1Msec(500);
	updateClawMotors(0);

	driveForward(127);
	wait1Msec(950);
	driveForward(0);

	driveForward(127);
	wait1Msec(600);
	updateArmMotors(-127);
	wait1Msec(800);
	updateArmMotors(0);
	wait1Msec(600);
	driveForward(0);

}


void doRight()
{
													// drive forward
	driveForward(127);
	wait1Msec(1200);
	driveForward(0);

													// strafe right
	strafeRight(100);
	wait1Msec(2000);
	strafeRight(0);

													// strafe left
	strafeLeft(100);
	wait1Msec(1000);
	strafeLeft(0);

													// drive reverse
	driveReverse(127);
	wait1Msec(1500);
	driveReverse(0);

													// close claw
	updateClawMotors(-127);
	wait1Msec(500);
	updateClawMotors(0);

													// drive forward
	driveForward(127);
	wait1Msec(950);
	driveForward(0);


													// drive forward while raising arm
	driveForward(127);
	wait1Msec(1500);
	updateArmMotors(-127);
	wait1Msec(600);
	updateArmMotors(0);
	driveForward(0);

}
