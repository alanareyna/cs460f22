/********************************************************
 * Assignment: Exercise 4 - rational class test #4	*
 * Author: Matthew Coady				*
 * Date: 30 October 2022				*
 * File: CoadyME4-4.cpp					*
 * 							*
 * Description:	This file contains C++ code to test the *
 * 		assignment operator for the rational	*
 * 		class.					*
 *******************************************************/

#include <iostream>
#include "rational.h"

using namespace std;

int main()
{
	cout << "Test program CoadyME4-4.cpp" << endl;
	// Testing assignment operator
	cout << "Calling assignment operator" << endl;
	rational r1;

	rational r2 = r1;
	cout << "r1: " << r1 << "\nr2: " << r2 << endl;

	return 0;
}	
