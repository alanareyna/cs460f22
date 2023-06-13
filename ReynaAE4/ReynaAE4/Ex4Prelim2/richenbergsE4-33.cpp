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
    // Testing greater-than operator
    rational fraction = rational(66, 3);
    std::cout << "Calling to_string function" << std::endl;
    std::string fraction_string = to_string(fraction);
    if (fraction_string != std::string("22")) {
        std::cout <<  "Error: to_string function failed" << std::endl;
    }
    return 0;
}
