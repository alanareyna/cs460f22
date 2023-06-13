/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.
* Author: Soren Richenberg
* Date: October 2022
* File: richenbergsE4-13.cpp 
* Description: This file contains C++ code to test the plus-equal operator for 
*               rational objects.
****************************************************************/
#include <iostream>
#include "rational.h"

int main (int argc, char **argv) {
    std::cout << "Test program richenbergsE4-13.cpp" << std::endl;
    rational lhs = rational(66, 3);
    rational rhs = rational(5, 88);
    // Testing plus-equal operator
    std::cout << "Calling plus-equal operator" << std::endl;
    lhs += rhs;
    std::cout << lhs << std::endl;  // 1941/88
    return 0;
}
