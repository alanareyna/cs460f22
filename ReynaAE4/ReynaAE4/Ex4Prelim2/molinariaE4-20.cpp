/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Anthony Molinari                                      *
* Date: October 2022                                            *
* File: molinariaE4-20.cpp                                      *
*                                                               *
* Description: This function test the rational subtraction      *
* opperator (-). In addition the raitonal constructor,          *
* the rational copy constructor, the rational                   *
* output operator (<<) and the rational destructor              *
* will be called.                                               *
****************************************************************/

#include <iostream>
#include "rational.h"

using namespace std;

int main() 
{

    // testing subtraction operator
    rational r1(1/2);
    rational r2(1/3);

    // case 1
    cout << r1-r2 << endl; 
    cout << r2-r1 << endl; 
    
    // case 2
    r1 = rational(78/100);
    r2 = rational(7/16);
    rational r3 = r1 - r2;
    cout << r3 << endl;

    // case 3
    cout << r3 - r2 << endl;

    // case 4
    r1 = rational(-10/35);
    cout << r3 - r2 - r1 << endl;
    
    // case 5
    rational r4(-433/1400);
    cout << r3 - r2 - r1 - r4 << endl;

    return 0;
}
