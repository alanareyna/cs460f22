/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program. 
* Author: Luke D-W
* Date: October 2022 
* File: Demeter-WillisonLE4-16.cpp 
* 
* Description: This file contains C++ code to test the less-than
* operator for the rational class.
* In addition, the rational (numerator, denominator) constructor
* and the rational destructor will be called.
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
    cout << "Test program Demeter-WillisonLE4-16.cpp" << endl;
    // Testing constructor that takes two ints
    cout << "Calling (numerator, denominator) constructor (occurs once/twice for each printed test)" << endl;
    rational small = rational(20,40);
    rational big = rational(2,1);

    
    // Not exhautive, but testing to ensure no particular oddities with whole numbers
    cout << "Comparing 20/40 < 2/1" << endl;
    cout << ((small < big) ? "true" : "false") << endl;
    cout << "Comparing 2/1 < 20/40" << endl;
    cout << ((big < small) ? "true" : "false") << endl;


    //Testing proper comparison of negative numbers vs positive
    small = rational(-3,2);
    big = rational(1,2);
    cout << "Comparing -3/2 < 1/2" << endl;
    cout << ((small < big) ? "true" : "false") << endl;
    cout << "Comparing 1/2 < -3/2" << endl;
    cout << ((big < small) ? "true" : "false") << endl;

    //Testing that dissimilar denominators still work
    small = rational(20,40);
    big = rational(5,3);
    cout << "Comparing 20/40 < 5/3" << endl;
    cout << ((small < big) ? "true" : "false") << endl;
    cout << "Comparing 5/3 < 20/40" << endl;
    cout << ((big < small) ? "true" : "false") << endl;


    // Testing destructor
    cout << "Calling destructor as 'big' and 'small' go out of scope" << endl;
    return 0;
}