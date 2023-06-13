/*****************************************************************
* Assignment: Exercise 4 - rational unit test framework for #33  *
* Author: Brandon Luna Rodriguez                                 *
* Date: Fall 2022                                                *
* File: LunaE4-33.cpp                                            *
*                                                                *
* Description: This file contains the unit test for #33 function *
* which is the to_string() friend function it converts both      *
* a fraction and decimal to a string and prints it out           *
*****************************************************************/

#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
    cout << "Test program LunaE4-33.cpp" << endl;

    /***************** Hard Coded Unit Test *****************/

    cout << "Running hard coded unit tests" << endl;
    cout << "-----------------------------" << endl;

    rational fractionRational(1,2);
    rational decimalRational(0.5);
    string decimalString = to_string(decimalRational);
    string fractionString = to_string(fractionRational);

    cout << "Fraction Rational as string: " << fractionString << endl;
    cout << "Decimal Rational as string: " << decimalString << endl;

    cout << "\n Hard Coded Unit Tests Concluded! \n" << endl;

    // Testing destructor
    cout << "Calling destructor as all vars go out of scope" << endl;

    return 0;
}