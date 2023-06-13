/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Andrew Tellez (Original by Dr. Watts)                 *
* Date: October 26 2022                                         *
* File: TellezAE4-28.cpp                                        *
*                                                               *
* Description: This file contains C++ code to test the -- (pre) *
* decrement operator for rational objects "called" by using the *
* rational(int, int) constructor. In addition, the rational     *
* output operator (<<) and the rational destructor will         *
* be called.                                                    *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
    cout << "Test program TellezAE4-18.cpp" << endl;
    // Using default constructor and constructor(int, int)
    cout << "Calling default constructor" << endl;
    rational tempFraction;
    cout << "Calling constructor(7, 4)" << endl;
    rational fraction(7, 4);
    // Testing -- (pre) operator
    cout << "Setting tempFraction = to the pre decrement value of fraction" << endl;
    tempFraction = --fraction;
    // Using output operator on tempfraction
    cout << tempFraction << endl;
    // Testing destructor
    cout << "Calling destructor as 'fraction' goes out of scope" << endl;
    return 0;
}