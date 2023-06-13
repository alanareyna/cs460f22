/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program. *
* Author: Owen Mastropietro *
* Date: October 2022 *
* File: MastropietroOE4-16.cpp *
* *
* Description: This file contains C++ code to test the *
* bool operator < (const rational & R) const method. *
* In addition, *
* the constructor for rational objects, *
* the output (insertion) operator, *
* and the rational destructor will be called. *
****************************************************************/
#include <iostream>
#include "rational.h"

using namespace std;

/* bool operator < (const rational & R) const; */

int main ()
{
    // Testing Less Then '<' Operator
    cout << "Test Program MastropietroOE4-16.cpp" << endl;
    
    // Testing rational(int num, int denom) Constructor
    cout << "Calling rational(int num, int denom) Constructor" << endl;
    rational small(1, 2);

    cout << "Calling rational(int num, int denom) Constructor" << endl;
    rational big(3, 2);
    
    // Testing Basic Comparison (matching denominators)
    // Comparing 1/2 < 3/2
    cout << small << " < " << big << " evaluates to <" << (small < big) << ">" << endl;
    cout << big << " < " << small << " evaluates to <" << (big < small) << ">" << endl;
    
    // Testing Basic Comparison (alternate denominators)
    small = rational(20, 40);
    // Comparing 20/40 < 3/2
    cout << small << " < " << big << " evaluates to <" << (small < big) << ">" << endl;
    cout << big << " < " << small << " evaluates to <" << (big < small) << ">" << endl;


    // Testing Destructor
    cout << "Calling destructor as small1 and big1 go out of scope" << endl;
    return 0;
}