/******************************************************************************
* Assignment: Exercise 4 - Rational Class Test Program.                       *
* Author: Erika Mendoza                                                       *
* Date: October 2022                                                          *
* File: mendozaeE4-19.cpp                                                     *
*                                                                             *
* Description: This file contains C++ code to test the following function     *
*           #19 - rational operator / (const rational & R) const              *
******************************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;

int main ()
{
    cout << "Test program mendozaeE4-19.cpp" << endl;

    double num = 5.4352;
    double denom = 1.3333;

    // Testing rational (const double D) constructor
    cout << "Calling rational (const double D) constructor" << endl;
    rational f1(num);
    rational f2(denom);

    // Testing output (insertion) operator and Arithmetic operator /
    cout << "Calling output operator & Arithmetic operator /" << endl;
    cout << (f1 / f2) << endl;
    
    // Testing destructor
    cout << "Calling destructor as 'num', 'denom', 'f1', and 'f2'" <<
    " go out of scope" << endl;

    return 0;
}