/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Oscar Rojas                                           *
* Date: October 2022                                            *
* File: rojasoE4-4.cpp                                          *
* Description:  This file contains C++ code to test the         *
*               assingment operator for rational objects.       *
*                                                               *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;

int main ()
{
    cout << "Test program rojasoE4-4.cpp" << endl; // Testing assignment operator
    cout << "Calling assignment operator" << endl;
    rational fraction1 = 5/10;
    cout << fraction1 << endl;

    rational fraction2 = fraction1;
    cout << fraction2 << endl;

    rational fraction3 = fraction1 + fraction2;
    cout << fraction3 << endl;

    rational fraction4;
    fraction4 = 10.00;
    cout << fraction4 << endl;

    rational fraction5;
    fraction5 = 55.5;
    cout << fraction5 << endl;

    return 0;
}