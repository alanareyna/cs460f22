/*****************************************************************
* Assignment: Exercise 4 - rational unit test framework for #23  *
* Author: Brandon Luna Rodriguez                                 *
* Date: Fall 2022                                                *
* File: LunaE4-23.cpp                                            *
*                                                                *
* Description: This file contains the unit test for #23 function *
* which is the arithmetic operator +=                            *
*****************************************************************/

#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
    cout << "Test program LunaE4-23.cpp" << endl;

    rational fraction(1,2); // Rational: 1/2
    rational fractionInDecimal(0.5); // Rational: 0.5

    // First Test: Testing Rational Fraction Addition with '+='
    fraction += 1;  // resulting in 3/2
    rational testFraction(3,2);  // 3/2

    if(fraction == testFraction)
    {
        cout << "Resulting Fraction after += is " << to_string(testFraction) << " !" << endl;
    } else {
        cout << "Something is wrong with += operator !" << endl;
    }

    // Second Test: Testing Rational Decimal Addition with '+='
    fractionInDecimal += 1;  // resulting in 1.5
    rational testDecimal(1.5);  // 1.5

    if(fractionInDecimal == testDecimal)
    {
        cout << "Resulting Fraction after += is " << to_string(testDecimal) << " !" << endl;
    } else {
        cout << "Something is wrong with += operator !" << endl;
    }

    cout << "\n Hard Coded Unit Tests Concluded! \n" << endl;

    // Testing destructor
    cout << "Calling destructor as vars go out of scope" << endl;

    return 0;
}