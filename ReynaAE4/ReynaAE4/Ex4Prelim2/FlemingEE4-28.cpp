/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program. 	*
* Author: Eric Fleming 						*
* Date: October 2022 						*
* File: FlemingEE4-28.cpp 					*
* 								*
* Description: This file contains C++ code to test the pre 	*
* decrement operator for rational objects. 			*
* In addition, the rational output operator (<<), the rational  *
* constructor for two ints, the rational assignment operator,	*
* and the rational destructor will be called. 			*
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
	cout << "Test program FlemingEE4-28.cpp" << endl;
	// Testing default constructor
	cout << "Calling two int constructor values 1,3" << endl;
	rational fraction(1,3);
	//Testing pre decrement operator
	cout << "Calling pre decrement and assigning Rational preFraction during pre decrement call"
       		<< endl;
	rational preFraction = --fraction;
	// Testing output (insertion) operator
	cout << "Calling output operator" << endl;
	cout << "Fraction is " << fraction << " After pre decrement" << endl;
	cout << "Rational assigned during pre decrement is " << preFraction << endl;
	// Testing destructor
	cout << "Calling destructor as 'fraction' and 'preFraction' goes out of scope"
		<< endl;
	return 0;
}
