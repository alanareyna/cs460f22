/****************************************************************
* Assignment: Exercise 4-33 - rational Class to_string Test.    *
* Author: Matthew Berlin                                        *
* Date: October 29 2022                                         *
* File: berlinME4-33.cpp                                        *
*                                                               *
* Description: This file contains C++ code to construct a       *
* rational object, as well as test the to_string operation for  *
* the rational class.                                           *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
cout << "Test program berlinME4-33.cpp:" << endl;
// Testing default constructor
cout << "Calling default constructor for rational..." << endl;
rational theRational;
// Testing > comparison operator
cout << "Outputting theRational after being converted into a string: " << to_string(theRational) << endl;
return 0;
}
