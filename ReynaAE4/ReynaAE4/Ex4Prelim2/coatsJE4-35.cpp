/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Jared Coats                                           *
* Date: October 2022                                            *
* File: coatsJE4-35.cpp                                         *
*                                                               *
* Description: This file contains C++ code to the round method  *
*              with unsigned parameter. In addition, the output *
*              operator and destructor are called as            *
*              well as the two int constructor.                 *
****************************************************************/

#include <iostream>
#include <fstream>
#include "rational.h"

using namespace std;

int main ()
{
	cout << "Test program coatsJE4-35.cpp" << endl;
	// Calling a constructor with two ints representing numerator and denominator
	cout << "Calling constructor with two ints." << endl;
	rational fraction(24,2);
	//Testing output operator
	cout << "fraction: " << fraction << endl;

	// Testing round method with unsigned parameter
	cout << "Calling round(10) on fraction" << endl;
	fraction.round(10); // round to nearest 10
	cout << "new fraction: " << fraction << endl;
	
	// Testing destructor
	cout << "Destructor called as 'fraction' goes out of scope"
	     << endl;
	return 0;
}
