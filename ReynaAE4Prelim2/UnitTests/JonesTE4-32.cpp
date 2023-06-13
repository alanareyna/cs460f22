/****************************************************************
 * * Assignment: Exercise 4 - rational Class Test Program.       *
 * * Author: Trenton Jones                                       *
 * * Date: October 2022                                          *
 * * File: JonesTE4-32.cpp                                       *
 * *                                                             *
 * * Description: This file tests the double() operator by       *
 * * calling it in a cout statement with a rational value	 *
 * ***************************************************************/

#include <iostream>
#include "rational.h"

using namespace std;
int main(){
	cout << "Testing double() with value 14/5" << endl;

	rational R1(14/5);
	cout << double(R1) << endl;
}
