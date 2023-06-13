/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Austin Martinetti                                     *
* Date: October 2022                                            *
* File: martinettiE4-25.cpp                                     *
*                                                               *
* Description: This file contains C++ code to test the          *
* alternate constructor for rational objects.                   *
* In addition, the rational output operator (<<), the division- *
* assignment operator, and the rational destructor will be      *
* called.                                                       *
****************************************************************/
#include <iostream>
#include <fstream>
#include "rational.h"
using namespace std;
int main ()
{
    ofstream debug("martinettiE4-25.dbg");
    ifstream in("martinettiE4-25.in");
    if(!in) {
        cout << "Failed to open martinettiE4-25.in!" << endl;
        return -1;
    }
    if(!debug) {
        cout << "Failed to open martinettiE4-25.dbg!" << endl;
        return -1;
    }
    int numerator, denominator;
    string line;
    
    // This looks sloppy, but it's only so many variables.
    
    // Retrieving numerator from file
    
    if (getline(in, line)) {
        numerator = stoi(line);
    }
    else {
        debug << "Unexpected end of file!" << endl;
        return -1;
    }
    
    // denominator
    
    if (getline(in, line)) {
        denominator = stoi(line);
    }
    else {
        debug << "Unexpected end of file!" << endl;
        return -1;
    }
    
    debug << "Test program martinettiE4-25.cpp" << endl;

    // Testing alternate constructor
    debug << "Calling alternate constructor" << endl;
    rational fraction(numerator, denominator);
    
    if (getline(in, line)) {
        numerator = stoi(line);
    }
    else {
        debug << "Unexpected end of file!" << endl;
        return -1;
    }
    if (getline(in, line)) {
        denominator = stoi(line);
    }
    else {
        debug << "Unexpected end of file!" << endl;
        return -1;
    }
    
    // Assigning with alternate constructor
    
    rational fraction2(numerator, denominator);

    // Testing /= operator
    
    debug << "Dividing fraction by fraction2..." << endl;
    fraction /= fraction2;
    debug << "Result is " << fraction << endl;
    
    // Testing destructor
    debug << "Calling destructor as 'fraction' goes out of scope"
        << endl;
    debug.close();
    return 0;
}
