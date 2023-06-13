/*****************************************************************************
 * Assignment: Exercise 4 - rational Class Unit Test			     *
 * Author: Claire Anderson						     *
 * Date: October 30, 2022						     *
 * File: AndersonCE4-20.cpp						     *
 * Description: This file is the unit test for the subtration operator of    *
 * 	the rational class. The rational output operator, #7 constructor,    *
 * 	and destructor will also end up being called.			     *
 *****************************************************************************/

#include <iostream>
#include "rational.h"
using namespace std;

int main () {
	cout << "Test program AndersonCE4-20.cpp" << endl;
	//creating rational objects
	cout << "Calling #7 constructor" << endl;
	rational r1(5, 2);
	rational r2(3, 2);
	rational r3(1, 2);

	//testing subtraction operator
	cout << "Testing subtraction operator" << endl;
	cout << r1 - r2 << endl;
	cout << r2 - r3 << endl;
	cout << r1 - r3 << endl;
	cout << r1 - r2 - r3 << endl;

	// Calling destructor
	cout << "Calling destructor as 'r1', 'r2' and 'r3' go out of scope"
		<< endl;
	return 0;
}
