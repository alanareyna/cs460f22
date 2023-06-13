/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Andrew Tellez (Original by Dr. Watts)                 *
* Date: October 26 2022                                         *
* File: TellezAE4-8.cpp                                         *
*                                                               *
* Description: This file contains C++ code to test the int      *
* constructor for rational objects "called" by using the        *
* new operator. In addition, the rational output operator (<<)  *
* and the rational destructor will be called.                   *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
    cout << "Test program TellezAE4-8.cpp" << endl;
    // Testing default constructor, "called" by using new
    cout << "Calling constructor(int) (#8)" << endl;
    rational fraction(4);
    // Testing output (insertion) operator
    cout << "Calling output operator" << endl;
    cout << fraction << endl;
    // Testing destructor
    cout << "Calling destructor as 'fraction' goes out of scope" << endl;
    return 0;
}