/****************************************************************
* Assignment: Exercise 4-23 - rational Class += Test.           *
* Author: Matthew Berlin                                        *
* Date: October 29 2022                                         *
* File: berlinME4-23.cpp                                        *
*                                                               *
* Description: This file contains C++ code to construct two     *
* rational objects, as well as test the += operation and output *
* operation for the rational class.                             *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
cout << "Test program berlinME4-23.cpp:" << endl;
// Testing default constructor
cout << "Calling default constructor for two rationals..." << endl;
rational theRational;
rational theOtherRational;
// Testing > comparison operator
cout << "Original value of theRational: " << theRational << endl;

theRational += theOtherRational;

cout << "The new value of theRational: " << theRational << endl;

return 0;
}
