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
cout << "Test program SamplesTE4-16.cpp" << endl;
// Testing int, int constructor

cout << "Calling int, int constructor" << endl;
rational small(-3, 2);
rational big(-1, 3);

//Testing proper comparison of negative numbers
cout << "Comparing -3/2 < -1/2" << endl;
cout << ((small < big) ? "true" : "false") << endl;
cout << "Comparing -1/2 < -3/2" << endl;
cout << ((big < small) ? "true" : "false") << endl;

//Testing proper comparison of zeros
cout << "calling assignment operator" << endl;
small = rational(0,2);
big = rational(0,40);
cout << "Comparing 0/2 < 0/40" << endl;
cout << ((small < big) ? "true" : "false") << endl;
cout << "Comparing 0/40 < 0/2" << endl;
cout << ((big < small) ? "true" : "false") << endl;

// Testing destructor
cout << "Calling destructor as 'fraction' goes out of scope"
<< endl;
return 0;
}