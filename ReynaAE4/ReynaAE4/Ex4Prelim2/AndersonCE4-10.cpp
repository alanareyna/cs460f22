/*****************************************************************************
 * Assignment: Exercise 4 - rational Class Unit Test			     *
 * Author: Claire Anderson						     *
 * Date: October 26, 2022						     *
 * File: AndersonCE4-10.cpp						     *
 * Description: This file is the unit test for the denominator function of   *
 * 	the rational class. The #7 constructor and destructor will also end  *
 * 	up being called.						     *
 *****************************************************************************/

#include <iostream>
#include "rational.h"
using namespace std;

int main () {
	cout << "Test program AndersonCE4-10.cpp" << endl;
	// Creating rational object
	cout << "Calling #7 constructor" << endl;
	rational r1(0, 1);
	rational r2(1, 2);
	rational r3(6, 7);

	// Testing denominator function
	int d1 = r1.denominator();
	int d2 = r2.denominator();
	int d3 = r3.denominator();
	cout << "Testing denominator function" << endl;
	cout << d1 << endl;
	cout << d2 << endl;
	cout << d3 << endl;
	cout << d1 + d2 + d3 << endl;

	// Calling desctructor
	cout << "Calling destructor as 'r1', 'r2' and 'r3' go out of scope" 
		<< endl;
	return 0;
}
