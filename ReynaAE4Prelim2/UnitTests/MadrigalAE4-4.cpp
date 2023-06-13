/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.           *
* Author: Alejandro Madrigal                                      *
* Date: October 2022                                              *
* File: MadrigalAE4-4.cpp                                         *
*                                                                 *
* Description: This file contains C++ code to test the assignment *
* operator for rational objects.                                  *
*                                                                 *
****************************************************************/
#include <iostream>
#include "rational.h"

using namespace std;

int main ()
{
    cout << "Test program MadrigalAE4-4.cpp" << endl;

    rational r1(3, 4), r2(1, 2), r3(1);

    cout << "r1: " << r1 << endl;
    cout << "r2: " << r2 << endl;
    cout << "r3: " << r3 << endl;
    // Testing assignment operator
    cout << "Calling the assignment operation: r3 = r2 = r1" << endl;
    r3 = r2 = r1;

    cout << "Result:" << endl;
    cout << "r1: " << r1 << endl;
    cout << "r2: " << r2 << endl;
    cout << "r3: " << r3 << endl;

    return 0;
} 