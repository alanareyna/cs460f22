/***************************************************************** 
* Assignment: Exercise 4 - rational Class Test Program.          * 
* Author: Daniel Barajas Torres                                  *
* Date: October 26, 2022                                         * 
* File: Barajas_TorresDE4-11.cpp                                 * 
* Description: This file contains C++ code to test the numerator *
* function, it also calls the constructor for creation, the      *
* destructor once the function goes out of scope, and the <<     *
* operator to display the data                                   *
*****************************************************************/
#include <iostream> 
#include "rational.h"
using namespace std;
int main ()
{
    cout << "Test program Barajas_TorresDE4-11.cpp" << endl; 
    // Testing default constructor
    cout << "Calling default constructor" << endl;
    rational fraction;
    // Testing numerator function
    cout << "Assigning fraction numerator to 4 initially" << endl;
    fraction.numerator() = 4;

    cout << "Numerator is: " << fraction.numerator() << endl;
    
    // Testing destructor
    cout << "Calling destructor as 'fraction' goes out of scope" << endl;
    return 0;
}