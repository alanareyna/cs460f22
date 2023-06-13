/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.
* Author: Soren Richenberg
* Date: October 2022
* File: richenbergsE4-13.cpp 
* Description: This file contains C++ code to test the to_string function for 
*               rational objects.
****************************************************************/
#include <iostream>
#include "rational.h"

int main (int argc, char **argv) {
    std::cout << "Test program richenbergsE4-13.cpp" << std::endl;
    rational fraction = rational(66, 3);
    // Testing to_string function
    std::cout << "Calling to_string function" << std::endl;
    std::cout << to_string(fraction) << std::endl;  // 22
    return 0;
}
