/****************************************************************
 * Assignment: Exercise 4 - rational Class Test Program 22      *
 * Author: Aundre Barras                                        *
 * Date: Fall 2022                                              *
 * File: BarrasAE4-22.cpp                                       *
 *                                                              *
 * Description: This file tests the arithmetic operator *= for  *
 * a rational object                                            *
 * In addition, the constructor for a const int, the rational   *
 * output operator (<<), and the rational destructor are called *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main (){
cout << "Test program BarrasAE4-22.cpp" << endl;

// Testing additional constructor, rational (const int I)
cout << "Calling additional constructor, rational (const int I), setting R1, R2, & R3 to 2" << endl;
rational R1(2);
rational R2(2);
rational R3(2);

// testing arithmetic operator *=
cout << "Testing arithmetic operator *=\n";
R1 *= R2 *= R3;
cout << "R1 after R1 *= R2 *= R3: " << R1 << endl;   

// Testing destructor
cout << "Calling destructor as 'R1', 'R2' and 'R3' goes out of scope" << endl;

return 0;
}