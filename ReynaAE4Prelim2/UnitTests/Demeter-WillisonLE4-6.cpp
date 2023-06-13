/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program. 
* Authors: Luke D-W.
* Date: October 2022 
* File: Demeter-WillisonLE4-6.cpp 
* *
* Description: This file contains C++ code to test printed output 
*  of rational objects.
* In addition, the rational (numerator, denominator) constructor,
* the default constructor and the rational destructor will be called. 
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
    cout << "Test program Demeter-WillisonLE4-6.cpp" << endl;
    // Testing constructor that takes two ints
    cout << "Calling (numerator, denominator) constructor (occurs for each new rational tested)" << endl;
    rational fraction = rational(1,2);
    // Testing output (insertion) operator
    cout << "Calling output operator on rational(1,2)" << endl;
    cout << fraction << endl;

    // Testing for correct handling of negative numerator fractions
    fraction = rational(-1,2); 
    cout << "Calling output operator on rational(-1,2)" << endl;
    cout << fraction << endl;

    // Testing for correct handling of 0
    cout << "Calling default constructor" << endl;
    rational default_fraction;
    cout << "Calling output operator on default rational (0)" << endl;
    cout << default_fraction << endl;

    // Testing destructor
    cout << "Calling destructor as 'fraction' goes out of scope" << endl;
    return 0;
}