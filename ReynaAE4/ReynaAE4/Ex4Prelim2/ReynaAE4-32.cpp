/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Dr. Watts                                             *
* Modified by: Alana Reyna                                      *
* Date: October 2022                                            *
* File: ReynaAE4-2cpp                                           *
* Group: 2                                                      *
*                                                               *
* Description: This file contains C++ code to test the copy     *
* constructor. This file is also calling the constructor,       *
* destructor, and output operator as well.                      *
****************************************************************/

#include <iostream>
#include "rational.h"
using namespace std;
int main () {
    cout << "Test program ReynaAE4-22.cpp" << endl;

/** Testing default constructor **/
    cout << "Calling default constructor" << endl;
    rational R1 = 1;

/** Testing output (insertion) operator **/
    cout << "Calling output operator" << endl;
    cout << R1 << endl;

/** 32) operator double () const; **/
    cout << "Testing conversion to double operator" << endl;
    double D = R1;
    cout << D << endl;

}
