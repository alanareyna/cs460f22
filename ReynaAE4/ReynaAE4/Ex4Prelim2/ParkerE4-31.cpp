/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.        *
* Author: Ellie Parker                                         *
* Date: October 2022                                           *
* File: subidE4-11.cpp                                         *
*                                                              *
* Description: This file tests the numerator method including  *
*              its accessor and mutator properties.            *
****************************************************************/
#include <iostream>
#include <iomanip>
#include "rational.h"
using namespace std;
int main ()
{
    cout << "Test program subidE4-31.cpp" << endl;
    // Calling default constructor
    cout << "Calling constructor as 2/4" << endl;
    rational fraction(2, 4);
    // Testing float method
    cout << "Calling float method which should return 0.500" << endl;
    cout << fixed << setprecision(3) << "Returned value: " << float(fraction) << endl;
    return 0;
}