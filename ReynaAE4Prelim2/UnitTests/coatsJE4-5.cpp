/****************************************************************
* Assignment: Exercise 4 - rational Class Test Program.         *
* Author: Jared Coats                                           *
* Date: October 2022                                            *
* File: coatsJE4-5.cpp                                          *
*                                                               *
* Description: This file contains C++ code to test input        *
*              operator (>>). This test will try and open a     *
*              file called coatsJE4-5.in. In addition, the      *
*              output operator and destructor are called.       *
****************************************************************/

#include <iostream>
#include <fstream>
#include "rational.h"

using namespace std;

int main ()
{
	cout << "Test program coatsJE4-5.cpp" << endl;
	cout << "Calling default constructor." << endl;
	rational fraction;
	// Using A test file test.txt 
	cout << "Attempting to open coatsJE4-5.in file." << endl;
	ifstream in("coatsJE4-5.in");
	if (!in)
		cout << "failed to open coatsJE4-5.in..." << endl;

	// Reading input into rational object to test input operator
	cout << "If opened, reading contents into rational fraction" << endl;
	if (in.is_open())
		{
			
			in >> fraction;
			in.close();
		}
	
	// Testing output operator
	cout << "fraction holds: " << fraction << endl; 
	// Testing destructor
	cout << "Destructor called as 'fraction' goes out of scope"
	     << endl;
	return 0;
}
