/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program. *
* Author: Jacob Rosner *
* Date: October 2022 *
* File: rosnerE4-5.cpp *
* *
* Description: This file contains C++ code to test the default *
* constructor for rational objects. *
* In addition, the rational output operator (<<), the input operator (>>) *
* and the rational destructor will be called. *
****************************************************************/
#include <iostream>
#include "rational.h"
#include <fstream>
using namespace std;
int main ()
{
    int numerator, denominator;
    unsigned roundIn;


    cout << "Test program RosnerE4-5.cpp" << endl;
    // Testing default constructor
    cout << "Calling default constructor" << endl;
    rational fraction;

    // Testing input operator
    cout << "Calling input operator" << endl;
    cin >> fraction;
    cout << "fraction: " << fraction << endl;

    // Testing destructor
    cout << "Calling destructor as 'fraction' goes out of scope"
    << endl;
    return 0;
}
