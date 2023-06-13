/********************************************************
 * Assignment: Exercise 4 - rational class test #4	*
 * Author: Matthew Coady				*
 * Date: 30 October 2022				*
 * File: CoadyME4-34.cpp				*
 * 							*
 * Description:	This file contains C++ code to test the *
 * 		round function for the rational class.	*
 *******************************************************/

#include <iostream>
#include "rational.h"

using namespace std;

int main()
{
	cout << "Test program CoadyME4-34.cpp" << endl;

	// Calling constructor with double int arg
	cout << "Calling constructor that takes 2 int arguments" << endl;
	rational r1 (12, 5);

	// Testing round function
	cout << "Testing round() on created object" << endl;
	r1.round();
	cout << r1 << endl;

	return 0;
}	
