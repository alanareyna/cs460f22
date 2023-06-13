
/******************************************************************
 * * * Assignment: Exercise 4 - rational Class Test Program. *
 * * * Author: Cody Grimes *
 * * * Date: October 2022 *
 * * * File: GrimesCE4-39.cpp *
 * * * *
 * * * Description: This file contains C++ code to test the  *
 * * * reduce function of a rational class type *
 * * ****************************************************************/


#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
	cout << "Test program GrimesCE4-39.cpp" << endl;

	//Creating our rational class object
	rational *rationalPointer = new rational (10, 20);

	cout << "We have given our rational class object a numerator of 10, and a denominator of 20" << endl;

	cout << "Calling reduce function on our rational class object" << endl;

	rationalPointer.reduce();

	cout << "Now we will display the reduced rational class object" << endl;

	cout << rationalPointer << endl;


}
