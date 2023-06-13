/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program. 
* Author: Luke D-W
* Date: October 2022 
* File: Demeter-WillisonLE4-26.cpp 
* 
* Description: This file contains C++ code to test the 
* pre-increment operator for the rational class.
* In addition, the rational (numerator, denominator) constructor
* copy constructor, and the rational destructor will be called.
****************************************************************/
#include <iostream>
#include "rational.h"

using namespace std;

int main ()
{

    cout << "Test program Demeter-WillisonLE4-26.cpp" << endl;
    // Testing constructor that takes two ints
    cout << "Calling (numerator, denominator) constructor and copy constructor" << endl;
    rational fraction = rational(1,1);
    //Testing basic functionality -- does it add 1, and is it actually a post-increment?
    cout << "Calling pre-increment on rational (1,1) and copying the result into another rational" << endl;
    rational fraction_plus = ++fraction;
    cout << "Original variable: " << fraction << endl;
    cout << "Variable assigned to original fraction: " << fraction_plus << endl;

    // Testing destructor
    cout << "Calling destructor as 'fraction' and 'fraction_plus' goes out of scope" << endl;
    return 0;
}