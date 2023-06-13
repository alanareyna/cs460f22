/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Andrew Tellez (Original by Dr. Watts)                 *
* Date: October 26 2022                                         *
* File: TellezAE4-38.cpp                                        *
*                                                               *
* Description: This file contains C++ code to test the reduce() *
* function for rational objects. The constructor for a          *
* rational(int, int) is used. In addition, the rational         *
* output operator (<<) and the rational destructor will         *
* be called.                                                    *
****************************************************************/

#include <iostream>
#include "rational.h"

using namespace std;

int main () {
    cout << "Test program TellezAE4-38.cpp" << endl;
    cout << "Calling constructor with value 4, 8" << endl;
    rational fraction(4, 8);
    cout << "Calling output operator" << endl;
    cout << fraction << endl;
    cout << "Reducing fraction and displaying result" << endl;
    cout << fraction.reduce() << endl;
    cout << "Calling destructor as 'fraction' goes out of scope" << endl;
}