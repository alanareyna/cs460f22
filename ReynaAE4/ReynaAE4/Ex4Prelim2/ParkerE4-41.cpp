/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.        *
* Author: Ellie Parker                                         *
* Date: October 2022                                           *
* File: subidE4-11.cpp                                         *
*                                                              *
* Description: This file tests the LCM friend function with    *
*              three different logical combinations.           *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;

int LCM(int a, int b); // Used to compile program

int main ()
{
    cout << "Test program subidE4-11.cpp" << endl;
    // Call LCM method with values 3 and 4
    rational fraction(2, 4);
    cout << "Calling LCM method with values 3 and 4 which should return 12" << endl;
    cout << "Returned: " << LCM(3, 4) << endl;
    cout << "Calling LCM method with values 36 and 12 which should return 36" << endl;
    cout << "Returned: " << LCM(36, 12) << endl;
    cout << "Calling LCM method with values 12 and 48 which should return 48" << endl;
    cout << "Returned: " << LCM(12, 48) << endl;
    return 0;
}