/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program. *
* Author: Tanner Samples *
* Date: October 2022 *
* File: SamplesTE4-16.cpp *
* *
* Description: This file contains C++ code to test the 
* output operator (<<) for rationals. *
* In addition, the constructor for rational objects, *
* the rational output operator (<<), *
* and the rational destructor will be called. *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
cout << "Test program SamplesTE4-6.cpp" << endl;

cout << "Calling int, int constructor" << endl;
// Testing for correct handling of simple whole numbers
rational fraction = rational(1,1); 
cout << "Calling output operator on rational(1,1)" << endl;
cout << fraction << endl;

// Testing for correct handling of larger whole numbers
cout << "Calling int, int constructor" << endl;
fraction = rational(20,4); 
cout << "Calling output operator on rational(20,4)" << endl;
cout << fraction << endl;

// Testing destructor
cout << "Calling destructor as 'fraction' goes out of scope"
<< endl;
return 0;
}