/****************************************************************
 * * Assignment: Exercise 4 - rational Class Test Program.       *
 * * Author: Trenton Jones                                       *
 * * Date: October 2022                                          *
 * * File: JonesTE4-22.cpp                                       *
 * *                                                             *
 * * Description: This file tests the *= operator by using a for *
 * * loop to repeat the operation multiple times and display the *
 * * value each time.						 *
 * ***************************************************************/

cout << "Testing the *= operator" << endl;

rational R1(4);

cout << "R1 is initialized as " << R1 << endl;
for(int i = 0; i < 3; i++){
	R1 *= 2;
		cout << “Multiplying current R1 with 2: “ << R1 << endl;
}

