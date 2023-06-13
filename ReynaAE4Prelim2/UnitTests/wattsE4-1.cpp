/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Dr. Watts                                             *
* Date: October 2022                                            *
* File: wattsE4-1.cpp                                           *
*                                                               *
* Description: This file contains C++ code to test the default  *
*              constructor for rational objects.                *
*              In addition, the rational output operator (<<)   *
*              and the rational destructor will be called.      *
****************************************************************/

#include <iostream>
#include "rational.h"

using namespace std;

int main ()
{
	cout << "Test program wattsE4-1.cpp" << endl;
	// Testing default constructor
	cout << "Calling default constructor" << endl;
	rational fraction;

	// Testing output (insertion) operator
	cout << "Calling output operator" << endl;
	cout << fraction << endl;

	// Testing destructor
	cout << "Calling destructor as 'fraction' goes out of scope"
	     << endl;
	return 0;
}
