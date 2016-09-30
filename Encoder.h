	int armButton = vexRT[btn8u];
	int encoderVal;
	int maxVal = //;
	int minVal = //;


	SensorValue[encoderVal] = 0;								// starts at 0
	motor[armMotor] = 127;											// motor starts at half speed

task main()
{
	if(armButton == 1)													// button is pressed
	{
		if(sensorValue[encoderVal] > minVal)
			motor[armMotor] = 127;									// motor moves
			wait1Msec																// wait time for it to move up
			sensorValue[encoderVal] = 0;						// resets
		if(sensorValue[encoderVal] < maxVal)			// encoder is greater than 0
			motor[armMotor] = 127;									// motor moves
			wait1Msec																// wait time for it to move back down
			sensorValue[encoderVal] = 0;						// encoder resets
		else if(sensorValue[encoderVal] == 0)			// special angle
			motor[armMotor] = 0;										// motor stops
	}
}
// set to 0 twice, split up function
