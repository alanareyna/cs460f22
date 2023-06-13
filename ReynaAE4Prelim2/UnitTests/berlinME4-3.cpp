/****************************************************************
* Assignment: Exercise 4-3 - rational Class Destructor Test.    *
* Author: Matthew Berlin                                        *
* Date: October 27 2022                                         *
* File: berlinME4-3.cpp                                         *
*                                                               *
* Description: This file contains C++ code to dynamically       *
* allocate rational objects, as well as test the destructor for *
* the rational class.                                           *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
cout << "Test program berlinME4-3.cpp:" << endl;
// Testing default constructor
cout << "Calling default constructor dynamically." << endl;
rational* theRational = new rational[20];
// Testing destructor
cout << "Calling destructor on 'theRational' which was dynamically allocated." << endl;
for(int i = 0; i < 20; i++){
    delete []theRational;
} 

return 0;
}
