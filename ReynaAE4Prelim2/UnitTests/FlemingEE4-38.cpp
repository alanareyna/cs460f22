/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Eric Fleming                                          *
* Date: October 2022                                            *
* File: FlemingEE4-38.cpp                                       *
*                                                               *
* Description: This file contains C++ code to test the reduce   *
*  function for rational objects.                      *
* In addition, the rational output operator (<<), the rational  *
* default constructor, 					        *
* and the rational destructor will be called.                   *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
	
        cout << "Test program FlemingEE4-38.cpp" << endl;
        // Testing default constructor
	// Need to mark flag for not auto reduce
        cout << "Calling default constructor" << endl;
        rational fraction;
	cout << "Calling output operator" << endl;
	cout << "Value before reduce: ";
	cout << fraction << endl;
	//Testing reduce function
	cout << "Calling reduce function on rational 0/1" << endl;
        fraction.reduce();
        // Testing output (insertion) operator
        cout << "Calling output operator" << endl;
        cout << fraction << endl;
        // Testing destructor
        cout << "Calling destructor as 'fraction' goes out of scope"
                << endl;
        return 0;
}

