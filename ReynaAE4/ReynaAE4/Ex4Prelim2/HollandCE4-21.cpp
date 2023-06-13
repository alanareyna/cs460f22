/*****************************************************************************
*                                                                           *
* Assignment: CS 460 Exercise 4 Multiplication Test Case                    *
* Author: Cameron Holland                                                   *
* Date: October 2022                                                        *
* Description: This file contains C++ code to test the multiplication       *
*              operator for rational objects. In addition, the rational     *
*              constructor/destructor will be called.                       *
****************************************************************************/

#include <iostream>
#include "rational.h"
using namespace std;

int main() 
{
    cout << "Test program HollandCE4-21.cpp" << endl;
    cout << "Creating r1 = 1/2 and r2 = 3/10" << endl;
	rational r1(1, 2);
    rational r2(3, 10);

    // Testing multiplication
    cout << "calling r1 * r2" << endl;
    cout << (r1 * r2) << endl;

    cout << "Calling destructor as 'r1' and 'r1' go out of scope"
    << endl;
    return 0;
}

