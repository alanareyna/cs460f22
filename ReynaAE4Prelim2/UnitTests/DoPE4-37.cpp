/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Phi Do                                                *
* Date: 27 October 2022                                         *
* File: DoPE4-37.cpp                                            *
* Description: This file contains C++ code to test one of the   *
*              conversion operators for our rational class      *
*              function (with parameters const rational & R,    *
*              unsigned D                                       *
* #37 function prototype:                                       *
* friend rational round (const rational & R, unsigned D);       *
*                                                               *
* Note: I believe we need to round to 5 decimal places, so this *
* function tests for 5 decimal places.                          *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;

int main()
{
    // Setting decimal precision to 5
    unsigned D = 5;

    //Tesing one of our conversion operators (#37)
    cout << "Test program DoPE4-37.cpp" << endl;
    cout << "Calling conversion operator: round" << endl << endl;

    cout << "--------#37 Test Case 1--------" << endl;
    rational R1 = 0.6666666666;

    cout << R1 << " rounds to " << round(R1, D) << endl;
    cout << "expected output: 0.6666666666 rounds to 0.66667" << endl;

    cout << "--------End of #37 test 1--------" << endl << endl;

/************************************************************/

    cout << "--------#37 Test Case 2--------" << endl;
    rational R2 = 1000.75;

    cout << R2 << " rounds to " << round(R2, D) << endl;
    cout << "expected output: 1000.75 rounds to 1000.75000" << endl;

    cout << "--------End of #37 test 2--------" << endl << endl;

/************************************************************/

    cout << "--------#37 Test Case 3--------" << endl;
    rational R3 = -54.0 + (1.0/3.0);

    cout << R3 << " rounds to " << round(R3, D) << endl;
    cout << "expected output: -54.0 + (1.0/3.0) rounds to -53.66667" << endl;

    cout << "--------End of #37 test 3--------" << endl << endl;

/************************************************************/

    cout << "--------#37 Test Case 4--------" << endl;
    rational R4 = (1.0/3.0) * (7.0/8.0) * 0.25;

    cout << R4 << " rounds to " << round(R4) << endl;
    cout << "expected output: (1.0/3.0) * (7.0/8.0) * 0.25 rounds to 0.07297" << endl;

    cout << "--------End of #37 test 4--------" << endl << endl;

/************************************************************/

    return 0;
}