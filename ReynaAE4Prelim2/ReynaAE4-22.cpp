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
int main (){
    cout << "Test program ReynaAE4-22.cpp" << endl;

/** Testing default constructor **/
    cout << "Calling default constructor" << endl;
    rational R1 = 2.0;
    rational R2 = 3.0;

/** Testing output (insertion) operator **/
    cout << "Calling output operator" << endl;
    cout << R1 << endl;
    cout << R2 << endl;

/** 22) rational operator *= (const rational & R); **/
    cout << "Testing *= arithmetic operator" << endl;
    R1 *= R2;
    cout << R1 << endl;
}