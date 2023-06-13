/*****************************************************************************
*                                                                           *
* Assignment: CS 460 Exercise 4 LCM Test Case                               *
* Author: Cameron Holland                                                   *
* Date: October 2022                                                        *
* Description: This file contains C++ code to test the LCM function         *
*              for rational objects.mIn addition, the rational              *
*              constructor/destructor will be called.                       *
****************************************************************************/

#include <iostream>
#include "rational.h"
using namespace std;

int main() 
{
    cout << "Test program HollandCE4-41.cpp" << endl;
	rational fraction;
    // Testing LCM
    cout << "calling fraction.LCM(12, 15)" << endl;
    cout << fraction.LCM(12, 15) << endl;

    cout << "Calling destructor as 'fraction' goes out of scope"
    << endl;
    return 0;
}

