/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Anthony Molinari                                      *
* Date: October 2022                                            *
* File: molinariaE4-10.cpp                                      *
*                                                               *
* Description: This file contains C++ code to test the          *
* denominator accessor and mutator function.                    *
* In addition, the rational output operator (<<)                *
* and the rational destructor will be called.                   *
****************************************************************/

#include <iostream>
#include "rational.h"

using namespace std;

int main() 
{

    // testing function 10
    rational r1(1,10);
    rational r2;
    rational r3(1,2);

    // calling getter 
    cout << r1.denominator() << endl;    // 10

    // calling setter
    r2.denominator() = r1.denominator();
    cout << r2.denominator() << endl;    // 10
    cout << r2 << endl;                  // 0/10

    cout << r3.denominator() << endl;    // 2
    r3.denominator() = r2.denominator();
    cout << r3.denominator() << endl;    // 10
    cout << r3 << endl;                  // 5/10

    r1 = rational(3,5);
    r1.denominator() = 75;
    cout << r1 << endl;                  // 45/75
    return 0;
}
