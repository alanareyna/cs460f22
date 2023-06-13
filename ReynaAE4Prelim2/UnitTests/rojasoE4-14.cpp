/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Oscar Rojas                                           *
* Date: October 2022                                            *
* File: rojasoE4-14.cpp                                         *
* Description:  This file contains C++ code to test the         *
*               >= operator for rational objects.               *
*                                                               *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;

int main ()
{
    cout << "Test program rojasoE4-14.cpp" << endl; // Testing >= operator
    cout << "Calling >= operator" << endl;
    rational fraction1 = 4/10;
    rational fraction2 = 6/10;
    cout << (fraction1 >= fraction2) << endl;
    cout << (fraction2 >= fraction1) << endl;

    rational fraction3 = 6/10;
    cout << (fraction2 >= fraction3) << endl;

    rational fraction4 = 0.3;
    cout << (fraction4 >= fraction3) << endl;


    return 0;
}