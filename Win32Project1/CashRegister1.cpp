
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

//Global variables
int const QUARTER_VALUE = 25;
int const DIMES_VALUE = 10;
int const NICKELS_VALUE = 5;
int const PENNIES_VALUE = 1;


//Get the number of dollars/coins for the change
int getDollars(double change);
int getQuarters(int cents);
int getDimes(int cents);
int getNickels(int cents);
int getPennies(int cents);

int main()
{
	//Declare variables to hold the change
	double price = 0, aPrice = 0, payment, change;
	int dollars, cents, quarters, dimes, nickels, pennies;

	bool moreItems = true;
	while (moreItems)
	{
		string response;

		//Retrieve the price of each item from the user
		cout << "Please enter the price of the purchasing item using format $##.##: " << endl;
		cin >> aPrice;
		price += aPrice;

		cout << "Do you have another item to enter?" << endl;
		cin >> response;

		if (response.compare("yes") == 0)
			moreItems = true;
		else
			moreItems = false;
	}

	//Retrieve the payment from the user
	bool notEnough = true;
	while (notEnough)
	{
		cout << "Please enter your payment amount using the form $##.##" << endl;
		cin >> payment;

		if (price - payment > 0)
		{
			cout << "I'm sorry but you did not provide enough to pay for these item." << endl;
			notEnough = true;
		}
		else
		{
			change = payment - price;
			notEnough = false;
		}
	}


	//Calculate the dollars and coins for the change due to the user
	dollars = getDollars(change);
	double temp = change - floor(change);
	cents = (int)(temp * 100);

	//Calculate the coins needed for the change
	cout << "Here is your change due: " << change << endl;
	cout << "Dollars: " << dollars << endl;
	cout << "Quarters: " << getQuarters(cents) << endl;
	cents = cents - (getQuarters(cents) * QUARTER_VALUE);
	cout << "Dimes: " << getDimes(cents) << endl;
	cents = cents - (getDimes(cents) * DIMES_VALUE);
	cout << "Nickels: " << getNickels(cents) << endl;
	cents = cents - (getNickels(cents) * NICKELS_VALUE);
	cout << "Pennies: " << getPennies(cents) << endl;
	cents = cents - (getPennies(cents) * PENNIES_VALUE);

	return 0;
}


int getDollars(double change)
{
	int dollars = (int) change;
	return dollars;
}

int getQuarters(int cents)
{
	bool moreCoins = true;
	int numOfCoins = 0;
	while (moreCoins)
	{
		if (cents > (QUARTER_VALUE * (numOfCoins + 1)) && cents >= QUARTER_VALUE && cents)
			numOfCoins++;
		else
			moreCoins = false;
	}

	return numOfCoins;
}

int getDimes(int cents)
{
	bool moreCoins = true;
	int numOfCoins = 0;
	while (moreCoins)
	{
		if (cents > (DIMES_VALUE * (numOfCoins + 1)) && cents >= DIMES_VALUE)
			numOfCoins++;
		else
			moreCoins = false;
	};

	return numOfCoins;
}

int getNickels(int cents)
{
	bool moreCoins = true;
	int numOfCoins = 0;
	while (moreCoins)
	{
		if (cents > (NICKELS_VALUE * (numOfCoins + 1)) && cents >= NICKELS_VALUE)
			numOfCoins++;
		else
			moreCoins = false;
	}

	return numOfCoins;
}

int getPennies(int cents)
{
	bool moreCoins = true;
	int numOfCoins = 0;
	while (moreCoins)
	{
		if (cents > (PENNIES_VALUE * numOfCoins) && cents >= PENNIES_VALUE)
			numOfCoins++;
		else
			moreCoins = false;
	}

	return numOfCoins;
}