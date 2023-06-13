/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Oscar Rojas                                           *
* Date: October 2022                                            *
* File: rojasoE4-24.cpp                                         *
* Description:  This file contains C++ code to test the         *
*               -= operator for rational objects.               *
*                                                               *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;

int main ()
{
    cout << "Test program rojasoE4-24.cpp" << endl; // Testing -= operator
    cout << "Calling -= operator" << endl;
    
    rational fraction1 = 1;
    rational fraction2 = 6/10;
    cout << (fraction1 -= fraction2) << endl;
    cout << (fraction2 -= fraction1) << endl;
    cout << (fraction1 -= fraction1) << endl;
    cout << (fraction1 -= -1) << endl;
    cout << (fraction1 -= 100.5);

    return 0;
}