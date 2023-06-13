/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Dr. Watts                                             *
* Modified by: Alana Reyna                                      *
* Date: October 30, 2022                                        *
* File: ReynaAE4-2cpp                                           *
* Group: 2                                                      *
*                                                               *
* Description: This file contains C++ code to test the          *
* arithmetic operator. This file is also calling the            *
* constructor, destructor, and output operator as well.         *
****************************************************************/

#include <iostream>
#include "rational.h"
using namespace std;
int main (){

    cout << "Test program ReynaAE4-12.cpp" << endl;

/** Testing default constructor **/
    cout << "Calling default constructor" << endl;
    rational R1 = 1.5;
    rational R2 = 2.5;
    rational R3 = 3.5;

/** Testing output (insertion) operator **/
    cout << "Calling output operator" << endl;
    cout << R1 << endl;
    cout << R2 << endl;
    cout << R3 << endl;

/** 12) bool operator != (const rational & R) const;  **/
    cout << "Testing not equal boolean operator" << endl;
    if (R1 != R2){
        cout << "Rational R1 does not equal Rational R2" << endl;
    }
    else if (R2 != R3){
        cout << "Rational R2 does not equal Rational R3" << endl;
    }
    return 0; // destructor
}