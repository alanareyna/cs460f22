/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Jacob Rosner                                          *
* Date: October 2022                                            *
* File: rosnerE4-25.cpp                                         *
*                                                               *
* Description: This file contains C++ code to test the default  *
* constructor for rational objects.                             *
* In addition, the rational output operator (<<),               *
* the assignment operator (=) and (/=),                         *
* and the rational destructor will be called.                   *
****************************************************************/
#include <iostream>
#include "rational.h"
#include <fstream>
using namespace std;
int main ()
{
    int numerator, denominator;
    unsigned roundIn;


    cout << "Test program RosnerE4-25.cpp" << endl;
    // Testing default constructor
    cout << "Calling default constructor" << endl;
    rational fraction = rational(21,4);
    rational fraction2 = rational(1,8);
    cout << "fraction's values are " << fraction << ' ' << fraction2 << endl;

    // Testing assignment operator /=
    cout << "Calling assignment operator /= on fraction /= fraction2" << endl;
    fraction /= fraction2;
    cout << "Result is: " << fraction << endl;

    // Testing destructor
    cout << "Calling destructor as 'fraction' goes out of scope"
    << endl;
    return 0;
}
