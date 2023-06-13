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

    cout << r1.denominator() << endl;    

    r2.denominator() = r1.denominator();
    cout << r2.denominator() << endl;    
    cout << r2 << endl;                  

    cout << r3.denominator() << endl;    
    r3.denominator() = r2.denominator();
    cout << r3.denominator() << endl;    
    cout << r3 << endl;                  

    r1 = rational(3,5);
    r1.denominator() = 75;
    cout << r1 << endl;                  
    return 0;
}
