/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.           *
* Author: Alejandro Madrigal                                      *
* Date: October 2022                                              *
* File: MadrigalAE4-14.cpp                                        *
*                                                                 *
* Description: This file contains C++ code to test the GTE        *
* operator for rational objects.                                  *
*                                                                 *
****************************************************************/
#include <iostream>
#include "rational.h"

using namespace std;

int main ()
{
    cout << "Test program MadrigalAE4-14.cpp" << endl;

    rational r1(2, 4), r2(3, 6);
    bool res;
    cout << "r1: " << r1 << endl;
    cout << "r2: " << r2 << endl;
    // Testing GTE operator
    cout << "Calling the GTE operator" << endl;
    res = r1 >= r2;
    if(res){
        cout << "Result: r1 is >= r2" << endl;
    }
    else{
        cout << "Result: r1 is < r2" << endl;
    }

    return 0;
} 