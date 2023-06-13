/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program. *
* Author: Tyler Whitmarsh *
* Date: October 2022 *
* File: WhitmarshTE4-39.cpp *
* *
* Description: This file contains C++ code to test the reciprocal function *
* for rational objects. *
* In addition, the rational output operator (<<) *
* and the rational destructor will be called. *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
	cout << "Test program WhitmarshTE4-39.cpp" << endl;
// Testing double constructor
	cout << "Calling constructor with 1 / 3" << endl;
	rational fraction(1,3);

// Testing output (insertion) operator
	cout << "Calling output operator" << endl;
	cout << fraction << endl;
	cout << "output should be 1/3" <<endl;

// Testing / operator
	cout << "Calling reciprocal function" << endl;
	cout << fraction.reciprocal() << endl;
	cout << "output should be 3" << endl;

// Testing destructor
	cout << "Calling destructor as 'fraction' goes out of scope"
		 << endl;
	return 0;
}