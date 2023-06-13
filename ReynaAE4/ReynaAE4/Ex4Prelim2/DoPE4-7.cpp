/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Phi Do                                                *
* Date: 25 October 2022                                         *
* File: DoPE4-7.cpp                                             *
* Description: This file contains C++ code to test one of the   *
*              additional constructors for our rational class   *
*              function (with parameters const int numerator,   *
*              const int denominator)(#7)                       *
* #7 function prototype:                                        *
* rational (const int numerator, const int denominator);        *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;

int main()
{
    //Note to self: do we need to check for the data type of the numerator and denominator??

    //Tesing one of our additional constructors (#7)
    cout << "Test program DoPE4-7.cpp" << endl;
    cout << "Calling additional constructor" << endl << endl;

    cout << "--------#7 Test Case 1--------" << endl;

    rational fraction1 (50, 10); //instantiating a rational object called fraction

    cout << "Numerator: " << fraction1.numerator() << endl;

    //checks if denominator is 0
    if (fraction1.denominator() == 0)
    {
        cout << "Error: denominator cannot be 0" << endl;
        exit;
    }
    else
    {
        cout << "Denominator: " << fraction1.denominator() << endl;
    }

    cout << "Test fraction #1: " << fraction1 << endl;
    cout << "The expected output is: 5" << endl;
    cout << "--------End of #7 test 1--------" << endl << endl;

/************************************************************/

    cout << "--------#7 Test Case 2--------" << endl;
    rational fraction2 (-64, 9);

    cout << "Numerator: " << fraction2.numerator() << endl;

    //checks if denominator is 0
    if (fraction2.denominator() == 0)
    {
        cout << "Error: denominator cannot be 0" << endl;
        exit;
    }
    else
    {
        cout << "Denominator: " << fraction2.denominator() << endl;
    }

    cout << "Test fraction #2: " << fraction2 << endl;
    cout << "The expected output is: -64/9" << endl;
    cout << "--------End of #7 test 2--------" << endl << endl;

/************************************************************/

    cout << "--------#7 Test Case 3--------" << endl;
    rational fraction3 (2147483647, 1);

    cout << "Numerator: " << fraction3.numerator() << endl;

    //checks if denominator is 0
    if (fraction3.denominator() == 0)
    {
        cout << "Error: denominator cannot be 0" << endl;
        exit;
    }
    else
    {
        cout << "Denominator: " << fraction3.denominator() << endl;
    }

    cout << "Test fraction #3: " << fraction3 << endl;
    cout << "The expected output is: 2147483647" << endl;
    cout << "--------End of #7 test 3--------" << endl << endl;

/************************************************************/

    cout << "--------#7 Test Case 4--------" << endl;
    rational fraction4 (1, 0);    

    cout << "Numerator: " << fraction4.numerator() << endl;

    //checks if denominator is 0
    if (fraction4.denominator() == 0)
    {
        cout << "Error: denominator cannot be 0" << endl;
        exit;
    }
    else
    {
        cout << "Denominator: " << fraction4.denominator() << endl;
    }

    cout << "The expected output is: An error message" << endl;
    cout << "--------End of #7 test 4--------" << endl << endl;

    return 0;
}