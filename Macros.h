int DEADZONE = 15;

//Drive
int fwd; 		//fwd/rev
int spin;		//turn in place
int strafe;

//Arm
int armOn; //hold to move

void updateOI()
{
	fwd = vexRT[Ch2];
	spin = vexRT[Ch4];
	strafe = vexRT[Ch1];

	armOn = vexRT[Btn7U];

}
