/********************************************************
 * Assignment: Exercise 4 - rational class test #4	*
 * Author: Matthew Coady				*
 * Date: 30 October 2022				*
 * File: CoadyME4-24.cpp				*
 * 							*
 * Description:	This file contains C++ code to test the *
 * 		decrement/assignment operator for	*
 * 		the rational class.			*
 *******************************************************/

#include <iostream>
#include "rational.h"

using namespace std;

int main()
{
	cout << "Test program CoadyME4-24.cpp" << endl;
	
	// Calling constructor with int arg
	cout << "Calling constructor with an integer argument" << endl;
	rational r1 (5);
	cout << "Before -= operator called: " << r1 << endl;
	r1 -= 1;
	cout << "After -= operator called: " << r1 << endl;

	return 0;
}	
