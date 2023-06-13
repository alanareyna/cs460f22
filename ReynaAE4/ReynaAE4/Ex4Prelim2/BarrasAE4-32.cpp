/****************************************************************
 * Assignment: Exercise 4 - rational Class Test Program 32      *
 * Author: Aundre Barras                                        *
 * Date: Fall 2022                                              *
 * File: BarrasAE4-32.cpp                                       *
 *                                                              *
 * Description: This file tests the double conversion operator  *
 * for a rational object                                        *
 * In addtion, the constructor for a const double, the rational * 
 * output operator (<<), and the rational destructor are called * 
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main (){
cout << "Test program BarrasAE4-32.cpp" << endl;

// Testing additional constructor, rational (const double D)
cout << "Calling additional constructor, rational (const double D), setting R1 to 2.5" << endl;
rational R1(2.5);

// Testing conversion operator double
cout << "Testing the double converion operator\n";
cout << "R1: " << R1 << "\ndouble(R1): " << double(R1) << endl;

// Testing destructor
cout << "Calling destructor as 'R1' goes out of scope" << endl;

return 0;
}