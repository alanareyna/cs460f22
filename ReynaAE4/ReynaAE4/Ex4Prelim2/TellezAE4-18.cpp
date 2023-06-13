/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Andrew Tellez (Original by Dr. Watts)                 *
* Date: October 26 2022                                         *
* File: TellezAE4-18.cpp                                        *
*                                                               *
* Description: This file contains C++ code to test the +        *
* operator for rational objects "called" by using the           *
* rational(int, int) constructor and the default constructor.   *
* In addition, the rational output operator (<<) and the        *
* rational destructor will be called.                           *                        *
****************************************************************/

#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
    cout << "Test program TellezAE4-18.cpp" << endl;
    // Testing default constructor, "called" by using new
    cout << "Calling constructor(4, 8)" << endl;
    rational fraction(4, 8);
    // Testing output (insertion) operator
    cout << "Calling output operator" << endl;
    cout << fraction << endl;
    cout << "Calling output operator with + of two fractions that sum to an int" << endl;
    cout << (fraction + fraction) << endl;
    // Testing destructor
    cout << "Calling destructor as 'fraction' goes out of scope" << endl;
    return 0;
}