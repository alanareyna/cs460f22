/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Anne A. Student *
* Date: October 2022                                            *
* File: studentaE4-2.cpp                                           *
*                                                               *
* Description: This file contains C++ code to test the copy  *
*              constructor for rational objects.                *
*              In addition, the default constructorm, the rational output operator (<<)   *
*              and the rational destructor will be called.      *
****************************************************************/

#include <iostream>
#include "rational.h"

using namespace std;

int main ()
{
	cout << "Test program studentaE4-2.cpp" << endl;
	cout << "Calling default constructor" << endl;
	rational fraction1;

	// Testing copy constructor
	cout << "Calling default constructor" << endl;
	rational fraction2 = fraction1;
	fraction2.denominator() = 0;

	cout << "Calling output operator" << endl;
	cout << "fraction1 = " << fraction1 << endl;
	cout << "fraction2 = " << fraction2 << endl;

	cout << "Calling destructor as 'fraction1' and 'fraction2' go out of scope"
	     << endl;
	return 0;
}
