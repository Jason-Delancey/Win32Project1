#pragma once
#ifndef MOVIE_H_
#define MOVIE_H_
#include <string>
using namespace std;

class Movie
{
private:
	string movieNames[3], movieRatings[3], aMovie, aRating;
	int movieYears[3], aYear, movieCounter;

public:
	//Constructor
	Movie();

	//Destructor
	~Movie();

	//Methods
	void doIt();
	void printMovies();

};

#endif