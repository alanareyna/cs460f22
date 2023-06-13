/********************************************************
 * Assignment: Exercise 4 - rational class test #4	*
 * Author: Matthew Coady				*
 * Date: 30 October 2022				*
 * File: CoadyME4-14.cpp				*
 * 							*
 * Description:	This file contains C++ code to test the *
 * 		>= operator for the rational class.	*					*
 *******************************************************/

#include <iostream>
#include "rational.h"

using namespace std;

int main()
{
	cout << "Test program CoadyME4-14.cpp" << endl;
	//Testing greater or equal operator
	rational r1;
	rational r2(2);

	//Calling >= operator on r1 & r2
	cout << "Testing greater than or equal to operator" << endl;
	cout << r2 << " >= " << r1 << "?" << endl;
	if (r2 >= r1)
		cout << "True" << endl;
	else
		cout << "False" << endl;

	return 0;
}	
