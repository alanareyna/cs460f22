/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program. *
* Author: Owen Mastropietro *
* Date: October 2022 *
* File: MastropietroOE4-36.cpp *
* *
* Description: This file contains C++ code to test the *
* round (const rational & R) method. *
* In addition, *
* the constructor for rational(int, int) objects, *
* the output (insertion) operator, *
* and the rational destructor will be called. *
****************************************************************/
#include <iostream>
#include "rational.h"

using namespace std;

/* friend int round (const rational & R); */

int main ()
{
    // Testing Proper Rounding of Whole Numbers.
    cout << "Test Program MastropietroOE4-36.cpp" << endl;


    // Testing rational(int, int) Constructor
    cout << "Calling rational(int, int) Constructor Twice" << endl;
    rational f1(60, 20);
    rational f2(-60, 20);
    
    int res;

    cout << "Calling round( f1 ) with f1 = 60/20" << endl;
    res = round(f1);
    cout << res << endl;
    
    cout << "Calling round( f2 ) with f2 = -60/20" << endl;
    res = round(f2);
    cout << res << endl;


    cout << "Calling destructor as f0-f4 go out of scope." << endl;
    return 0;
}