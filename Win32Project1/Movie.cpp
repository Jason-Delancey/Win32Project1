#include "Movie.h"
#include <iostream>
using namespace std;
//Collect the 3 favorite movies from the user on the console.

//Default constructor
Movie::Movie()
{

}

//Destructor
Movie::~Movie()
{

}

//Methods
//Retrieves all the information from the user and stores the data in arrays
void Movie::doIt()
{
	cout << "We will now begin collecting your 3 favorite movies!" << endl;
	movieCounter = 0;
	while (movieCounter < sizeof(movieNames))
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

		cout << "What was the movie's rating? Enter one of the following letters. G-General Audience, PG-Parental Guidance, R-Restricted, M-Mature " << endl;
		cin >> aRating;

		movieNames[movieCounter] = aMovie;
		movieYears[movieCounter] = aYear;
		movieRatings[movieCounter] = aRating;
	}
}

//Prints the list of the top 3 favorite movies
void Movie::printMovies()
{
	cout << "Here is a list of the top 3 movies: " << endl;

	movieCounter = 0;
	while (movieCounter < sizeof(movieNames))
	{
		cout << "Movie "<< movieCounter+1 <<": " << movieNames[movieCounter] << endl;
		cout << "Year Released: " << movieYears[movieCounter] << endl;
		cout << "Rating: " << movieRatings[movieCounter] << endl;
		movieCounter++;
	}
}