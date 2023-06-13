/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program. *
* Author: Tyler Whitmarsh *
* Date: October 2022 *
* File: WhitmarshTE4-9.cpp *
* *
* Description: This file contains C++ code to test the double *
* constructor for rational objects. *
* In addition, the rational output operator (<<) *
* and the rational destructor will be called. *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
	cout << "Test program WhitmarshTE4-9.cpp" << endl;
// Testing double constructor
	cout << "Calling double constructor with 12.12 as the double" << endl;
	double mynum = 12.12;
	rational fraction(mynum);


// Testing output (insertion) operator
	cout << "Calling output operator" << endl;
	cout << fraction << endl;
	cout << "output should be 303/25" <<endl;

// Testing destructor
	cout << "Calling destructor as 'fraction' goes out of scope"
		 << endl;
	return 0;
}
