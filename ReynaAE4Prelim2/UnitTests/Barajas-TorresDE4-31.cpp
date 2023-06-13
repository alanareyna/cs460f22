/***************************************************************** 
* Assignment: Exercise 4 - rational Class Test Program.          * 
* Author: Daniel Barajas Torres                                  *
* Date: October 26, 2022                                         * 
* File: Barajas_TorresDE4-31.cpp                                 * 
* Description: This file contains C++ code to test the float     *
* conversion, it also calls an alternate constructor and a       *
* destructor as it goes out of scope.                            *
*****************************************************************/
#include <iostream> 
#include "rational.h"
using namespace std;
int main ()
{
    cout << "Test program Barajas_TorresDE4-31.cpp" << endl; 
    // Testing alternate constructor
    cout << "Calling alternate constructor, assigning 3 and 2" << endl;
    rational fraction(3,2);

    // Testing float conversion
    cout << "Testing float conversion, expecting 1.5" << endl;
    cout << "Result is: " << float(fraction) << endl;
    
    // Testing destructor
    cout << "Calling destructor as 'fraction' goes out of scope" << endl;
    return 0;
}