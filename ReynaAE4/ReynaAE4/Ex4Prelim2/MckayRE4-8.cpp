/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Ryan McKay (Original by Dr. Watts)                    *
* Date: October 2022                                            *
* File: MckayRE4-18.cpp                                            *
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
    cout << "Test program MckayRE4-8.cpp" << endl;
    // Testing default constructor, "called" by using new
    cout << "Calling int constructor with new and a value of 5" << endl;
    rational *fraction = new rational(5);
    // Testing output (insertion) operator
    cout << "Calling output operator" << endl;
    cout << *fraction << endl;
    // Testing destructor
    cout << "Calling destructor explicitly with free" << endl;
    free(fraction);
    return 0;
}
