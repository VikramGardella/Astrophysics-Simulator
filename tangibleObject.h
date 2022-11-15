#ifndef TANGIBLEOBJECT_H
#define TANGIBLEOBJECT_H

/*
This header file (appended by ".h" for the file type/extension)'s purpose is to
"declare" what every instance of our custom data type (aka "Class") will have and what
it will/should be able to do. We don't have to say HOW it will do it yet -
that's what the correspondingly named .cpp (aka a "source code file") is for.

The whole mindset behind doing this in a seperate file from the source code is
because otherwise you might call some function or reference some "private member variable"
within itself that hasn't been "declared" yet. This is a crucial best practice with
C++ because if it's supposed to do something with something else that hasn't been mentioned
whatsoever yet then the compiler (a bit pessimistic, in all honestly) will
literally shit its pants out of anxiety. That's probably the best way to
explain why you'll get red error message diarrhea all over your output console.

*/


class tangibleObject {

public:

	//Constructor(s)

	tangibleObject(double m, double px, double py, double pz, double vx, double vy, double vz);

	//Accessors

	double getMass();

	double getPosX();
	double getPosY();
	double getPosZ();

	double getVelX();
	double getVelY();
	double getVelZ();

	double getAccelX();
	double getAccelY();
	double getAccelZ();

	double getNetForceX();
	double getNetForceY();
	double getNetForceZ();



	//Mutators

	void setPosX(double newPX);
	void setPosY(double newPY);
	void setPosZ(double newPZ);

	void setVelX(double newVX);
	void setVelY(double newVY);
	void setVelZ(double newVZ);

	void setAccelX(double newAccelX);
	void setAccelY(double newAccelY);
	void setAccelZ(double newAccelZ);

	void setNetForceX(double newNetForceX);
	void setNetForceY(double newNetForceY);
	void setNetForceZ(double newNetForceZ);




	//Misc. Functions

	void calcNetAccelComps();


private:

	//Private Member Variables

	double mass;

	double xPos, yPos, zPos;
	double xVel, yVel, zVel;

	double xAccel, yAccel, zAccel;
	double xNetForceComp, yNetForceComp, zNetForceComp;


};

#endif