/*void gyroYDrive(int speed) //autonomous forward drive
{
	while(abs(SensorValue[gyro]) > veerLeft)
	{	//motor values to turn right
		motor[front_left_drive_m] = speed;
		motor[front_right_drive_m] = speed;
		motor[back_left_drive_m] = -speed;
		motor[back_right_drive_m] = -speed;
	}
	while(abs(SensorValue[gyro]) > veerRight)
	{	//motor values to turn left
		motor[front_left_drive_m] = -speed;
		motor[front_right_drive_m] = -speed;
		motor[back_left_drive_m] = speed;
		motor[back_right_drive_m] = speed;
	}
}
*/


void strafeLeft(int speed)
{
	motor[front_left_drive_m] = -speed;
	motor[front_right_drive_m] = -speed;
	motor[back_left_drive_m] = -speed;
	motor[back_right_drive_m] = -speed;
}

void strafeRight(int speed)
{
	motor[front_left_drive_m] = speed;
	motor[front_right_drive_m] = speed;
	motor[back_left_drive_m] = speed;
	motor[back_right_drive_m] = speed;
}

void turnLeft(int speed)
{
	motor[front_left_drive_m] = -speed;
	motor[front_right_drive_m] = -speed;
	motor[back_left_drive_m] = speed;
	motor[back_right_drive_m] = speed;
}

void turnRight(int speed)
{
	motor[front_left_drive_m] = speed;
	motor[front_right_drive_m] = speed;
	motor[back_left_drive_m] = -speed;
	motor[back_right_drive_m] = -speed;
}

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




void fwdAuto()
{
	//raise arm 1s
	updateArmMotors(127);
	wait1Msec(1000);
	updateArmMotors(0);

	// open claw .5s
	updateClawMotors(127);
	wait1Msec(500);
	updateClawMotors(0);

	//drive fwd 2.5s
	driveForward(95);
	wait1Msec(2500);
	driveForward(0);
}

void progChallenge()
{
	//driveReverse(127, turn);			//1
	//wait1Msec(600);
	//driveReverse(0, turn);

	driveReverse(127);			//1
	wait1Msec(600);
	driveReverse(0);

	updateArmMotors(-127); 	//2
	wait1Msec(500);
	updateArmMotors(0);

	driveReverse(127); 			//3
	wait1Msec(200);
	driveReverse(0);

	updateClawMotors(127);	//4
	wait1Msec(500);
	updateClawMotors(0);

	updateClawMotors(-127);	//5
	wait1Msec(2000);
	updateClawMotors(0);

	driveReverse(127);			//6
	wait1Msec(1800);
	driveReverse(0);

	updateArmMotors(-127);	//7
	wait1Msec(900);
	updateArmMotors(0);

	updateClawMotors(127); 	//8
	wait1Msec(500);
	updateClawMotors(0);

	updateArmMotors(-127);	//7.......
	wait1Msec(100);
	updateArmMotors(0);

	updateArmMotors(127);		//9
	wait1Msec(1000);
	updateArmMotors(0);

	//-------------------------------------------------------------------------------------------------------

	driveForward(127);			//10
	wait1Msec(1800);
	driveForward(0);

	updateClawMotors(-127);	//11
	wait1Msec(500);
	updateClawMotors(0);

	driveReverse(127);			//12
	wait1Msec(2000);
	driveReverse(0);

	updateArmMotors(-127); 	//13
	wait1Msec(1200);
	updateArmMotors(0);

	updateClawMotors(127);	//14
	wait1Msec(500);
	updateClawMotors(0);

	//-------------------------------------------------------------------------------------------------------

	updateArmMotors(127);		//15
	wait1Msec(1200);
	updateArmMotors(0);

	driveForward(127);			//16
	wait1Msec(1800);
	driveForward(0);

	updateClawMotors(-127);	//16.5
	wait1Msec(800);
	updateClawMotors(0);

	driveReverse(127);			//17
	wait1Msec(2000);
	driveReverse(0);

	updateArmMotors(-127); 	//18
	wait1Msec(1000);
	updateArmMotors(0);
	wait1Msec(1000);
	updateClawMotors(127);	//19
	wait1Msec(400);
	updateClawMotors(0);

	//-------------------------------------------------------------------------------------------------------

	updateArmMotors(127);	// 19.5
	wait1Msec(500);
	updateArmMotors(0);

	driveForward(127);			//20
	wait1Msec(800);
	driveForward(0);

	//	b_engage_HH=false;
	turnLeft(127);					//21
	wait1Msec(450);
	turnLeft(0);

	//	b_engage_HH=true;
	updateArmMotors(127);
	wait1Msec(1000);
	updateArmMotors(0);


	driveForward(127);			//22
	wait1Msec(2000);
	driveForward(0);

	updateClawMotors(-127);	//23
	wait1Msec(500);
	updateClawMotors(0);

	//	b_engage_HH=false;
	turnRight(127);					//24
	wait1Msec(1000);
	turnRight(0);

	//	b_engage_HH=true;
	driveReverse(127);			//25
	wait1Msec(1000);
	driveReverse(0);

	updateArmMotors(-127); 	//26
	wait1Msec(500);
	updateArmMotors(0);

	updateClawMotors(127);	//27
	wait1Msec(500);
	updateClawMotors(0);

	updateArmMotors(127);		//28
	wait1Msec(500);
	updateArmMotors(0);

	updateClawMotors(127);	//29
	wait1Msec(500);
	updateClawMotors(0);

	driveForward(127);			//30
	wait1Msec(2000);
	driveForward(0);

	updateClawMotors(-127);	//31
	wait1Msec(500);
	updateClawMotors(0);

	driveReverse(127);			//32
	wait1Msec(1000);
	driveReverse(0);

	updateArmMotors(-127);	//33
	wait1Msec(500);
	updateArmMotors(0);

	updateClawMotors(127);	//34
	wait1Msec(500);
	updateClawMotors(0);

	updateArmMotors(127);		//35
	wait1Msec(500);
	updateArmMotors(0);

	driveForward(127);			//36
	wait1Msec(1000);
	driveForward(0);

	strafeLeft(127);				//37
	wait1Msec(1000);
	strafeLeft(0);

	driveForward(127);			//38
	wait1Msec(1000);
	driveForward(0);

	updateClawMotors(-127);	//39
	wait1Msec(500);
	updateClawMotors(0);

	driveReverse(127);			//40
	wait1Msec(1000);
	driveReverse(0);

	strafeLeft(127);				//41
	wait1Msec(1000);
	strafeLeft(0);

	driveReverse(127);			//42
	wait1Msec(1000);
	driveReverse(0);

	updateArmMotors(-127);	//43
	wait1Msec(500);
	updateArmMotors(0);

	updateClawMotors(127);	//44
	wait1Msec(500);
	updateClawMotors(0);

	updateArmMotors(127);		//45
	wait1Msec(500);
	updateArmMotors(0);

	driveForward(127);			//46
	wait1Msec(1000);
	driveForward(0);

	//	b_engage_HH=false;
	turnRight(127);					//47
	wait1Msec(1000);
	turnRight(0);

	//	b_engage_HH=true;
	driveForward(127);			//48
	wait1Msec(1000);
	driveForward(0);

	updateClawMotors(-127);	//49
	wait1Msec(500);
	updateClawMotors(0);

	strafeRight(127);				//50
	wait1Msec(1000);
	strafeRight(0);

	//	b_engage_HH=false;
	turnLeft(127);					//51
	wait1Msec(1000);
	turnLeft(0);

	//	b_engage_HH=true;
	driveReverse(127);			//52
	wait1Msec(1000);
	driveReverse(0);

	updateArmMotors(-127);	//53
	wait1Msec(500);
	updateArmMotors(0);

	updateClawMotors(127);	//54
	wait1Msec(500);
	updateClawMotors(0);

}
