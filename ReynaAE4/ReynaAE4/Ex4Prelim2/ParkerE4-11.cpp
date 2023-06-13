/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.        *
* Author: Ellie Parker                                         *
* Date: October 2022                                           *
* File: subidE4-11.cpp                                         *
*                                                              *
* Description: This file tests the & numerator accessor/mutator*
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
    cout << "Test program subidE4-11.cpp" << endl;
    // Calling default constructor
    cout << "Calling constructor as 2/4" << endl;
    rational fraction(2, 4);
    // Testing & numerator() method mutator
    cout << "Testing & numerator method" << endl;
    cout << "Assigning 5 to numerator using mutator" << endl;
    fraction.numerator() = 5;
    // Testing & numerator() method accessor
    cout << "Testing numerator accessor after using mutator" << endl;
    cout << "The fraction's numerator should be 5 and is: " << fraction.numerator() << endl;
    return 0;
}