/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.        *
* Author: Ellie Parker                                         *
* Date: October 2022                                           *
* File: subidE4-11.cpp                                         *
*                                                              *
* Description: This file tests the multiplication operator     *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
    cout << "Test program subidE4-21.cpp" << endl;
    // Calling default constructors for 2/4 and 3/5
    cout << "Calling constructors as 2/4 and 3/5" << endl;
    rational fraction(2, 4);
    rational fraction2(3, 5);
    cout << "Calling * operator" << endl;
    cout << "Output should be 3/10 or 6/20 if unsimplified and is: " << fraction * fraction2 << endl;
    return 0;
}