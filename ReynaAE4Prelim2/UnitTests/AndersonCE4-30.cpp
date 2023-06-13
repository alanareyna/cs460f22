/*****************************************************************************
 * Assignment: Exercise 4 - rational Class Unit Test			     *
 * Author: Claire Anderson						     *
 * Date: October 30, 2022						     *
 * File: AndersonCE4-30.cpp						     *
 * Description: This file is the unit test for the integer conversion 	     *
 * 	operator of the rational class. The rational output operator, #7     *
 * 	constructor, and destructor will also end up being called.	     *
 *****************************************************************************/

#include <iostream>
#include "rational.h"
using namespace std;

int main () {
	cout << "Test program AndersonCE4-30.cpp" << endl;
	//creating rational objects
	cout << "Calling #7 constructor" << endl;
	rational r1(4, 1);
	rational r2(10, 1);
	rational r3(4, 2);

	//testing subtraction operator
	cout << "Testing integer conversion operator" << endl;
	cout << int(r1) << endl;
	cout << int(r2) << endl;
	cout << int(r3) << endl;

	// Calling destructor
	cout << "Calling destructor as 'r1', 'r2' and 'r3' go out of scope"
		<< endl;
	return 0;
}
