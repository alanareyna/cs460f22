/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Austin Martinetti                                     *
* Date: October 2022                                            *
* File: martinettiE4-15.cpp                                     *
*                                                               *
* Description: This file contains C++ code to test the          *
* alternate constructor for rational objects.                   *
* In addition, the rational output operator (<<), the equal to  *
* operator, and the rational destructor will be called.         *
****************************************************************/
#include <iostream>
#include <fstream>
#include "rational.h"
using namespace std;
int main ()
{
    ifstream in("martinettiE4-15.in");
    ofstream debug("martinettiE4-15.dbg");
    if(!in) {
        cout << "Failed to open martinettiE4-15.in!" << endl;
        return -1;
    }
    if(!debug) {
        cout << "Failed to open martinettiE4-15.dbg!" << endl;
        return -1;
    }
    int numerator, denominator;
    string line;
    
    // This looks sloppy, but it's only so many variables.
    
    // Grabbing numerator from file
    
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
    
    debug << "Test program martinettiE4-15.cpp" << endl;

    /* Testing alternate constructor.
    ** This is specifically done to work around a
    ** compilation error that occurs with stubbs.
    */
    debug << "Calling alternate constructor" << endl;
    rational fraction(numerator, denominator);

    debug << "DEBUG: fraction is: " << fraction << endl;
    
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
    
    // Assigning with non-default constructor
    
    rational fraction2(numerator, denominator);
    
    // Testing operator overloaded equal-to
    
    debug << "Output of equal test for fraction and fraction2 is ";
    debug << (int) (fraction == fraction2) << endl;
    // This should be a zero value for the two values being
    // equal.
    
    // Testing destructor
    debug << "Calling destructor as 'fraction & fraction2' go out of scope"
        << endl;
    debug.close();
    return 0;
}
