
/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program. *
* Author: Karsten Steinhorst *
* Date: October 29 2022 *
* File: SteinhorstKE4-7.cpp *
* *
* Description: This file contains C++ code to test #7 in rational.h *
* one of the constructors for rational objects. *
* In addition, the rational output operator (<<) *
* and the rational destructor will be called. *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
    int num,dem;
    cout << "Test program SteinhorstKE4-7.cpp" << endl;
    cout << "Calling default constructor " << endl;
    cout << "Calling output operator" << endl;

    num = 4;
    dem = 10;
    rational test1 (num, dem);
    cout <<"test 1: " << test1 << endl;
    // testing num < dem rational

    num = 6;
    dem = 1;
    rational test2(num, dem);
    cout <<"test 2: "<< test2 << endl;
    // testing num/1 rational or rational = n

    num = 3;
    dem = 3;
    rational test3 (num,dem);
    cout <<"test 3: "<< test3 << endl;
    // testing num = dem aka rational = 1;

return 0;
}

