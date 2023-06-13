/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Austin Martinetti                                     *
* Date: October 2022                                            *
* File: martinettiE4-35.cpp                                     *
*                                                               *
* Description: This file contains C++ code to test the          *
* alternate constructor for rational objects as well as the     *
* round() function associated with the rational class.          *
* In addition, the rational output operator (<<)                *
* and the rational destructor will be called.                   *
****************************************************************/
#include <iostream>
#include <fstream>
#include "rational.h"
using namespace std;
int main ()
{
    ofstream debug("martinettiE4-35.dbg");
    ifstream in("martinettiE4-35.in");
    if(!in) {
        cout << "Failed to open martinettiE4-35.in!" << endl;
        return -1;
    }
    if(!debug) {
        cout << "Failed to open martinettiE4-35.dbg!" << endl;
        return -1;
    }
    int numerator, denominator;
    string line;
    unsigned roundIn;
    
    // This looks sloppy, but it's only so many variables.
    
    // Inhaling numerator from file
    
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
    
    // Testing alternate constructor
    debug << "Calling alternate constructor" << endl;
    rational fraction(numerator, denominator);

    // Testing output (insertion) operator
    debug << "Calling output operator" << endl;

   // roundIn 
    
    if (getline(in, line)) {
        roundIn = (unsigned) stol(line);
    }
    else {
        debug << "Unexpected end of file!" << endl;
        return -1;
    }
    
    debug << "Test program martinettiE4-35.cpp" << endl;
    
    // Testing round()
    
    debug << "Invoking round() with specified value..." << endl;
    fraction.round(roundIn);
    debug << "fraction was rounded to: " << fraction << endl;
    
    // Testing destructor
    debug << "Calling destructor as 'fraction' goes out of scope"
        << endl;
    debug.close();
    return 0;
}
