/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Sam Ho                                                *
* Date: October 2022                                            *
* File: subidE4-30.cpp                                          *
*                                                               *
* Description: This file contains C++ code to test the int      *
*              convert from rational number                     *                          
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;





int main ()
{
cout << "Test program subidE4-30.cpp" << endl;
rational fraction;
// Testing assign value to the denominator
fraction = 4/3;

int a = fraction;

cout << "Test Rational convert to int: " << endl;
cout << "Rational: " << fraction << "Interger: " << a << endl;



return 0;
}