/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Jared Coats                                           *
* Date: October 2022                                            *
* File: coatsJE4-25.cpp                                         *
*                                                               *
* Description: This file contains C++ code to test divide       *
*              equal (/=).  In addition, the output operator    *
*              and destructor are called as                     *
*              well as the two int constructor.                 *
****************************************************************/

#include <iostream>
#include <fstream>
#include "rational.h"

using namespace std;

int main ()
{
	cout << "Test program coatsJE4-25.cpp" << endl;
	// Calling a constructor with two ints representing numerator and denominator
	cout << "Calling constructor with two ints." << endl;
	rational fraction(5,7);
	rational fraction2(1,2);
	//Testing output operator
	cout << "fraction: " << fraction << " fraction2: " << fraction2 << endl;

	// Testing divide and equal operation (/=)
	fraction /= fraction2;
	cout << "new fraction: " << fraction << endl;
	
	// Testing destructor
	cout << "Destructor called as 'fraction' and 'fraction2' go out of scope"
	     << endl;
	return 0;
}
