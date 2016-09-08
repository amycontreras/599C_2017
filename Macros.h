int DEADZONE = 15;

//Drive
int fwd; 		//fwd/rev
int spin;		//turn in place
int strafe;


void updateOI()
{
	fwd = vexRT[Ch3];
	spin = vexRT[Ch4];
	strafe = vexRT[Ch2];
}
