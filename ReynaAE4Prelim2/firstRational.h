/*****************************************************************************/
/*                                                                           */
/* Assignment: CS 460 Project 1                                              */
/* Author: Dr. Watts                                                         */
/* Date: October 18, 2022                                                    */
/* Modified by: Alana Reyna                                                  */
/* Date: October 16, 2022                                                    */
/* Description: This file contains the description of a class called         */
/*      Rational.                                                            */
/*                                                                           */
/*****************************************************************************/

#ifndef REYNAAE4_RATIONAL_H
#define REYNAAE4_RATIONAL_H

#include <iostream>
#include <fstream>

using namespace std;

class Rational
{
public:
    /** constructor **/
    Rational;
    /** destructor **/
    ~Rational;
    /** Sets the Rational attributes
     * @param: Object of Rational
     * **/
    Rational(const Rational & R);
    /** Rational: uses numerator and denominator to determine if it's a valid rational number
     * @param: int numerator, int denominator
     * **/
    Rational(int numerator, int denominator);
    /** Rational operator: sets numerator and denominator attributes of the Rational number object
     * @param: Object of Rational
     * **/
    Rational & operator = (const Rational & R);
    /** Prints the result of Rational
     * @param: ostream outs, Rational R object
     * **/
    friend ostream & operator << (ostream & outs, const Rational & R);
};


#endif //REYNAAE4_RATIONAL_H
