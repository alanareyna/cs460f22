/******************************************************************
 * * Assignment: Exercise 4 - rational Class Test Program. *
 * * Author: Cody Grimes *
 * * Date: October 2022 *
 * * File: GrimesCE4-19.cpp *
 * * *
 * * Description: This file contains C++ code to test the  *
 * * division between two rational class type objects *
 * * In addition, the rational output operator (<<) *
 * * and the rational destructor will be called. *
 * ****************************************************************/


#include <iostream>
#include "rational.h"
using namespace std;
int main ()
{
	cout << "Test program GrimesCE4-19.cpp" << endl;
	
	//Testing to see if the division of two rational class objects works 
	
	//Creating the first rational object
	rational *myFirstRationalPointer = new rational(2.5);

	//Displaying first rational object
	cout << "Here is the first rational object: " << myFirstRationalPointer << endl;

	//Creating the second rational object
	rational *mySecondRationalPointer = new rational(10.5);

	//Displaying the second rational object
	cout << "Here is the second rational object: " << mySecondRationalPointer << endl;

	//Dividing the two objects
	rational resultingQuotient = myFirstRationalPointer / mySecondRationalPointer; 

	//Displaying the resulting quotient
	cout << "This is the resulting division between the two rational objects above: " << resultingQuotient << endl;


	 return 0;

}
