/****************************************************************
* Assignment: Exercise 4-13 - rational Class > Test.            *
* Author: Matthew Berlin                                        *
* Date: October 29 2022                                         *
* File: berlinME4-13.cpp                                        *
*                                                               *
* Description: This file contains C++ code to construct two     *
* rational objects, as well as test the > comparison for the    *
* rational class.                                               *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
cout << "Test program berlinME4-13.cpp:" << endl;
// Testing default constructor
cout << "Calling default constructor for two rationals..." << endl;
rational theRational;
rational theOtherRational;
// Testing > comparison operator
cout << "Performing > comparison on the two rationals:" << endl;

if(theRational > theOtherRational){
    cout << "theRational is more than theOtherRational." << endl;
}
else{
    cout << "theRational is not more than theOtherRational." << endl;
}

return 0;
}
