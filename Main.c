#pragma config(Sensor, dgtl1,  sol,            sensorDigitalOut)
#pragma config(Motor,  port1,            ,             tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           front_left_drive_m, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           front_right_drive_m, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           back_left_drive_m, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           back_right_drive_m, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           arm_m,         tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma platform(VEX)

//Competition Control and Duration Settings
#pragma competitionControl(Competition)
#pragma autonomousDuration(20)
#pragma userControlDuration(120)

#include "Vex_Competition_Includes.c"
#include "Drive.h"
#include "Arm.h"

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
	AutonomousCodePlaceholderForTesting();
}


task usercontrol()
{

	while (true)
	{
		drive ();
		pistons ();
		arm ();



		updateOI ();
	}
}
