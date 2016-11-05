#pragma config(Sensor, in1,    					pot,            sensorPotentiometer)
#pragma config(Motor,  port1,           left_wrist,    tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           front_left_drive_m, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           front_right_drive_m, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           back_left_drive_m, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           back_right_drive_m, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           left_bot_arm,  tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           left_top_arm,  tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           right_claw,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           left_claw,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          right_wrist,   tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma platform(VEX)

//Competition Control and Duration Settings
#pragma competitionControl(Competition)
#pragma autonomousDuration(20)
#pragma userControlDuration(120)

#include "Vex_Competition_Includes.c"   // Main competition background code provided by ROBOTC for VEX Robotics.
#include "Drive.h"											// Including the Drive.h file.
#include "Arm.h"												// Including the Arm.h file.
#include "Auto.h"												// Including the Auto.h file.

void pre_auton()
{
	// Set bStopTasksBetweenModes to false if you want to keep user created tasks running between
	// Autonomous and Tele-Op modes. You will need to manage all user created tasks if set to false.
	bStopTasksBetweenModes = true;

	// All activities that occur before the competition starts
	// Example: clearing encoders, setting servo positions, ...
}

task autonomous()
{
	leftAuto(); 	// STRAFES LEFT 			RIGHT SIDE OF FIELD
	//rightAuto();// STRAFES RIGHT 			LEFT SIDE OF FIELD
}


task usercontrol()
{

	while (true)
	{
		drive ();
		arm ();
		wrist ();
		claw ();
		armVariables ();
		driveVariables ();
	}
}
