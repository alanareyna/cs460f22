/****************************************************************
 * * Assignment: Exercise 4 - rational Class Test Program. *
 * * Author: Cody Grimes *
 * * Date: October 2022 *
 * * File: GrimesCE4-9.cpp *
 * * *
 * * Description: This file contains C++ code to test the  *
 * * parameterized constructor which receives a double for rational objects. *
 * * In addition, the rational output operator (<<) *
 * * and the rational destructor will be called. *
 * ****************************************************************/


#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
	cout << "Test program GrimesCE4-9.cpp" << endl;
	// Testing parameterized constructor for the rational object to be initialized with a double datatype 
	// First declaring a double 
	cout << "Making a double which should be 2.5" << endl;
	double myDouble = 2.5;

	//Display the double to the user
	cout << "Here is the double: " << myDouble << endl;

	cout << "Now using the parameterized constructor to initialize a rational-type object with our double value. We will be setting a rational pointer equal to a memory allocation of the rational-type" << endl;
	rational *myRationalPointer = new rational(myDouble);

	 // Testing output (insertion) operator
	 cout << "Calling output operator on our rational pointer type to display our rational" << endl;
	 cout << myRationalPointer << endl;
	 // Testing destructor
	 cout << "Calling destructor as 'fraction' goes out of scope" << endl;
	 return 0;

}
