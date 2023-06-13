/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Ryan McKay (Original by Dr. Watts)                    *
* Date: October 2022                                            *
* File: MckayRE4-38.cpp                                         *
*                                                               *
* Description: This file contains C++ code to explicitly test   *
* the reduce member function, used on a positive rational       *
* object constructed with values that should have already been  *
* autosimplified in the constructor through an implicit call to *
* reduce. After it is constructed, reduce will then be called   *
* and the numerator and denominator should stay the same. In    *
* totality, the int, int constructor, the reduce member         *
* function and the output operator are all explicitly called.   *
* And, the reduce member function and the destructor are        *
* implicitly called.                                            *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
    cout << "Test program MckayRE4-38.cpp" << endl;
    // Testing default constructor 
    // (which results in an implicit call to reduce)
    cout << "Calling int, int constructor with 9, 12" << endl;
    rational fraction(9, 12);
    // Testing output (insertion) operator
    cout << "Calling output operator" << endl;
    cout << fraction << endl;
    //Testing the reduce function, which should do nothing since 
    //the rational class should already auto reduce
    cout << "Calling the reduce member function" << endl;
    fraction.reduce();
    // Testing output (insertion) operator
    cout << "Calling output operator" << endl;
    cout << fraction << endl;
    // Testing destructor
    cout << "Calling destructor as 'fraction' goes out of scope"
         << endl;
    return 0;
}
