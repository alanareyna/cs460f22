/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program. *
* Author: Dr. Watts *
* Date: October 2022 *
* File: martinettiE4-5.cpp *
* *
* Description: This file contains C++ code to test the default *
* constructor for rational objects. *
* In addition, the rational output operator (<<) *
* and the rational destructor will be called. *
****************************************************************/
#include <iostream>
#include <fstream>
#include "rational.h"
using namespace std;
int main ()
{
    ifstream in("martinettiE4-5.in");
    if(!in) {
        cout << "Failed to open martinettiE4-5.in!" << endl;
        return -1;
    }
    
    cout << "Default constructor being called for rational..."
    << endl;

    rational fraction;
    
    cout << "Testing >> operator - checking value for rational type:"
    >> endl;
    
    in >> fraction;
    
    cout << "Type output returned value: " << fraction << endl;
    
    // Testing destructor
    cout << "Calling destructor as 'fraction' goes out of scope"
        << endl;
    return 0;
}
