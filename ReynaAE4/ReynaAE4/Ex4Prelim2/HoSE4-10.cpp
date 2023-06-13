/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Sam Ho                                                *
* Date: October 2022                                            *
* File: subidE4-10.cpp                                          *
*                                                               *
* Description: This file contains C++ code to test the access   *
*               to denominator of rational number               *                          
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;





int main ()
{
cout << "Test program subidE4-10.cpp" << endl;
rational fraction;
// Testing assign value to the denominator

int denom = 9;
fraction.denominator() = denom;

cout << "Calling denominator of a rational number" << endl;
cout << "Rational denominator: " << fraction.denominator() << endl;

// Testing assign value 0 to the denominator
denom = 0;
fraction.denominator() = denom;



return 0;
}