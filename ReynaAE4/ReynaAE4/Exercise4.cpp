/*****************************************************************
* Assignment: Exercise 4 - rational class                        *
* Author: Alana Reyna                                            *
* Date: Fall 2022                                                *
* File: Exercise4.cpp                                            *
*                                                                *
* Description: This file contains the implementation of          *
*		Exercise4.cpp. I test the rational class in here.        *
*****************************************************************/

#include "rational.h"
#include <sstream>
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
	/* Testing 1: rational (); */
	rational r1(5, 7);
	cout << "Testing default constructor" << endl;
	cout << r1 << endl;

	/** 2) rational (const rational & R); **/
    cout << "Testing copy constructor" << endl;
    rational r2 = r1;
    cout << r2 << endl;

	/** 5) input operator **/
	rational r3;
	string str = "1/2 10/ 1 -3/2 7/3/4 14.6/2 -5/-7	 /35 87 24/32bad 1/2";
	cout << str << endl;
	stringstream ss (str);
	for (int i = 0; i < 100 && ss >> r3; i++)
		cout << "r3 is " << r3 << endl;
	// cout << "Testing input operator" << endl;
	// ifstream in("Exercise4.in");
    // if(!in) {
    //     cout << "Failed to open martinettiE4-5.in!" << endl;
    //     return -1;
    // }
	// rational r3;
	// in >> r3;
	
	// cout << r3 << endl;

	/** 7) numerator/denominator rational constructor **/
	// rational r4(10, 15);
	// cout << "Testing numerator/denominator rational constructor for "<< r4 << endl;
	// cout << "Numerator: " << r4.numerator() << endl;
	// cout << "Denominator: " << r4.denominator() << endl;

	// /** 8) int I constructor **/
	// cout << "Testing constructor(int I)" << endl;
	// rational r5(8);
	// cout << r5 << endl;

	// /** 9) double D constructor **/
	// cout << "Testing constructor(double D)" << endl;
	// rational r6(8.8);
	// cout << r6 << endl;

	// /** 10) denominator() **/
	// rational r7(6, 7);
	// cout << "Testing denominator() function" << endl;
	// cout << r7.denominator() << endl; 

	// /** 11) numerator() **/
	// cout << "Testing numerator() function" << endl;
	// cout << r7.numerator() << endl;

	// /** 12) **/
	// rational r12(1, 2);
	// rational r11(0.5);
	// cout << "Testing bool operator != " << endl;
	// if (r7 != r12)
	// {
	// 	cout << r7 << " != " << r12 << endl;
	// }
	// else
	// {
	// 	cout << r7 << " = " << r12 << endl;
	// }
	// if (r11 != r12)
	// {
	// 	cout << r11 << " != " << r12 << endl;
	// }
	// else
	// {
	// 	cout << r11 << " = " << r12 << endl;
	// }


	

	return 0;
}
