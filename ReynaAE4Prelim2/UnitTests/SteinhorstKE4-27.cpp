
/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program. *
* Author: Karsten Steinhorst *
* Date: October 29 2022 *
* File: SteinhorstKE4-27.cpp *
* *
* Description: This file contains C++ code to test #27 in rational.h *
* post increment for rational*
* In addition, the rational output operator (<<) *
* and the rational destructor will be called. *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
    int num,dem;
    cout << "Test program SteinhorstKE4-27.cpp" << endl;
    cout << "Calling default constructor and rational" << endl;
    cout << "Calling output operator" << endl;

    rational test1,test2,test3;
    test1=(3,7);
    test2=(.5);
    test3=(5);
    for(int i = 0; i < 2; i++){
        test1++;
        test2++;
        test3++;
    }
    cout <<"test 1: "<< test1 << endl; // 3/7 + 2
    cout <<"test 2: "<< test2 << endl; // .5 + 2
    cout <<"test 3: "<< test3 << endl; // 5 + 2
return 0;
}