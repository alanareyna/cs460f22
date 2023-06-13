/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program. *
* Author: Dr. Watts *
* Date: October 2022 *
* File: martinettiE4-35.cpp *
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
    ifstream in("martinettiE4-35.in");
    if(!in) {
        cout << "Failed to open martinettiE4-35.in!" << endl;
        return -1;
    }
    int numerator, denominator;
    string line;
    unsigned roundIn;
    
    // This looks sloppy, but it's only so many variables.
    
    // numerator
    
    if (getline(in, line)) {
        numerator = stoi(line);
    }
    else {
        cout << "Unexpected end of file!" << endl;
        return -1;
    }
    
    // denominator
    
    if (getline(in, line)) {
        denominator = stoi(line);
    }
    else {
        cout << "Unexpected end of file!" << endl;
        return -1;
    }
    
    // Testing default constructor
    cout << "Calling default constructor" << endl;
    rational fraction(numerator, denominator);

    // Testing output (insertion) operator
    cout << "Calling output operator" << endl;

   // roundIn 
    
    if (getline(in, line)) {
        roundIn = (unsigned) stol(line);
    }
    else {
        cout << "Unexpected end of file!" << endl;
        return -1;
    }
    
    cout << "Test program martinettiE4-35.cpp" << endl;
    
    // Testing round()
    
    cout << "Invoking round() with specified value..." << endl;
    fraction.round(roundIn);
    cout << "fraction was rounded to: " << fraction << endl;
    
    // Testing destructor
    cout << "Calling destructor as 'fraction' goes out of scope"
        << endl;
    return 0;
}
