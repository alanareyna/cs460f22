/****************************************************************
 * Assignment: Exercise 4 - rational Class Test Program 2       *
 * Author: Aundre Barras                                        *
 * Date: Fall 2022                                              *
 * File: BarrasAE4-2.cpp                                        *
 *                                                              *
 * Description: This file tests the copy constructor for a      *
 * rational object                                              *
 * In addition, the constructor for a const int, the rational   *
 * output operator (<<), and the rational destructor are called *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main (){
cout << "Test program BarrasAE4-2.cpp" << endl;

// Testing additional constructor, rational (const int I)
cout << "Calling additional constructor, rational (const int I), setting R1 to 2" << endl;
rational R1(2);

// testing copy constructor using the output operator
cout << "Testing copy constructor\n";
rational R2(R1);
cout << "R1: " << R1 << "\nR2 (copy): " << R2 << endl;

// Testing destructor
cout << "Calling destructor as 'R1' and 'R2' goes out of scope" << endl;

return 0;
}