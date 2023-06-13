/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Anthony Molinari                                      *
* Date: October 2022                                            *
* File: molinariaE4-40.cpp                                      *
*                                                               *
* Description: This file contains C++ code to test the GCD      *
* method from the rational class.                               *
* In addition, the rational output operator (<<)                *
* and the rational destructor will be called.                   *
****************************************************************/

#include <iostream>
#include "rational.h"

using namespace std;

int main() 
{
    // testing function 40   
    // case 0
    cout << GCD(0,0) << endl; // 0

    // case 1
    cout << GCD(1,1) << endl; // 1
    
    // case 2
    cout << GCD(5,10) << endl; // 5

    // case 3
    cout << GCD(39,65) << endl; // 13

    // case 4
    cout << GCD(343,2401) << endl; // 343

    // case 5
    cout << GCD(8976, 4590) << endl; // 102

    // case 6
    cout << GCD(25675, 78320) << endl; // 5

    return 0;
}
