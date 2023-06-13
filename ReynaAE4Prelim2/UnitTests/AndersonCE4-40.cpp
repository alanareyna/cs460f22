/*****************************************************************************
 * Assignment: Exercise 4 - rational Class Unit Test			     *
 * Author: Claire Anderson						     *
 * Date: October 30, 2022						     *
 * File: AndersonCE4-40.cpp						     *
 * Description: This file is the unit test for the GCD method of the         *
 * 	rational class.	The default constructor and destructor will also     *
 * 	end up being called.						     *
 *****************************************************************************/

#include <iostream>
#include "rational.h"
using namespace std;

int main () {
	cout << "Test program AndersonCE4-30.cpp" << endl;
	// creating rational object
	cout << "Calling default constructor" << endl;
	rational fraction;

	//testing subtraction operator
	cout << "Testing the GCD method" << endl;
	cout << fraction.GCD(30, 10) << endl;
	cout << fraction.GCD(100, 50) << endl;
	cout << fraction.GCD(51, 17) << endl;

	//calling destructor
	cout << "Calling destructor as 'fraction' goes out of scope" << endl;
	return 0;
}
