
/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program. *
* Author: Karsten Steinhorst *
* Date: October 29 2022 *
* File: SteinhorstKE4-17.cpp *
* *
* Description: This file contains C++ code to test #17 in rational.h *
* LTE operator for rationals *
* In addition, the rational output operator (<<) *
* and the rational destructor will be called. *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
    int num,dem;
    cout << "Test program SteinhorstKE4-17.cpp" << endl;
    cout << "Calling default constructor and rational" << endl;
    cout << "Calling output operator" << endl;

    rational testing;

    
    rational test1 = 20.8;

    

    testing = 50;
    cout << "Test 1(20.8 <= 50) : ";
    if(test1 <= testing){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }
    // rational double <=
    testing = (.5);
    rational test2(10, 20);
    cout << "Test 2(1/2 <= 1/2) : ";
    if(test1 <= testing){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }
    // testing rational fraction <=

    testing = 5;
    rational test3 = 8;
    cout << "Test 3(8 <= 5) : ";
    if(test1 <= testing){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }

return 0;
}