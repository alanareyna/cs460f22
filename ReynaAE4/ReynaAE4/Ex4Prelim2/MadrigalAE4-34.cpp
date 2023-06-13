/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.           *
* Author: Alejandro Madrigal                                      *
* Date: October 2022                                              *
* File: MadrigalAE4-34.cpp                                        *
*                                                                 *
* Description: This file contains C++ code to test the round      *
* method for rational objects.                                    *
*                                                                 *
****************************************************************/
#include <iostream>
#include "rational.h"

using namespace std;

int main ()
{
    cout << "Test program subidE4-34.cpp" << endl;

    rational r1(15/8);

    cout << "r1: " << r1 << endl;
 
    // Testing the round method
    cout << "Calling the round method on r1" << endl;
    r1.round();
    cout << "Result: r1 is now " << r1 << endl;
  

    return 0;
} 