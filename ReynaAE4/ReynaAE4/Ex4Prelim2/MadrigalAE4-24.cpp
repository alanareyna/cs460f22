/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.           *
* Author: Alejandro Madrigal                                      *
* Date: October 2022                                              *
* File: MadrigalAE4-24.cpp                                         *
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
    cout << "Test program MadrigalAE4-24.cpp" << endl;

    rational r1(3, 4), r2(1, 2);

    cout << "r1: " << r1 << endl;
    cout << "r2: " << r2 << endl;
  
    // Testing -= operator
    cout << "Calling the -= operator with: r1 -= r2" << endl;
    r1 -= r2;

    cout << "r1 is now: " << r1 << endl;
    cout << "r2 remains: " << r2 << endl;
  

    return 0;
} 