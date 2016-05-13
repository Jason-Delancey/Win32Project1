
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
		bool anotherItem;
		string response;

		//Retrieve the price of each item from the user
		cout << "Hello!" << '\n' << "Please enter the price of the purchasing item: " << endl;
		cin >> price;

		cout << "Do you have another item to enter?" << endl;
		cin >> response;

		if (response.compare("true") == 0)
			anotherItem = true;
		else
			anotherItem = false;
	}

	//Retrieve the payment from the user
	bool paidEnough = false;
	while (!paidEnough)
	{
		cout << "Thanks! Now please enter your payment amount in the form $##.##" << endl;
		cin >> payment;

		if (payment - price >= 0)
		{
			change = payment - price;
			paidEnough = true;
		}
		else
		{
			cout << "I'm sorry but you did not provide enough to pay for these item.";
			paidEnough = false;
		}
	}


	return 0;
}