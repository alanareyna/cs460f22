/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Jared Coats                                           *
* Date: October 2022                                            *
* File: coatsJE4-15.cpp                                         *
*                                                               *
* Description: This file contains C++ code to test equality     *
*              operator (==). In addition, the output operator  *
*              and destructor are called as well as the default *
*              and two int constructor.                         *
****************************************************************/

#include <iostream>
#include <fstream>
#include "rational.h"

using namespace std;

int main ()
{
	cout << "Test program coatsJE4-15.cpp" << endl;
	cout << "Calling default constructor." << endl;
	rational fraction;
	// Calling a constructor with two ints representing numerator and denominator
	cout << "Calling constructor with two ints." << endl;
	rational fraction2(124,258);

	// Testing equality operator == and output operator in if statement
	if (fraction == fraction2){
		cout << "fraction: " << fraction << " is equal to fraction2: " << fraction2 << endl;
	}
	else{
		cout << "fraction: " << fraction << " is not equal to fraction2: " << fraction2 << endl;
	}
	
	// Testing destructor
	cout << "Destructor called as 'fraction' and 'fraction2' go out of scope"
	     << endl;
	return 0;
}
