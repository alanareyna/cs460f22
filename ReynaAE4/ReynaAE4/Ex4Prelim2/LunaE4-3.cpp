/*****************************************************************
* Assignment: Exercise 4 - rational unit test framework for #3   *
* Author: Brandon Luna Rodriguez                                 *
* Date: Fall 2022                                                *
* File: LunaE4-3.cpp                                             *
*                                                                *
* Description: This file contains the unit test for #3 function  *
* which is the destructor it tests the destructor in 3 ways      *
* the first method being regular out of scope destructor         *
* the second method involves deleting dynamic memory that has    *
* been allocated, and the third method involves creating a       *
* rational vector that calls its constructor 10 times when       *
* first initialized and when the clear() method is used it       *
* destructs 10 times                                             *
*****************************************************************/

#include <iostream>
#include <vector>
#include "rational.h"
using namespace std;

int main ()
{
    cout << "Test program LunaE4-3.cpp" << endl;

    /***************** Hard Coded Unit Test *****************/

    cout << "Running hard coded unit tests" << endl;
    cout << "-----------------------------" << endl;

    rational fractionRational(1,2); // Method #1: Regular out of scope destructor testing
    rational decimalRational(0.5); // Method #1: Regular out of scope destructor testing
    rational * dynamicRational = new rational(1,2); // Method #2: Dynamic Allocation Destructor
    vector<rational> RV(10);    // Method #4: CReating a vector to destruct 10 times

    cout << "Fraction Rational: " << fractionRational << endl;  // prints out '1/2'
    cout << "Decimal Rational: " << decimalRational << endl; // prints out '0.5'

    cout << "\n Hard Coded Unit Tests Concluded! \n" << endl;

    RV.clear(); // Destructing the vector 10 times
    cout << "Vector cleared / destructed 10 times" << endl;
    // Testing destructor
    cout << "Calling destructor as vars go out of scope" << endl;
    delete [] dynamicRational; // Destructor / deleting dynamically allocated instance of Rational
    cout << "Dynamically allocated rational var dynamically destructed" << endl;
    return 0;
}