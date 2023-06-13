/******************************************************************************
* Assignment: Exercise 4 - Rational Class Test Program.                       *
* Author: Erika Mendoza                                                       *
* Date: October 2022                                                          *
* File: mendozaeE4-29.cpp                                                     *
*                                                                             *
* Description: This file contains C++ code to test the following function     *
*           #29 - rational operator -- (int); // Post                         *
******************************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;

int main ()
{
    cout << "Test program mendozaeE4-29.cpp" << endl;

    rational Decimal = 1.5;
    rational temp;

    // Testing post decrement operator
    cout << "Calling post decrement operator" << endl;
    temp = Decimal--;

    // Testing output (insertion) operator
    cout << "Calling output operator" << endl;
    cout << "temp: " << temp << endl;
    cout << "Decimal: " << temp << endl;

    // Testing destructor
    cout << "Calling destructor as 'Decimal' and 'temp'"
    << " go out of scope" << endl;

    return 0;
}