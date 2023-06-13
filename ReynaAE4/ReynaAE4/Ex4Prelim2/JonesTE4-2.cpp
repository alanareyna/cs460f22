/****************************************************************
 * * Assignment: Exercise 4 - rational Class Test Program.	 *
 * * Author: Trenton Jones					 *
 * * Date: October 2022						 *
 * * File: JonesTE4-2.cpp					 *
 * * 								 *
 * * Description: This file tests the copy constructor by adding *
 * * two rationals before copying it into a new variable.        *
 * ***************************************************************/

cout << "Testing copy constructor" << endl;

rational R1 = 2;
rational R2 = 4;
rational R3(R1 + R2);
cout << R1 << " : R1" << endl;
cout << R2 << " : R2" << endl;
cout << R3 << " : R3, should be R1 + R2" << endl;


