/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Oscar Rojas                                           *
* Date: October 2022                                            *
* File: rojasoE4-34.cpp                                         *
* Description:  This file contains C++ code to test the         *
*               round function for rational objects.               *
*                                                               *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;

int main ()
{
    cout << "Test program rojasoE4-34.cpp" << endl; // Testing round function
    cout << "Calling round function" << endl;
    
    rational fraction1 = 100.555;
    cout << round(fraction1) << endl;
    rational fraction2 = 33.333336;
    cout << round(fraction2) << endl;
    rational fraction3 = 0.455555;
    cout << round(fraction3) << endl;
    rational fraction4 = 1.696969;
    cout << round(fraction4) << endl;


    return 0;
}