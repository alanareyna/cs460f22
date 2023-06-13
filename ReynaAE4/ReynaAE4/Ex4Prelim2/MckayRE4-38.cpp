/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Ryan McKay (Original by Dr. Watts)                    *
* Date: October 2022                                            *
* File: MckayRE4-18.cpp                                         *
*                                                               *
* Description: This file contains C++ code to test the --       *
* operator when used on a positive rational object with a value *
* greater than 1. In addition, the int, int constructor, and    *
* the rational output operator are explicitly called and the    *
* rational destructor is implicitly called.                     *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
    cout << "Test program MckayRE4-38.cpp" << endl;
    // Testing default constructor
    cout << "Calling int, int constructor with 9/12" << endl;
    rational fraction(9/12);
    // Testing output (insertion) operator
    cout << "Calling output operator" << endl;
    cout << fraction << endl;
    //Testing the round function, which should do nothing since 
    //the rational class should already auto reduce
    cout << "Calling the reduce member function" << endl;
    fraction.reduce();
    // Testing output (insertion) operator
    cout << "Calling output operator" << endl;
    cout << fraction << endl;
    // Testing destructor
    cout << "Calling destructor as 'fraction' goes out of scope"
         << endl;
    return 0;
}
