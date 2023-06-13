/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Anthony Molinari                                      *
* Date: October 2022                                            *
* File: molinariaE4-30.cpp                                      *
*                                                               *
* Description: This file contains c++ code to test the          *
* integer conversion operator. In addition, the rational        *
* output operator (<<) and the rational destructor              *
* will be called.                                               *
****************************************************************/

#include <iostream>
#include "rational.h"
using namespace std;

int main() 
{

    // testing function 30
    rational r1 = rational(1/1);
    cout << (int) r1 << endl; // 1

    // case 1
    r1 = rational(1/2);
    cout << (int) r1 << endl; // 0
    
    // case 2
    r1 = rational(4/3);
    cout << (int) r1 << endl; // 1

    // case 3
    r1 = rational(200,100);
    cout << (int) r1 << endl; // 2 
    
    // case 4
    r1 = rational(16/7);
    cout << (int) r1 << endl; // 2

    // case 5 
    r1 = rational(1000/10);
    cout << (int) r1 << endl; // 100
    
    return 0;
}
