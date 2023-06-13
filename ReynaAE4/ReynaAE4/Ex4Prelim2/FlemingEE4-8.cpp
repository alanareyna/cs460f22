/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program. *
* Author: Eric Fleming *
* Date: October 2022 *
* File: FlemingEE4-8.cpp *
* *
* Description: This file contains C++ code to test the single int
* constructor for rational objects. *
* In addition, the rational output operator (<<) *
* and the rational destructor will be called. *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main () {

	cout << "Test program FlemingEE4-8.cpp" << endl;
	// Testing int constructor
	cout << "Calling single int constructor" << endl;
	rational fraction{10};
	// Testing output (insertion) operator
	cout << "Calling output operator" << endl;
	cout << fraction << endl;

	// Testing destructor
	cout << "Calling destructor as 'fraction' goes out of scope" << endl;
	return 0;

}
