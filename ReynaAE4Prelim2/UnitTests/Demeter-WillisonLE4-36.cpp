/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program. 
* Author: Luke D-W
* Date: October 2022 
* File: Demeter-WillisonLE4-36.cpp 
* 
* Description: This file contains C++ code to test the 
* int-returning round friend function of the rational class.
* In addition, the rational (numerator, denominator) constructor
* and the rational destructor will be called.
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
    cout << "Test program Demeter-WillisonLE4-36.cpp" << endl;
    // Testing constructor that takes two ints
    cout << "Calling (numerator, denominator) constructor (occurs once for each printed test)" << endl;
    
    //Testing for proper rounding-up
    cout << "Testing round on 1/2" << endl;
    int result = round(rational(1,2));
    cout << result << endl;

    //Testing for proper rounding of negative numbers
    cout << "Testing round on -1/2" << endl;
    result = round(rational(-1,2));
    cout << result << endl;

    return 0;
}