/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Ryan McKay (Original by Dr. Watts)                    *
* Date: October 2022                                            *
* File: MckayRE4-18.cpp                                         *
*                                                               *
* Description: This file contains C++ code to test the +        *
* operator when used on the same rational object. In addition,  *
* the int, int constructor and the rational output operator are *
* explicitly called and the rational destructor is implicitly   *
* called.                                                       *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
    cout << "Test program MckayRE4-18.cpp" << endl;
    // Testing default constructor
    cout << "Calling int, int constructor with 3/7" << endl;
    rational fraction(3/7);
    //Testing add operator with the same fraction object
    cout << "Calling + operator on the same object" << endl;
    cout << "And calling the output operator on the result" << endl; 
    cout << fraction + fraction << endl;
    // Testing destructor
    cout << "Calling destructor as 'fraction' goes out of scope"
         << endl;
    return 0;
}
