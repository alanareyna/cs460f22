/*****************************************************************
* Assignment: Exercise 4 - rational unit test framework for #13  *
* Author: Brandon Luna Rodriguez                                 *
* Date: Fall 2022                                                *
* File: LunaE4-13.cpp                                            *
*                                                                *
* Description: This file contains the unit test for #13 function *
* which is the != logical operator in a simple if statement      *
* condition involving a fraction and rational                    *
*****************************************************************/

#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
    cout << "Test program LunaE4-13.cpp" << endl;

    /***************** Hard Coded Unit Test *****************/

    rational fraction(1,2); // 1/2
    rational fractionInDecimal(1.5); // 1.5
    // First Test: Testing logical operator !=
    if(fraction != fractionInDecimal)
    {
        cout << "Both are not the same!" << endl;
    } else {
        cout << "They are the same!" << endl;
    }

    // Second Test
    cout << (fraction != fractionInDecimal ? "They are not the same!" : "They are the same!") << endl;

    cout << "\n Hard Coded Unit Tests Concluded! \n" << endl;

    // Testing destructor
    cout << "Calling destructor as 'fraction' and `fractionInDecimal` goes out of scope" << endl;

    return 0;
}