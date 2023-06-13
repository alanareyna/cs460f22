/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Jacob Rosner                                          *
* Date: October 2022                                            *
* File: rosnerE4-15.cpp                                         *
*                                                               *
* Description: This file contains C++ code to test the default  *
* constructor for rational objects.                             *
* In addition, the rational output operator (<<),               *
* the assignment operator (=), the bool operator (==),          *
* the numerator() function,                                     *
* and the rational destructor will be called.                   *
****************************************************************/
#include <iostream>
#include "rational.h"
#include <fstream>
using namespace std;
int main ()
{
    int numerator, denominator;
    unsigned roundIn;


    cout << "Test program RosnerE4-15.cpp" << endl;
    // Testing default constructor
    cout << "Calling default constructor" << endl;
    rational fraction = rational(-3,2);
    rational fraction2 = rational(-3,2);
    cout << "fraction's values are " << fraction << ' ' << fraction2 << endl;

    // Testing bool operator == 
    cout << "Calling bool operator == and comparing fraction to fraction2" << endl;
    if(fraction == fraction2){
        cout << "fraction is equal to fraction2" << endl;
    }
    else{
        cout << "fraction is not equal to fraction2" << endl;
    }
    cout << "The value of both fractions are: " << fraction << ' ' << fraction2 << endl;

    // Testing destructor
    cout << "Calling destructor as 'fraction' goes out of scope"
    << endl;
    return 0;
}
