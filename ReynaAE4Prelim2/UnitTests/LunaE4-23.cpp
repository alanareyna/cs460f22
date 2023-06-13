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

    cout << "Calling default rational constructor (const int, const int) with values 1 and 2" << endl;
    rational fraction(1,2); // Rational: 1/2
    cout << "Calling default rational constructor (const double) with value 0.5" << endl;
    rational fractionInDecimal(0.5); // Rational: 0.5

    // First Test: Testing Rational Fraction Addition with '+='
    cout << "Calling (+=) operator" << endl;
    fraction += 1;  // resulting in 3/2
    cout << "Calling default rational constructor (const int, const int) with values 3 and 2" << endl;
    rational testFraction(3,2);  // 3/2

    cout << "Calling logical operator (==): " << endl;
    if(fraction == testFraction)
    {
        cout << "Calling output operator (<<): " << endl;
        cout << "Resulting Fraction after += is " << to_string(testFraction) << " !" << endl;
    } else {
        cout << "Calling output operator (<<): " << endl;
        cout << "Something is wrong with += operator !" << endl;
    }

    // Second Test: Testing Rational Decimal Addition with '+='
    cout << "Calling (+=) operator" << endl;
    fractionInDecimal += 1;  // resulting in 1.5
    cout << "Calling default rational constructor (const double) with value 1.5" << endl;
    rational testDecimal(1,2);  // 1.5

    cout << "Calling logical operator (==): " << endl;
    if(fractionInDecimal == testDecimal)
    {
        cout << "Calling output operator (<<): " << endl;
        cout << "Resulting Fraction after += is " << double(fractionInDecimal) << " !" << endl;
    } else {
        cout << "Calling output operator (<<): " << endl;
        cout << "Something is wrong with += operator !" << endl;
    }

    cout << "\nHard Coded Unit Tests Concluded! \n" << endl;

    // Testing destructor
    cout << "Calling destructor as vars go out of scope" << endl;

    return 0;
}