/******************************************************************************
* Assignment: Exercise 4 - Rational Class Test Program.                       *
* Author: Erika Mendoza                                                       *
* Date: October 2022                                                          *
* File: mendozaeE4-9.cpp                                                      *
*                                                                             *
* Description: This file contains C++ code to test the following function     *
*           #9 - rational (const double D)                                    *
******************************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;

int main ()
{
    cout << "Test program mendozaeE4-9.cpp" << endl;
    double D;

    // Testing input operator
    cout << "Calling input operator" << endl;
    cin >> D;

    // Testing rational (const double D) constructor
    cout << "Calling rational (const double D) constructor" << endl;
    rational fraction(D);

    // Testing output (insertion) operator
    cout << "Calling output operator" << endl;
    cout << "fraction: " << fraction << endl;

    // Testing destructor
    cout << "Calling destructor as 'D' and 'fraction'" 
    << " go out of scope" << endl;

    return 0;
}