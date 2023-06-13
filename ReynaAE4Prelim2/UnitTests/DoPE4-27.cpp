/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Phi Do                                                *
* Date: 27 October 2022                                         *
* File: DoPE4-27.cpp                                            *
* Description: This file contains C++ code to test one of the   *
*              arithmetic operators for our rational class      *
*              function (with parameter int)                    *
* #27 function prototype:                                       *
* rational operator ++ (int); // Post                           *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;

int main()
{
    //Tesing one of our arithmetic operators (#27)
    cout << "Test program DoPE4-27.cpp" << endl;
    cout << "Calling arithmetic operator ++ (Post)" << endl << endl;

    cout << "--------#27 Test Case 1--------" << endl;
    int integer1 = 0;

    cout << "integer starts at " << integer1 << " and becomes " << integer1++ << endl;
    cout << "expected output: integer starts at 0 and becomes 1" << endl;

    cout << "--------End of #27 test 1--------" << endl << endl;

/************************************************************/

    cout << "--------#27 Test Case 2--------" << endl;
    int integer2 = -50;

    cout << "integer starts at " << integer2 << " and becomes " << integer2++ << endl;
    cout << "expected output: integer starts at -50 and becomes -49" << endl;

    cout << "--------End of #27 test 2--------" << endl << endl;

/************************************************************/

    cout << "--------#27 Test Case 3--------" << endl;
    int integer3 = 2147483647;

    cout << "integer starts at " << integer3 << " and becomes " << integer3++ << endl;
    cout << "expected output: integer starts at 2147483647 and becomes -2147483648" << endl;

    cout << "--------End of #27 test 3--------" << endl << endl;

/************************************************************/

    cout << "--------#27 Test Case 4--------" << endl;
    int integer4 = -5;

    for (integer4; integer4 < 10; integer4++)
    {
        cout << "integer: " << integer4 << endl;
    }

    cout << "expected output:" << endl;
    cout << "integer: -5" << endl;
    cout << "integer: -4" << endl;
    cout << "integer: -3" << endl;
    cout << "integer: -2" << endl;
    cout << "integer: -1" << endl;
    cout << "integer: 0" << endl;
    cout << "integer: 1" << endl;
    cout << "integer: 2" << endl;
    cout << "integer: 3" << endl;
    cout << "integer: 4" << endl;
    cout << "integer: 5" << endl;
    cout << "integer: 6" << endl;
    cout << "integer: 7" << endl;
    cout << "integer: 8" << endl;
    cout << "integer: 9" << endl;
    cout << "--------End of #27 test 4--------" << endl << endl;

    return 0;
}