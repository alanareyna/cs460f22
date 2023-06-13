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

    double d1 = 5.4352;
    double d2 = 1.3333;

    // Testing output (insertion) operator and Arithmetic operator /
    cout << "Calling output operator & Arithmetic operator /" << endl;
    cout << (d1 / d2) << endl;
    
    // Testing destructor
    cout << "Calling destructor as 'd1' and 'd2'" <<
    " go out of scope" << endl;

    return 0;
}