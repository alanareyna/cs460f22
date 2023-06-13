/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program. *
* Author: Owen Mastropietro *
* Date: October 2022 *
* File: MastropietroOE4-6.cpp *
* *
* Description: This file contains C++ code to test the *
* friend ostream & operator << (ostream & output, const rational & R) method. *
* In addition, *
* the constructor for rational(int num, int denom) objects, *
* and the rational destructor will be called. *
****************************************************************/
#include <iostream>
#include "rational.h"

using namespace std;

/* friend ostream & operator << (ostream & output, const rational & R); */

int main ()
{
    // Testing Correct Handling of Whole Numbers with Double Negativity
    cout << "Test Program MastropietroOE4-6.cpp" << endl;
    
    // Testing rational(int num, int denom) Constructor
    cout << "Calling rational(int num, int denom) Constructor" << endl;
    rational f1(-1, -1); 
    
    cout << "Calling rational(int num, int denom) Constructor" << endl;
    rational f2(-1, -2); 
    
    // Testing Output (Insertion) Operator
    cout << "Calling output operator on rational(-1, -1)" << endl;
    cout << "f1: <" << f1 << ">" << endl;
    
    cout << "Calling output operator on rational(-1, -2)" << endl;
    cout << "f2: <" << f2 << ">" << endl;


    cout << "Calling destructor as f1 and f2 go out of scope" << endl;
    return 0;
}