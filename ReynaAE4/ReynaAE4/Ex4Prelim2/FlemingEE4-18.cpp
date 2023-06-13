/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program. *
* Author: Eric Fleming *
* Date: October 2022 *
* File: FlemingEE4-18.cpp *
* *
* Description: This file contains C++ code to test the addition *
* operator for rational objects. *
* In addition, the rational output operator (<<), the rational  *
* constructor and the rational destructor will be called. *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
cout << "Test program FlemingEE4-18.cpp" << endl;
// Testing two int constructor
cout << "Calling int constructor with values 2, 3" << endl;
rational fraction(2,3);
cout << "Calling int constructor with values 3, 4" << endl;
rational adder(3,4);
//testing addition operator
cout << "Calling addition operator with rationals 3/4, 2/3, also calling assignment operator" << endl;
rational result = fraction + adder;
// Testing output (insertion) operator
cout << "Calling output operator" << endl;
cout << result << endl;
// Testing destructor
cout << "Calling destructor as 'fraction', 'adder', 'result' goes out of scope"
 << endl;
return 0;
}
