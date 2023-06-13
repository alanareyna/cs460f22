/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Sam Ho                                                *
* Date: October 2022                                            *
* File: subidE4-20.cpp                                          *
*                                                               *
* Description: This file contains C++ code to test the
                subtraction  of rational numbers                *
*                                                               *                          
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;





int main ()
{
cout << "Test program subidE4-20.cpp" << endl;
rational fraction1 , fraction2;

fraction1 = 3/2;
fraction2 = 1/2;
// Testing subtraction

cout << "Test Subtraction of 2 rational number" << endl;
cout << fraction1 << "-" << fraction2 <<  '=' << fraction1 - fraction2 << endl;

return 0;
}