/****************************************************************
 * * Assignment: Exercise 4 - rational Class Test Program.       *
 * * Author: Trenton Jones                                       *
 * * Date: October 2022                                          *
 * * File: JonesTE4-12.cpp                                       *
 * *                                                             *
 * * Description: This file tests the != operator by comparing   *
 * * two rationals that are not equal, and adding two variables  * 
 * * together that equal a third     				 *
 * ***************************************************************/

cout << "Testing the != operator" << endl;

rational R1, R2, R3;
R1 = 3/2;
R2 = 3/4;
R3 = 3/4;
if(R1 != R2){
	cout << “R1 does not equal R2” << endl;
}else if(R1 != (R2 + R3)){
	cout << “R1 does not equal R2 + R3” << endl;
}else{
	cout << "R2: " << R2 << " + R3: " << R3 << " is equal to R1: " << R1 << endl;
}

