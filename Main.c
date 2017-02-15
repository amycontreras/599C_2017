#pragma config(Sensor, dgtl1,  Right_encoder,   sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  Left_encoder,  sensorQuadEncoder)
#pragma config(Motor,  port1,           right_claw,    tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           front_left_drive_m, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           front_right_drive_m, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           top_arm,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           mid_arm,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           back_left_drive_m, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           back_right_drive_m, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           bot_arm,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          left_claw,     tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma platform(VEX)

//Competition Control and Duration Settings
#pragma competitionControl(Competition)
#pragma autonomousDuration(20)
#pragma userControlDuration(120)
//global nav and heading hold
int test = 0;
int testjoy = 0;
int Left_cnt = 0;
int Right_cnt = 0;
int dist_cnt = 0;
int delta_cnt = 0;
bool b_engage_HH = true;
int turn = 0 ;  // turn motor command from heading hold function.
float KP = 1.;  //this is PID KP gain between delta motor command and delta.cnt.
#include "Vex_Competition_Includes.c"   // Main competition background code provided by ROBOTC for VEX Robotics.
#include "Drive.h"											// Including the Drive.h file.
#include "Arm.h"												// Including the Arm.h file.
#include "Auto.h"												// Including the Auto.h file.


task Nav()
{
	while(true){
		Left_cnt = SensorValue(Left_encoder);
		Right_cnt = SensorValue(Right_encoder);
		delta_cnt = (Left_cnt -Right_cnt);
		dist_cnt =(Left_cnt+Right_cnt)/2;
		wait1Msec(10);
	}
}

task HeadingHold()
{
	while(true)
	{
		if(b_engage_HH)
		{
			turn = -delta_cnt*KP;
		}
		else
		{
			turn = 0;
		}

		wait1Msec(10);// give other tasks some time to run
	}
}
void pre_auton()
{
	// Set bStopTasksBetweenModes to false if you want to keep user created tasks running between
	// Autonomous and Tele-Op modes. You will need to manage all user created tasks if set to false.
	bStopTasksBetweenModes = true;
	SensorValue(Left_encoder) = 0;
	SensorValue(Right_encoder) = 0;
	b_engage_HH = false;
	startTask(Nav);
	startTask(HeadingHold);

	// All activities that occur before the competition starts
	// Example: clearing encoders, setting servo positions, etc
}

task autonomous()
{
	progChallenge();
}

task usercontrol()
{
	//progChallenge();
	while (true)
	{
		drive ();
		arm ();
		claw ();
		armVariables ();
		driveVariables ();
		wait1Msec(10);
	}
}
