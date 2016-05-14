
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

//Get the number of dollars for the change
int getDollars(double change);

int getQuarters(int cents);

int main()
{
	//Declare variables to hold the change
	double price, payment, change;
	int dollars, cents, quarters, dimes, nickels, pennies;

	bool moreItems = true;
	while (moreItems)
	{
		string response;

		//Retrieve the price of each item from the user
		cout << "Hello!" << '\n' << "Please enter the price of the purchasing item: " << endl;
		cin >> price;

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
		cout << "Please enter your payment amount in the form $##.##" << endl;
		cin >> payment;

		if (price - payment >= 0)
		{
			cout << "I'm sorry but you did not provide enough to pay for these item." << endl;
			notEnough = true;
		}
		else
		{
			change = price - payment;
			notEnough = false;
		}
	}


	//Calculate the dollars and coins for the change due to the user
	dollars = getDollars(change);
	double temp = change - floor(change);
	cents = (int)(temp * 100);

	//Calculate the coins needed for the change
	cout << "Here is your change due: " << endl;
	cout << "Dollars: " << dollars << endl;
	cout << "Quarters: " << getQuarters(cents) << endl;

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
	int QUARTER_VALUE = 25;
	while (moreCoins)
	{
		if (cents > (QUARTER_VALUE * numOfCoins))
			numOfCoins++;
		else
			moreCoins = false;
	}

	return numOfCoins;
}