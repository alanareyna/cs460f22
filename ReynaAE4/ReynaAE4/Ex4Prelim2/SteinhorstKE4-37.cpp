
/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program. *
* Author: Karsten Steinhorst *
* Date: October 29 2022 *
* File: SteinhorstKE4-37.cpp *
* *
* Description: This file contains C++ code to test #37 in rational.h *
* and rounding our rational data types *
* In addition, the rational output operator (<<) *
* and the rational destructor will be called. *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{

cout << "Test program SteinhorstKE4-37.cpp" << endl;
cout << "Calling default constructor " << endl;
cout << "Calling output operator" << endl;

rational test1, test2, test3;

test1=(26.2839993);
test1=round(test1,3);
cout << test1;

test2=(.038502);
test2=round(test2,2);
cout << test2 << endl;

test3=(3,9);
test3=round(test3,3);
cout << test3 << endl;

return 0;
}
