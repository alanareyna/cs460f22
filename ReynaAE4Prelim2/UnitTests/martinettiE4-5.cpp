/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Austin Martinetti                                     *
* Date: October 2022                                            *
* File: martinettiE4-5.cpp                                      *
*                                                               *
* Description: This file contains C++ code to test the default  *
* constructor for rational objects.                             *
* In addition, the rational output operator (<<),               *
* the rational input operator (>>), and the rational            *
* destructor will be called.                                    *
****************************************************************/
#include <iostream>
#include <fstream>
#include "rational.h"
using namespace std;
int main ()
{
    ifstream in("martinettiE4-5.in");
    ofstream debug("martinettiE4-5.dbg");
    if(!in) {
        cout << "Failed to open martinettiE4-5.in!" << endl;
        return -1;
    }
    if (!debug) {
        cout << "Failed to open martinettiE4-5.dbg!" << endl;
        return -1;
    }
    debug << "Default constructor being called for rational..."
    << endl;
    // Testing constructor
    rational fraction;
    
    debug << "Testing >> operator - checking value for rational type:"
    << endl;
    
    in >> fraction;
    
    debug << "Type output returned value: " << fraction << endl;
    
    // Testing destructor
    debug << "Calling destructor as 'fraction' goes out of scope"
        << endl;

    debug.close();
    return 0;
}
