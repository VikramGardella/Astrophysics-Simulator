#include <iostream>
#include <cstdlib>
#include <vector>
#include "tangibleObject.h"

using namespace std;

void calcGravPullVectorComps(tangibleObject* objA, tangibleObject* objB) {//pointers done right ("reference/dereference variable"-ing and whatnot?)
	//F = G*(M1*M2)/R^2


}


int main() {

	/*
	To start off, let's make a parent class for all tangible objects. That way, each child class can inherit
	universal attributes like cartesian position in three dimensions, vectors components for the relevant
	derivatives of position in respect to time (like velocity, acceleration, jerk, snap, crackle, pop, etc.).
	This will reduce redundancy in the code; we'll only need to "invent the wheel" once.

	Then we can make a dynamically resizing linear structure like a "Vector" or "ArrayList" (the Java equivalent)
	and specify that the type of variable it will hold as the parent class for tangible objects. This will grant
	the leniency to hold variables that are just are generic tangibleObject class (although we'll probably not
	end up adding data ultimately that is as vague as just the parent class upon instantiation) as well as varying
	child classes.
	*/


	cout << "\n- Vik's Astrological Physics Simulator -\n\n\n\nCurrently initializing our solar system... sit tight... easier said than done...\n\n\n\n";


	/*
	Now that we've done that, let's make sure we make a function here in the main file
	(we can leave it empty for now) so we remember to calculate the reciprocated gravitational pull of every object
	on literally every other object in existence, regardless of relative size because we're going for accuracy here.
	This is science bois, wise up, eh? Pitter patter, let's make some planets.
	*/


//initializing a "vector" (1-Dimensional/linear data structure that is dynamically resizing)
	vector<tangibleObject> allMatter;

//"instantiating" some test "astronomical beings"
	tangibleObject planetAlpha = tangibleObject(100000, -100, 0, 200, 0, 0, 0);
	tangibleObject planetBeta = tangibleObject(50000, 100, 150, -75, 0, 0, 0);
	tangibleObject planetOmega = tangibleObject(200000, 100, 100, 100, 0, 0, 0);
	tangibleObject planetDelta = tangibleObject(400000, -800, -200, 600, 0, 0, 0);

	tangibleObject starZeta = tangibleObject(10000000, 0, 0, 0, 0, 0, 0);

//adding those objects to that globally-accessible vector
	allMatter.push_back(planetAlpha);
	allMatter.push_back(planetBeta);
	allMatter.push_back(planetOmega);
	allMatter.push_back(planetDelta);

	allMatter.push_back(starZeta);


	return 0;
}
