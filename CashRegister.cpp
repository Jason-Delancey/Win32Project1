#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	//Declare variables to hold the change
	double price, payment;

	//Retrieve the value of price and payment from the user
	cout << "Hello!" << '\n' << "Please enter the price of the purchasing item:" << endl;
	cin >> price;

	cout << "Thanks! Now please enter your payment amount in the form ##.##" << endl;
	cin >> payment;
	return 0;
}