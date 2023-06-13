/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Phi Do                                                *
* Date: 26 October 2022                                         *
* File: DoPE4-17.cpp                                            *
* Description: This file contains C++ code to test one of the   *
*              logical operators for our rational class         *
*              function (with parameters (#17)                  *
* #17 function prototype:                                       *
* bool operator <= (const rational & R) const;                  *
****************************************************************/

#include <iostream>
#include "rational.h"
using namespace std;

int main()
{
    //Tesing one of our logical operators (#17)
    cout << "Test program DoPE4-17.cpp" << endl;
    cout << "Calling logical operator <=" << endl << endl;

    cout << "--------#17 Test Case 1--------" << endl;
    //instantiating rational objects called fraction1 and fraction2
    rational R1(1, 2);
    rational R2(10, 20);

    cout << "testing the values " << R1.numerator() << " for R1's numerator and " << R1.denominator() << " for R1's denominator" << endl;
    cout << "testing the values " << R2.numerator() << " for R2's numerator and " << R2.denominator() << " for R2's denominator" << endl;
    cout << "the value of R1 is " << R1 << endl;
    cout << "the value of R2 is " << R2 << endl;
    if (R1 <= R2)
    {
        cout << "the value of " << R1 << "is less than or equal to the value of " << R2 << endl;
    }
    if (R2 <= R1)
    {
        cout << "the value of " << R2 << "is less than or equal to the value of " << R1 << endl;
    }
    cout << "The expected output is: the value of 1/2 is less than or equal to the value of 1/2" << endl;
    cout << "--------End of #17 test 1--------" << endl << endl;

/************************************************************/

    cout << "--------#17 Test Case 2--------" << endl;
    rational R3(6, 10);
    rational R4(2, 5);

    cout << "testing the values " << R3.numerator() << " for R3's numerator and " << R3.denominator() << " for R3's denominator" << endl;
    cout << "testing the values " << R4.numerator() << " for R4's numerator and " << R4.denominator() << " for R4's denominator" << endl;
    cout << "the value of R3 is " << R3 << endl;
    cout << "the value of R4 is " << R4 << endl;
    if (R3 <= R4)
    {
        cout << "the value of " << R3 << "is less than or equal to the value of " << R4 << endl;
    }
    if (R4 <= R3)
    {
        cout << "the value of " << R4 << "is less than or equal to the value of " << R3 << endl;
    }
    cout << "The expected output is: the value of 2/5 is less than or equal to the value of 3/5" << endl;
    cout << "--------End of #17 test 2--------" << endl << endl;

/************************************************************/
    cout << "--------#17 Test Case 3--------" << endl;
    rational R5(116, 580);
    rational R6(7, 42);

    cout << "testing the values " << R5.numerator() << " for R5's numerator and " << R5.denominator() << " for R5's denominator" << endl;
    cout << "testing the values " << R6.numerator() << " for R6's numerator and " << R6.denominator() << " for R6's denominator" << endl;
    cout << "the value of R5 is " << R5 << endl;
    cout << "the value of R6 is " << R6 << endl;
    if (R5 <= R6)
    {
        cout << "the value of " << R5 << "is less than or equal to the value of " << R6 << endl;
    }
    if (R6 <= R5)
    {
        cout << "the value of " << R6 << "is less than or equal to the value of " << R5 << endl;
    }
    cout << "The expected output is: the value of 1/6 is less than or equal to the value of 1/5" << endl;
    cout << "--------End of #17 test 3--------" << endl << endl;

/************************************************************/
    cout << "--------#17 Test Case 4--------" << endl;
    rational R7(4, -18);
    rational R8(1, 48);

    cout << "testing the values " << R7.numerator() << " for R7's numerator and " << R7.denominator() << " for R7's denominator" << endl;
    cout << "testing the values " << R8.numerator() << " for R8's numerator and " << R8.denominator() << " for R8's denominator" << endl;
    cout << "the value of R7 is " << R7 << endl;
    cout << "the value of R8 is " << R8 << endl;
    if (R7 <= R8)
    {
        cout << "the value of " << R7 << "is less than or equal to the value of " << R8 << endl;
    }
    if (R8 <= R7)
    {
        cout << "the value of " << R8 << "is less than or equal to the value of " << R7 << endl;
    }
    cout << "The expected output is: the value of -1/48 is less than or equal to the value of -2/9" << endl;
    cout << "--------End of #17 test 4--------" << endl << endl;

/************************************************************/
    return 0;
}