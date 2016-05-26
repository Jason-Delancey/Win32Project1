#include "Movie.h"
#include <iostream>
#include <array>
using namespace std;

//Default constructor
Movie::Movie()
{
	cout << "We will now begin collecting your 3 favorite movies!" << endl;
	int movies = 0;
	while (movies < 3)
	{
		cout << "Please enter the name of the movie: " << endl;
		cin >> aMovie;

		bool wrongYear = true;
		while (wrongYear)
		{
			cout << "What year was the movie released? " << endl;
			cin >> aYear;

			if (0 > aYear > 2016)
				wrongYear = true;
			else
				wrongYear = false;
		}

		cout << "What was the movie's rating? G-General Audience, PG-Parental Guidance, R-Restricted, M-Mature" << endl;
		cin >> aRating;
	}
	
}

//Destructor
Movie::~Movie()
{

}

//Methods
void Movie::addMovie(string movie, int year, string rating)
{
	if (movieCounter < 3)
	{
		movieNames[movieCounter] = movie;
		movieYears[movieCounter] = year;
		movieRatings[movieCounter] = rating;
		movieCounter++;
	}
}

void Movie::printMovies()
{

}