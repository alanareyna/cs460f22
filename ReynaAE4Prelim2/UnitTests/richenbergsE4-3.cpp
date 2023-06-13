/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.
* Author: Soren Richenberg
* Date: October 2022
* File: richenbergsE4-3.cpp 
* Description: This file contains C++ code to test the destructor for 
*               rational objects.
****************************************************************/
#include <iostream>
#include "rational.h"

int main (int argc, char **argv) {
    std::cout << "Test program richenbergsE4-3.cpp" << std::endl;
    std::cout << "Calling default constructor" << std::endl;
    rational *fraction = new rational;
    // Testing destructor
    std::cout << "Calling destructor using delete" << std::endl;
    delete fraction;
    return 0;
}
