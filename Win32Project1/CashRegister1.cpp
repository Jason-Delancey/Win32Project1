
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	//Declare variables to hold the change
	double price, payment, change;
	int dollars, quarters, dimes, nickels, pennies;

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


	return 0;
}