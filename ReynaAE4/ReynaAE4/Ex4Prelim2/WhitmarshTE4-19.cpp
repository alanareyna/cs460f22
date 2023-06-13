/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program. *
* Author: Tyler Whitmarsh *
* Date: October 2022 *
* File: WhitmarshTE4-19.cpp *
* *
* Description: This file contains C++ code to test the / operator *
* for rational objects. *
* In addition, the rational output operator (<<), the rational copy constructor *
* and the rational destructor will be called. *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
	cout << "Test program WhitmarshTE4-19.cpp" << endl;
// Testing double constructor
	cout << "Calling constructor with 2 / 3 and copy constructor" << endl;
	rational fraction(2,3);
	rational fraction2(fraction);

// Testing output (insertion) operator
	cout << "Calling output operator" << endl;
	cout << fraction << " and " << fraction2 << endl;
	cout << "output should be 2/3 and 2/3" <<endl;

// Testing / operator
	cout << "Calling / operator" << endl;
	cout << (fraction/fraction2) <<endl;
	cout << "output should be 1" << endl;

// Testing destructor
	cout << "Calling destructor as 'fraction' and 'fraction2' goes out of scope"
		 << endl;
	return 0;
}
