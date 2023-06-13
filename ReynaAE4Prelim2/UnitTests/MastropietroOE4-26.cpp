/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program. *
* Author: Owen Mastropietro *
* Date: October 2022 *
* File: MastropietroOE4-26.cpp *
* *
* Description: This file contains C++ code to test the *
* round (const rational & R) method. *
* In addition, the constructor for rational objects, *
* the output (insertion) operator, *
* and the rational destructor will be called. *
****************************************************************/
#include <iostream>
#include "rational.h"

using namespace std;

/* rational operator ++ (); // Pre */

int main ()
{
    // Testing Negative Fractions
    cout << "Test Program MastropietroOE4-26.cpp" << endl;


    // Testing rational(int, int) Constructor
    cout << "Calling rational(int, int) Constructor" << endl;
    rational f1(-14, 13);
    
    cout << "Calling rational(int, int) Constructor" << endl;
    rational f2(-2, 5);

    cout << "Calling rational(int, int) Constructor" << endl;
    rational f3(-100, 100);
    
    // Testing Pre-Increment (++rational) Operator
    cout << "Calling Pre-Increment Operator with ++(-14/13)" << endl;
    cout << ++f1 << endl;

    cout << "Calling Pre-Increment Operator with ++(-2/5)" << endl;
    cout << ++f2 << endl;
    
    cout << "Calling Pre-Increment Operator with ++(-100/100)" << endl;
    cout << ++f3 << endl;

    // Testing Destructor
    cout << "Calling destructor as f1-f3 goes out of scope" << endl;
    return 0;
}