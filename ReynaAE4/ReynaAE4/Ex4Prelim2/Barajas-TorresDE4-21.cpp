/***************************************************************** 
* Assignment: Exercise 4 - rational Class Test Program.          * 
* Author: Daniel Barajas Torres                                  *
* Date: October 26, 2022                                         * 
* File: Barajas_TorresDE4-21.cpp                                 * 
* Description: This file contains C++ code to test the *         *
* operator, it also calls two alternate constructors and a       *
* destructor as it goes out of scope.                            *
*****************************************************************/
#include <iostream> 
#include "rational.h"
using namespace std;
int main ()
{
    cout << "Test program Barajas_TorresDE4-21.cpp" << endl; 
    // Testing alternate constructor
    cout << "Calling two alternate constructors" << endl;
    rational fraction(1,2);
    rational secondFraction(3,2);

    // Testing * operator
    cout << "Muliplying fraction and secondFraction, expecting 3/4" << endl;
    cout << "Result is: " << (fraction * secondFraction) << endl;
    
    // Testing destructor
    cout << "Calling destructor as 'fraction' goes out of scope" << endl;
    return 0;
}