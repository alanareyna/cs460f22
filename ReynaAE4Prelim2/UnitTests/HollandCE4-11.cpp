/*****************************************************************************
*                                                                           *
* Assignment: CS 460 Exercise 4 Test Case                                   *
* Author: Cameron Holland                                                   *
* Date: October 2022                                                        *
* Description: This file contains C++ code to test the acessor and          *
*              mutator function for rational objects.                       *
*              In addition, the rational output operator (<<)               *
*              and the rational constructor/destructor will be called.      *
****************************************************************************/

#include <iostream>
#include "rational.h"
using namespace std;

int main() 
{
    cout << "Test program HollandCE4-11.cpp" << endl;
    // Testing default constructor
    cout << "Calling default constructor" << endl;
    rational fraction;

    // Testing mutator
    cout << "setting fraction.numerator() = 2" << endl;
    fraction.numerator() = 2;

    // Testing accessor
    cout << "calling fraction.numerator()" << endl;
    cout << fraction.numerator() << endl;

    // Testing destructor
    cout << "Calling destructor as 'fraction' goes out of scope"
    << endl;

    return 0;
}

