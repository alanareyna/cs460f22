/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program. *
* Author: Jacob Rosner *
* Date: October 2022 *
* File: rosnerE4-35.cpp *
* *
* Description: This file contains C++ code to test the default *
* constructor for rational objects. *
* In addition, the rational output operator (<<), the void round(unsigned) function, the assignment operator (=), the denominator() function*
* and the rational destructor will be called. *
****************************************************************/
#include <iostream>
#include "rational.h"
#include <fstream>
using namespace std;
int main ()
{
    int numerator, denominator;
    unsigned roundIn;


    cout << "Test program RosnerE4-35.cpp" << endl;
    // Testing default constructor
    cout << "Calling default constructor" << endl;
    rational fraction = 2/3;
    rational fraction2 = 7/8;
    cout << "fraction's values are " << fraction << ' ' << fraction2 << endl;

    // Testing void round(unsigned D) function
    cout << "Calling round(unsigned) function" << endl;
    fraction2.round((unsigned int) fraction.denominator());
    cout << "fraction2 was rounded to: " << fraction2 << endl;

    // Testing destructor
    cout << "Calling destructor as 'fraction' goes out of scope"
    << endl;
    return 0;
}