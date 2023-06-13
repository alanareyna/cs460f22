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
int main ()
{
    cout << "Test program ReynaAE4-2.cpp" << endl;

/** Testing default constructor **/
    cout << "Calling default constructor" << endl;
    rational R1 = 1.5;

/** Testing output (insertion) operator **/
    cout << "Calling output operator" << endl;
    cout << R1 << endl;

/** 2) rational (const rational & R); **/
    cout << "Testing copy constructor" << endl;
    rational R2 = R1;
    cout << R2 << endl;

/** Testing destructor **/
    cout << "Calling destructor as 'R1' goes out of scope"
         << endl;

    return 0;
}