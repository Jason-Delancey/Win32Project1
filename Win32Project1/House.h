#pragma on
#ifndef HOUSE_H_
#define HOUSE_H_
#include <string>
using namespace std;

class House
{
private:
	string houseColor;
	int numBathrooms, numBedrooms;
	double squareFeet;
	static int numHouses;

public:
	//constructors
	House();
	House(string, int, int, double);

	//destructor
	~House();

	//accessor and mutator methods go here
	string getColor();
	void setColor(string);
};

#endif 