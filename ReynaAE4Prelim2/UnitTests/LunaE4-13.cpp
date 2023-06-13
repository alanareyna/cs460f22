/*****************************************************************
* Assignment: Exercise 4 - rational unit test framework for #13  *
* Author: Brandon Luna Rodriguez                                 *
* Date: Fall 2022                                                *
* File: LunaE4-13.cpp                                            *
*                                                                *
* Description: This file contains the unit test for #13 function *
* which is the > logical operator in a simple if statement       *
* condition involving a fraction and rational                    *
*****************************************************************/

#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
    cout << "Test program LunaE4-13.cpp" << endl;

    /***************** Hard Coded Unit Test *****************/

    cout << "Calling Default rational constructor (const int, const int) with values 1 and 2" << endl;
    rational fraction(1,2); // 1/2
    cout << "Calling Default rational constructor (const double) with value 1.5" << endl;
    rational fractionInDecimal(3,2); // 1.5

    cout << "Testing Logical Operator (>):" << endl;
    // First Test: Testing logical operator !=
    if(fractionInDecimal > fraction)
    {
        cout << "Calling output stream (<<):" << endl;
        cout << double(fractionInDecimal) << " is greater than " << fraction << endl;
    } else {
        cout << "Calling output stream (<<):" << endl;
        cout << double(fractionInDecimal) << " is not greater than " << fraction << endl;
    }

    cout << "\nHard Coded Unit Tests Concluded! \n" << endl;

    // Testing destructor
    cout << "Calling destructor as 'fraction' and `fractionInDecimal` goes out of scope" << endl;

    return 0;
}