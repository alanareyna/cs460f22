/*****************************************************************************
*                                                                           *
* Assignment: CS 460 Exercise 4 float() Test Case                           *
* Author: Cameron Holland                                                   *
* Date: October 2022                                                        *
* Description: This file contains C++ code to test the float()              *
*              operator for rational objects. In addition, the rational     *
*              constructor/destructor will be called.                       *
****************************************************************************/

#include <iostream>
#include "rational.h"
using namespace std;

int main() 
{
    cout << "Test program HollandCE4-31.cpp" << endl;
    cout << "Creating r1 = 1/2" << endl;
	rational r1(1, 2);

    // Testing multiplication
    cout << "calling float(r1)" << endl;
    cout << float(r1) << endl;

    cout << "Calling destructor as 'r1' and 'r1' go out of scope"
    << endl;
    return 0;
}

