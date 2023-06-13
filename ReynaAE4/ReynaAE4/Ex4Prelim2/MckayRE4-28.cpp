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
    cout << "Test program MckayRE4-28.cpp" << endl;
    // Testing default constructor
    cout << "Calling int, int constructor with 7/5" << endl;
    rational fraction(7/5);
    //Testing the predecrement operator with a positive value that 
    //should minus a number other than 1 from the numerator, to result
    //in a positive value
    cout << "Calling predecrement operator" << endl;
    --fraction;
    // Testing output (insertion) operator
    cout << "Calling output operator" << endl;
    cout << fraction << endl;
    // Testing destructor
    cout << "Calling destructor as 'fraction' goes out of scope"
         << endl;
    return 0;
}
