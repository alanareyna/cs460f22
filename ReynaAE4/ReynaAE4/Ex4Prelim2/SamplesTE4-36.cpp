/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program. *
* Author: Tanner Samples *
* Date: October 2022 *
* File: SamplesTE4-36.cpp *
* *
* Description: This file contains C++ code to test the 
* round function for rationals. *
* In addition, the constructor for rational objects, *
* the rational output operator (<<), 
* the assignment (=) operator,
* and the rational destructor will be called. *
****************************************************************/

/* 36  friend int round (const rational & R)*/
#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
cout << "Test program SamplesTE4-36.cpp" << endl;
// Testing int, int constructor
cout << "Calling default constructor" << endl;
rational result;

//Testing for proper rounding of whole numbers
cout << "Testing round on 60/20" << endl;
result = round(rational(60,20));
cout << result << endl;

//Testing for proper rounding of negative whole numbers
cout << "Testing round on -60/20" << endl;
result = round(rational(-60,20));
cout << result << endl;

// Testing destructor
cout << "Calling destructor as 'fraction' goes out of scope"
<< endl;
return 0;
}