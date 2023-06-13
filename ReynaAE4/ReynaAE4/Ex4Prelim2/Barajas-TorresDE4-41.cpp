/***************************************************************** 
* Assignment: Exercise 4 - rational Class Test Program.          * 
* Author: Daniel Barajas Torres                                  *
* Date: October 26, 2022                                         * 
* File: Barajas_TorresDE4-41.cpp                                 * 
* Description: This file contains C++ code to test the LCM       *
* function, it also calls an alternate constructor and a         *
* destructor as it goes out of scope.                            *
*****************************************************************/
#include <iostream> 
#include "rational.h"
using namespace std;
int main ()
{
    cout << "Test program Barajas_TorresDE4-41.cpp" << endl; 
    // Testing alternate constructor
    cout << "Calling alternate constructor" << endl;
    rational fraction(2,6);

    // Testing LCM function
    cout << "Calling LCM friend function with input 2 and 6, expecting 6" << endl;
    cout << "Result is: " << fraction.LCM(2,6) << endl;
    
    // Testing destructor
    cout << "Calling destructor as 'fraction' goes out of scope" << endl;
    return 0;
}