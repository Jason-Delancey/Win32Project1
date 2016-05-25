#include "House.h"
#include <iostream>
using namespace std;

//default constructor
//calling the default constructor in the main method does not require the use of parenthesis when declaring it.
House::House()
{
	houseColor = "Blue";
	numBathrooms = 2;
	numBedrooms = 3;
	squareFeet = 1200;
	numHouses++;
}
House::House(string color, int numBath, int numBed, double sqft)
{
	houseColor = color;
	numBathrooms = numBath;
	numBedrooms = numBed;
	squareFeet = sqft;
	numHouses++;
}

//destructor method
House::~House()
{

}

//accesor methods
string House::getColor()
{
	return houseColor;
}

//mutator methods
void House::setColor(string c)
{
	houseColor = c;
}

//destructor method
House::~House()
{

}