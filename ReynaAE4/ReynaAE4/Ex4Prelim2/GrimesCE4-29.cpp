/******************************************************
Assignment: Exercise 4 - rational Class Test Program. *
 * * Author: Cody Grimes *
 * * * Date: October 2022 *
 * * * File: GrimesCE4-29.cpp *
 * * * *
 * * * Description: This file contains C++ code to test the  *
 * * * post decrement functionality of the rational class *
 ******************************************************************/


#include <iostream>
#include "rational.h"
 using namespace std;
 int main ()
{
	cout << "Test program GrimesCE4-29.cpp" << endl;
	
	//Creating our first rational object
	rational *rationalPointer = new rational(4.5);

	//Displaying the rational to our user
	cout << "Here is the rational we have initially created: " << rationalPointer << endl;

	//Now we will decrement the rational number with our value we give it
	rationalPointer--;

	//Displaying new rationalPointer value to the user
	cout << "Here is the rational after we have decremented it: " << rationalPointer << endl;

	return 0; 	

}
