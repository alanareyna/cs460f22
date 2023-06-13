/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program. *
* Author: Tanner Samples *
* Date: October 2022 *
* File: SamplesTE4-16.cpp *
* *
* Description: This file contains C++ code to test the 
* less than operator (<) for rationals. *
* In addition, the constructor for rational objects, *
* the rational output operator (<<), *
* and the rational destructor will be called. *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
cout << "Test program SamplesTE4-26.cpp" << endl;
// Testing int, int constructor
cout << "Calling int, int constructor" << endl;
rational fraction(1, 2);

// Testing output (insertion) operator
cout << "Calling output operator" << endl;
cout << "fraction: " << fraction << endl;

// Testing iteration
cout << "Testing pre-iteration..." << endl;
cout << "fratcion should equal 3/2" << endl;
cout << ++fraction << endl;

//Testing compatiblity with different denominators
fraction = rational(14,13);
++fraction;
cout << "Calling pre-increment on 14/13" << endl;
cout << fraction << endl;




// Testing destructor
cout << "Calling destructor as 'fraction' goes out of scope"
<< endl;
return 0;
}