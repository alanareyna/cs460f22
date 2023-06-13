/******************************************************************************
* Assignment: Exercise 4 - Rational Class Test Program.                       *
* Author: Erika Mendoza                                                       *
* Date: October 2022                                                          *
* File: mendozaeE4-39.cpp                                                     *
*                                                                             *
* Description: This file contains C++ code to test the following function     *
*           #39 - rational reciprocal () const                                *
******************************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;

int main ()
{
    cout << "Test program mendozaeE4-39.cpp" << endl;

    rational fraction;

    // Testing input operator
    cout << "Calling input operator" << endl;
    cin >> fraction;

    // Testing output (insertion) operator and reciprocal method
    cout << "Calling output operator & reciprocal method" << endl;
    cout << "reciprocal(not reduced): " << fraction.reciprocal() << endl;
    cout << "reciprocal(reduced):" << fraction.reciprocal() << endl;

    // Testing destructor
    cout << "Calling destructor as 'fraction' goes out of scope" << endl;

    return 0;
}