#include "tangibleObject.h"

/*
Okay, now that we've pacified the compiler's anxiety in advance, take note: it also has separation
anxiety with its corresponding source code file. Here in our .cpp (aka "source code file") we'll need
to mention its header file with that include statement up above. Think of it as the steady-headed source
code file holding the header file's handed and reassuring it there's no need for fretting nor
pants-shittage.
*/



//Constructor(s)

tangibleObject::tangibleObject(double m, double px, double py, double pz, double vx, double vy, double vz) {
	mass = m;

	xPos = px;
	yPos = py;
	zPos = pz;

	xVel = vx;
	yVel = vy;
	zVel = vz;

	xAccel = 0;
	yAccel = 0;
	zAccel = 0;

	xNetForceComp = 0;
	yNetForceComp = 0;
	zNetForceComp = 0;
}

//Accessors

/*
I know these "accessors" (aka "getters" in C#, where the mutators are referred to as "setters" fyi),
but this is a good practice for making sure data is protected. It's like requesting consent for access
to one's privates... I can't think of a better way to put that but now that the US has come to their
senses and that spray-tanned orangatuan isn't president anymore, this is the proper way to go about things.
*/

double tangibleObject::getMass() { return mass; }

double tangibleObject::getPosX() { return xPos; }
double tangibleObject::getPosY() { return yPos; }
double tangibleObject::getPosZ() { return zPos; }

double tangibleObject::getVelX() { return xVel; }
double tangibleObject::getVelY() { return yVel; }
double tangibleObject::getVelZ() { return zVel; }

double tangibleObject::getAccelX() { return xAccel; }
double tangibleObject::getAccelY() { return yAccel; }
double tangibleObject::getAccelZ() { return zAccel; }

double tangibleObject::getNetForceX() { return xNetForceComp; }
double tangibleObject::getNetForceY() { return yNetForceComp; }
double tangibleObject::getNetForceZ() { return zNetForceComp; }



//Mutators

void tangibleObject::setPosX(double newPX) { xPos = newPX; }
void tangibleObject::setPosY(double newPY) { yPos = newPY; }
void tangibleObject::setPosZ(double newPZ) { zPos = newPZ; }

void tangibleObject::setVelX(double newVX) { xVel = newVX; }
void tangibleObject::setVelY(double newVY) { yVel = newVY; }
void tangibleObject::setVelZ(double newVZ) { zVel = newVZ; }

void tangibleObject::setAccelX(double newAccelX) { xAccel = newAccelX; }
void tangibleObject::setAccelY(double newAccelY) { yAccel = newAccelY; }
void tangibleObject::setAccelZ(double newAccelZ) { zAccel = newAccelZ; }

void tangibleObject::setNetForceX(double newNetForceX) { xNetForceComp = newNetForceX; }
void tangibleObject::setNetForceY(double newNetForceY) { yNetForceComp = newNetForceY; }
void tangibleObject::setNetForceZ(double newNetForceZ) { zNetForceComp = newNetForceZ; }




//Misc. Functions

void tangibleObject::calcNetAccelComps() {
	/*
	Remember: F=m*a (where "F" is force, "m" is mass, and "a" is acceleration).
	After one-step algebraic manipulation, we have:

	(Acceleration) = (Force)/(Mass)

	Since we're dealing with components vectorized in 3-dimensional cartesian space,
	we need to calculate the acceleration components using their corresponding "Force"
	components (and mass is the same regardless of vector component in question).
	*/

	xAccel = xNetForceComp / mass;
	yAccel = yNetForceComp / mass;
	zAccel = zNetForceComp / mass;
}