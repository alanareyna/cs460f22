/****************************************************************
 * Assignment: Exercise 4 - rational Class Test Program 12      *
 * Author: Aundre Barras                                        *
 * Date: Fall 2022                                              *
 * File: BarrasAE4-12.cpp                                       *
 *                                                              *
 * Description: This file tests the logical operator != for a   *
 * rational object                                              *
 * In addition, the constructor for a const int, the rational   *
 * output operator (<<), and the rational destructor are called *
****************************************************************/
#include <iostream>
#include "rational.h"
using namespace std;
int main (){
cout << "Test program BarrasAE4-12.cpp" << endl;

// Testing additional constructor, rational (const int I)
cout << "Calling additional constructor, rational (const int I), setting R1 & R2 to 1 and R3 to 3" << endl;
rational R1(1);
rational R2(1);
rational R3(3);

// Testing logical operator !=
cout << "Testing logical operator !=\n";
if(R1 != R2)
    cout << R1 << " != " << R2 << endl;
else
    cout << R1 << " equals " << R2 << endl;

if(R1 != R3)
    cout << R1 << " != " << R3 << endl;
else
    cout << R1 << " equals " << R3 << endl;


// Testing destructor
cout << "Calling destructor as 'R1', 'R2' and 'R3' goes out of scope" << endl;

return 0;
}