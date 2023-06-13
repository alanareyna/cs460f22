/********************************************************************************
* Assignment: Exercise 4 - rational class                                       *
* Author: Alana Reyna                                                           *
* Date: Fall 2022                                                               *
* File: rational.cpp                                                            *
*                                                                               *
* Description: This file contains the implementation for the rational class     *
********************************************************************************/

#include "rational.h"
#include <sstream>
#include <iostream>
#include <iomanip>

using namespace std;

#define DEBUG false
#define debug if (DEBUG) cerr

/*******************************************************************************
* Number: 1                                                                    *
* Function: Default Constructor                                                *
*                                                                              *
* Parameters: None                                                             *
* Return value: None                                                           *
* Description: This function will initialze the value of the newly constructed *
*              rational to 0 (zero).                                           *
*******************************************************************************/

rational::rational ()
{
    num = 0;
    denom = 1;
	debug << "/* 1 */ Executing rational default constructor for "
              << this << endl;
}

/*******************************************************************************
* Number: 2                                                                    *
* Function: Copy Constructor                                                   *
*                                                                              *
* Parameters: const rational & R                                               *
* Return value: None                                                           *
* Description: This function will initialze the value of the newly constructed *
*              rational by copying the already declared rational object.       *
*******************************************************************************/

rational::rational (const rational & R) 
{
    num = R.num;
    denom = R.denom;
    debug << "/* 2 */ Executing rational copy constructor for "
            << this << endl;
}

/*******************************************************************************
* Number: 3                                                                    *
* Function: Destructor                                                         *
*                                                                              *
* Parameters: None                                                             *
* Return value: None                                                           *
* Description: This function will be invoked whenever an object is being       *
*               destroyed (does not need any implementation)                   *
*******************************************************************************/

rational::~rational ()
{
    debug << "/* 3 */ Executing rational destructor for " 
            << this << endl;
}

/*******************************************************************************
* Number: 4                                                                    *
* Function: Assignment operator                                                *
*                                                                              *
* Parameters: rational R                                                       *
* Return value: None                                                           *
* Description: This function will be invoked whenever an object is being       *
*               assigned the value of another rational object                  *
*******************************************************************************/

rational & rational::operator= (const rational & R)
{
    debug << "/* 4 */ Executing rational assignment operator for " 
            << *this << " and " << R << endl;
    num = R.num;
    denom = R.denom;
    return *this;
}

/*******************************************************************************
* Number: 5                                                                    *
* Function: Input operator                                                     *
*                                                                              *
* Parameters: istream input, rational R                                        *
* Return value: input                                                          *
* Description: This function will be invoked whenever the user inputs data     *
*               to be saved.                                                   *
*******************************************************************************/

istream & operator >> (istream & input, rational & R)
{
    debug << "/* 5 */ Executing input operator for " << R << endl;
    /** step one: create variables to store numerator and denominator **/
    int n = 0;
    int d = 1;
    /** step 2: create variable to store the character from input **/
    char c = ' ';
    char a = ' ';
    /** step 3: loop through the input without spaces **/
    while (isspace (input.peek()))
    {
        cout << "IN #5 INPUT.GET(): " << input.get() << endl;
    }
    /** step 3: look at the next character **/
    c = input.peek();
    cout << "C in the beginning: " << c << endl;
    cout << "IN 5 STILLL" << endl;
    cout << "IN #5 INPUT.GET(): " << c << endl;
    /** step 4: check if the next character is a +, -, or a digit **/
    if ((c == '+') || (c == '-') || isdigit(c))
    {
        /** if the next character is a +, -, or digit, then its a numerator **/
        input >> n;
        cout << "n in + -: " << n << endl;
        c = input.peek();
        cout << "c in + -: " << c << endl;
    }
    /** CHECK FOR INVALID INPUT, set input failbit **/
    // else
    // {
    //     input.setstate(_S_failbit);
    //     //cout << "fail bit: " << input.fail() << endl;
    // }
    /** step 5: check if the next character is a / or . **/
    if (c == '/' || c == '.')
    {
        /** step 6: get the input and set to a **/
        a = input.get();
        cout << "a: " << a << endl;
        /** if a is a ., then set the denominator to 0 **/
        if (a == '.')
        {
            d = 0;
            cout << "d: " << d << endl;
            //cout << "fail bit: " << input.fail() << endl;
        }
    }
    /** CHECK FOR INVALID INPUT, set input failbit **/
    // else
    // {
    //     input.setstate(_S_failbit);
    //     //cout << "fail bit: " << input.fail() << endl;
    // }
    /** check the next character **/
    c = input.peek();
    cout << "C: " << c << endl;
    /** if the character is a digit, this is our denominator **/
    if (isdigit (c))
    {
        input >> d;
        cout << "D: " << d << endl;
    }
    /** if there's a decimal, convert the numerator and denominator strings to 
     * doubles and create a new rational object
     * **/
    if (a == '.')
    {
        cout << "to_string(n): " << to_string(n) << "to_string(d): " << to_string(d) << endl; 
        R = rational (stod (to_string(n) + a + to_string(d)));
        cout << "R: " << R << endl;
    }
    /** otherwise, it's an integer fraction and just create a new rational
     * object with numerator and denominator
     * **/
    else
    {
        R = rational(n, d);
        cout << "R with num and denom: " << R << endl;
    }
    //cout << "fail bit: " << input.fail() << endl;
    cout << "input at the end of input function: " << R << endl;
    return input;
}

/*******************************************************************************
* Number: 6                                                                    *
* Function: Output operator                                                    *
*                                                                              *
* Parameters: ostream output, rational R                                       *
* Return value: output                                                           *
* Description: This function prints out the output of rational                 *
*******************************************************************************/

ostream & operator << (ostream & output, const rational & R)
{
    debug << "/* 6 */ Executing output operator for " << R << endl;
    output << R.num;
    /** if R.denom is not 1, then we need a / to indicate a fraction **/
    if (R.denom != 1)
    {
        output << '/' << R.denom;
    }
    return output;
}

/*******************************************************************************
* Number: 7                                                                    *
* Function: Numerator/denominator rational constructor                         *
*                                                                              *
* Parameters: const int numerator, const int denominator                       *
* Return value: None                                                           *
* Description: This function will be invoked whenever an object is being       *
*               assigned the value of numerator and denominator                *
*******************************************************************************/

rational::rational(const int numerator, const int denominator)
{
    debug << "/* 7 */ Executing numerator/denominator constructor for " 
            << this << endl;
    num = numerator;
    denom = denominator;
    reduce();
}

/*******************************************************************************
* Number: 8                                                                    *
* Function: Int I constructor                                                  *
*                                                                              *
* Parameters: const int I                                                      *
* Return value: None                                                           *
* Description: This function will be invoked whenever an object is being       *
*               assigned the value of an integer.                              *
*******************************************************************************/

rational::rational(const int I) 
{
	debug << "/* 1 */ Executing rational int constructor for "
              << this << endl;
    num = I;
    denom = 1;
}

/*******************************************************************************
* Number: 9                                                                    *
* Function: Double D constructor                                               *
*                                                                              *
* Parameters: const double D                                                   *
* Return value: None                                                           *
* Description: This function will be invoked whenever an object is being       *
*               assigned the value of an double.                               *
*******************************************************************************/

rational::rational(const double D) 
{
    debug << "/* 9 */ Executing rational double constructor for " 
            << this << endl;
    cout << "we are in double constructor" << endl;
    denom = 100000;
    char decimal;
    int fixed_num;
    int abs_num;
    // use the stringstream and iomanip libraries to set the precsion, 
    // show the decimal point, and show the fixed value of the double.
    stringstream ss;
    ss << showpoint << fixed << setprecision(5) << abs(D);
    // put values from stringstream into variables 
    ss >> fixed_num >> decimal >> abs_num;
    cout << "fixed num: " << fixed_num << " decimal: " << decimal << 
            " abs_num: " << abs_num;
    num = fixed_num * denom + abs_num;
    reduce();
    // if the double is a negative, set the numerator to negative
    if (D < 0)
    {
        num = -num;
    }

}

/*******************************************************************************
* Number: 10                                                                   *
* Function: int & denominator                                                  *
*                                                                              *
* Parameters: None                                                             *
* Return value: Denominator                                                    *
* Description: This function will be invoked whenever we want to return the    *
*                    denominator.                                              *
*******************************************************************************/

int & rational::denominator()
{
    debug << "/* 10 */ Executing rational denominator() for "
            << this << endl;
    return denom;
}

/*******************************************************************************
* Number: 11                                                                   *
* Function: int & numerator                                                    *
*                                                                              *
* Parameters: const int I                                                      *
* Return value: Numerator                                                      *
* Description: This function will be invoked whenever we want to return the    *
*               numerator.                                                     *
*******************************************************************************/

int & rational::numerator()
{
    debug << "/* 11 */ Executing rational numerator() for "
            << this << endl;
    return num; 
}

/*******************************************************************************
* Number: 12                                                                   *
* Function: bool operator !=                                                   *
*                                                                              *
* Parameters: const rational & R                                               *
* Return value: Boolean                                                        *
* Description: This function will be invoked whenever an object is being       *
*               compared to another value to check if they are not equal       *
*******************************************************************************/

bool rational::operator!= (const rational & R) const {
    if ((num * R.denom) != (denom * R.num))
    {
        return true;
    }
    else
    {
        return false;
    }
    debug << "/* 12 */ Executing rational operator != for "
            << R << endl;
}

/*******************************************************************************
* Number: 13                                                                   *
* Function: bool operator >                                                    *
*                                                                              *
* Parameters: const rational & R                                               *
* Return value: Boolean                                                        *
* Description: This function will be invoked whenever an object is being       *
*               compared to another value to check if rational is > R .        *
*******************************************************************************/

bool rational::operator > (const rational & R) const 
{
    if ((num * R.denom) > (denom * R.num))
    {
        return true;
    }
    else
    {
        return false;
    }
    debug << "/* 13 */ Executing rational operator > for "
            << R << endl; 
}

/*******************************************************************************
* Number: 14                                                                   *
* Function: bool operator >=                                                   *
*                                                                              *
* Parameters: const rational & R                                               *
* Return value: Boolean                                                        *
* Description: This function will be invoked whenever an object is being       *
*               compared to another value to check if rational >= R.           *
*******************************************************************************/

bool rational::operator >= (const rational & R) const 
{
    if ((num * R.denom) >= (denom >= R.num))
    {
        return true;
    }
    else
    {
        return false;
    }
    debug << "/* 14 */ Executing rational operator > for "
            << R << endl;
}

/*******************************************************************************
* Number: 15                                                                   *
* Function: bool operator ==                                                   *
*                                                                              *
* Parameters: const rational & R                                               *
* Return value: Boolean                                                        *
* Description: This function will be invoked whenever an object is being       *
*               compared to another value to check if rational == R.           *
*******************************************************************************/

bool rational::operator == (const rational & R) const 
{
    if ((num * R.denom) == (denom * R.num))
    {
        return true;
    }
    else
    {
        return false;
    }
    debug << "/* 15 */ Executing rational operator == for "
            << R << endl;
}

/*******************************************************************************
* Number: 16                                                                   *
* Function: bool operator <                                                    *
*                                                                              *
* Parameters: const rational & R                                               *
* Return value: Boolean                                                        *
* Description: This function will be invoked whenever an object is being       *
*               compared to another value to check if rational < R.            *
*******************************************************************************/

bool rational::operator < (const rational & R) const 
{
    if ((num * R.denom) < (denom * R.num))
    {
        return true;
    }
    else
    {
        return false;
    }
    debug << "/* 16 */ Executing rational operator < for "
            << R << endl;
}

/*******************************************************************************
* Number: 17                                                                   *
* Function: bool operator <=                                                   *
*                                                                              *
* Parameters: const rational & R                                               *
* Return value: Boolean                                                        *
* Description: This function will be invoked whenever an object is being       *
*               compared to another value to check if rational <= R.           *
*******************************************************************************/

bool rational::operator <= (const rational & R) const 
{
    if ((num * R.denom) <= (denom * R.num))
    {
        return true;
    }
    else
    {
        return false;
    }
    debug << "/* 17 */ Executing rational operator <= for "
            << R << endl;
}

/*******************************************************************************
* Number: 18                                                                   *
* Function: rational operator + (const rational & R) const                     *
*                                                                              *
* Parameters: const rational & R                                               *
* Return value: rational R object                                              *
* Description: This function will be invoked whenever an object is being       *
*               added to another rational.                                     *
*******************************************************************************/

rational rational::operator+ (const rational & R) const 
{
    debug << "/* 18 */ Executing rational operator+ for "
            << R << endl;
    int n = (num * R.denom) + (denom * R.num);
    int d = denom * R.denom;
    rational newR(n, d);
    newR.reduce();
    return newR;         
}

/*******************************************************************************
* Number: 19                                                                   *
* Function: rational operator / (const rational & R) const                     *
*                                                                              *
* Parameters: const rational & R                                               *
* Return value: rational object                                                *
* Description: This function will be invoked whenever an object is being       *
*               divided with another rational object.                          *
*******************************************************************************/

rational rational::operator/ (const rational & R) const
{
    debug << "/* 19 */ Executing rational operator/ for "
            << R << endl;
    int n = num * R.denom;
    int d = denom * R.num;
    rational newR(n, d);
    newR.reduce();
    return newR;
}

/*******************************************************************************
* Number: 20                                                                   *
* Function: rational operator - (const rational & R) const                     *
*                                                                              *
* Parameters: const rational & R                                               *
* Return value: rational object                                                *
* Description: This function will be invoked whenever an object is being       *
*               substracted by another rational object.                        *
*******************************************************************************/

rational rational::operator- (const rational & R) const
{
    debug << "/* 20 */ Executing rational opeartor- for "
            << R << endl;
    int n = (num * R.denom) - (denom * R.num);
    int d = denom * R.denom;
    rational newR(n, d);
    newR.reduce();
    return newR;
}

/*******************************************************************************
* Number: 21                                                                   *
* Function: rational operator * (const rational & R) const                     *
*                                                                              *
* Parameters: const rational & R                                               *
* Return value: rational object                                                *
* Description: This function will be invoked whenever an object is being       *
*               multiplied with another rational object.                       *
*******************************************************************************/

rational rational::operator* (const rational & R) const
{
    debug << "/* 21 */ Executing rational operator* for "
            << R << endl;
    int n = num * R.num;
    int d = denom * R.denom;
    rational newR(n, d);
    newR.reduce();
    return newR;
}

/*******************************************************************************
* Number: 22                                                                   *
* Function: rational operator *= (const rational & R) const                    *
*                                                                              *
* Parameters: const rational & R                                               *
* Return value: rational object                                                *
* Description: This function will be invoked whenever an object is being       *
*               mutlipled and set equal to by another rational object.         *
*******************************************************************************/

rational rational::operator*= (const rational & R)
{
    debug << "/* 22 */ Executing rational operator *= for "
            << this << endl;
    *this = *this * R;
    return *this;
}

/*******************************************************************************
* Number: 23                                                                   *
* Function: rational operator += (const rational & R) const                    *
*                                                                              *
* Parameters: const rational & R                                               *
* Return value: rational object                                                *
* Description: This function will be invoked whenever an object is being       *
*               added and set equal to with another rational object.           *
*******************************************************************************/

rational rational::operator+= (const rational & R)
{
    debug << "/* 23 */ Executing rational operator += for "
            << this << endl;
    *this = *this + R;
    return *this;
}

/*******************************************************************************
* Number: 24                                                                   *
* Function: rational operator -= (const rational & R) const                    *
*                                                                              *
* Parameters: const rational & R                                               *
* Return value: rational object                                                *
* Description: This function will be invoked whenever an object is being       *
*               subtracted and set equal to with another rational object.      *
*******************************************************************************/

rational rational::operator-= (const rational & R)
{
    debug << "/* 24 */ Executing rational operator -= for "
            << this << endl;
    *this = *this - R;
    return *this;
}

/*******************************************************************************
* Number: 25                                                                   *
* Function: rational operator /= (const rational & R) const                    *
*                                                                              *
* Parameters: const rational & R                                               *
* Return value: rational object                                                *
* Description: This function will be invoked whenever an object is being       *
*               divided and set equal to with another rational object.         *
*******************************************************************************/

rational rational::operator/= (const rational & R)
{
    debug << "/* 25 */ Executing rational operator /= for "
            << this << endl;
    *this = *this / R;
    return *this;
}

/*******************************************************************************
* Number: 26                                                                   *
* Function: rational operator ++ ()                                            *
*                                                                              *
* Parameters: None                                                             *
* Return value: rational object                                                *
* Description: This function will be invoked whenever an object is being       *
*               added by one. This is the pre increment function.              *
*******************************************************************************/

rational rational::operator++ ()
{
    debug << "/* 26 */ Executing rational operator ++ for "
            << this << endl;
    num += denom;
    reduce();
    return *this;
}

/*******************************************************************************
* Number: 27                                                                   *
* Function: rational operator ++ (int)                                         *
*                                                                              *
* Parameters: int                                                              *
* Return value: rational object                                                *
* Description: This function will be invoked whenever an object is being       *
*               added by one. This is the post increment function.             *
*******************************************************************************/

rational rational::operator++ (int)
{
    debug << "/* 27 */ Executing rational operator post increment ++ for "
            << this << endl;
    rational previous_R = *this;
    num += denom;
    reduce();
    return previous_R;
}

/*******************************************************************************
* Number: 28                                                                   *
* Function: rational operator -- (pre)                                         *
*                                                                              *
* Parameters: None                                                             *
* Return value: rational object                                                *
* Description: This function will be invoked whenever an object is being       *
*               subtracted by one. This is the pre increment function          *
*******************************************************************************/

rational rational::operator-- ()
{
    debug << "/* 28 */ Executing rational operator pre increment -- for "
            << this << endl;
    num -= denom;
    reduce();
    return *this;
}

/*******************************************************************************
* Number: 29                                                                   *
* Function: rational operator -- (post)                                        *
*                                                                              *
* Parameters: None                                                             *
* Return value: rational object                                                *
* Description: This function will be invoked whenever an object is being       *
*               subtracted by one. This is the post increment function         *
*******************************************************************************/

rational rational::operator-- (int)
{
    debug << "/* 29 */ Executing rational operator post increment -- for "
            << this << endl;
    rational previous_R = *this;
    num -= denom;
    reduce();
    return previous_R;
}

/*******************************************************************************
* Number: 30                                                                   *
* Function: operator int () const                                              *
*                                                                              *
* Parameters: None                                                             *
* Return value: int num, int denum                                             *
* Description: This function will be invoked whenever an object is being       *
*               converted to an integer (numerator and denominator).           *
*******************************************************************************/

rational::operator int() const
{
    // numerator and denominator are both already integers, just return them
    debug << "/* 30 */ Executing rational operator int() for "
            << this << endl;
    return num / denom;
}

/*******************************************************************************
* Number: 31                                                                   *
* Function: operator float () const                                            *
*                                                                              *
* Parameters: None                                                             *
* Return value: float num, float denum                                         *
* Description: This function will be invoked whenever an object is being       *
*               converted to an float (numerator and denominator).             *
*******************************************************************************/

rational::operator float () const
{
    debug << "/* 31 */ Executing rational operator float () for "
            << this << endl;
    return float(num) / float(denom);
}

/*******************************************************************************
* Number: 32                                                                   *
* Function: operator double () const                                           *
*                                                                              *
* Parameters: None                                                             *
* Return value: double num, double denum                                       *
* Description: This function will be invoked whenever an object is being       *
*               converted to an double (numerator and denominator).            *
*******************************************************************************/

rational::operator double () const
{
    debug << "/* 32 */ Executing rational operator double () for "
            << this << endl;
    return double(num) / double(denom);
}

/*******************************************************************************
* Number: 33                                                                   *
* Function: friend string to_string (const rational & R)                       *
*                                                                              *
* Parameters: string                                                           *
* Return value: double num, double denum                                       *
* Description: This function will be invoked whenever an object is being       *
*               converted to a string.                                         *
*******************************************************************************/

string to_string (const rational & R)
{
    debug << "/* 33 */ Executing rational to_string method for "
            << R << endl;
    stringstream s;
    s << R;
    string result = s.str();
    return result;
}

/*******************************************************************************
* Number: 34                                                                   *
* Function: void round()                                                       *
*                                                                              *
* Parameters: None                                                             *
* Return value: None                                                           *
* Description: This function will be invoked whenever an object needs to be    *
*              rounded.                                                        *
*******************************************************************************/

void rational::round()
{
    debug << "/* 34 */ Executing rational round() method for "
            << this << endl;
    double temp = double(num) / (denom + 0.5);
    num = int(temp);
    denom = 1;
}

/*******************************************************************************
* Number: 35                                                                   *
* Function: void round(unsigned D)                                             *
*                                                                              *
* Parameters: unsigned D                                                       *
* Return value: None                                                           *
* Description: This function will be invoked whenever an object needs to be    *
*              rounded and you're passing the value of the denominator.        *
*******************************************************************************/

void rational::round (unsigned D)
{
    debug << "/* 35 */ Executing rational round(unsigned) method for "
            << this << endl;
    double temp = double(num) / (denom + 0.5);
    num = int(temp);
    denom = D;
    // must reduce since we are passing denominator 
    reduce();
}

/*******************************************************************************
* Number: 36                                                                   *
* Function: friend int round(const rational & R)                               *
*                                                                              *
* Parameters: const rational & R                                               *
* Return value: int                                                            *
* Description: This function will be invoked whenever a rational object being  *
*              passed needs to be rounded.                                     *
*******************************************************************************/

int round (const rational & R)
{
    debug << "/* 36 */ Executing friend round(rational) function for "
            << R << endl;
    double temp = double(R.num) / R.denom + 0.5;
    return int(temp);
}

/*******************************************************************************
* Number: 37                                                                   *
* Function: friend rational round(const rational & R, unsigned D)              *
*                                                                              *
* Parameters: const rational & R                                               *
* Return value: rational object                                                *
* Description: This function will be invoked whenever a rational object needs  *
*              to be rounded with the value of denominator being passed.       *
*******************************************************************************/

rational round (const rational & R, unsigned D)
{
    debug << "/* 37 */ Executing round(rational, unsigned) friend function for "
            << R << endl;
    rational r_round;
    double r_temp = double(R.num) * D / R.denom + 0.5;
    r_round.num = int(r_temp);
    r_round.denom = D;
    r_round.reduce();
    return r_round;
}

/*******************************************************************************
* Number: 38                                                                   *
* Function: rational reduce()                                                  *
*                                                                              *
* Parameters: None                                                             *
* Return value: rational object                                                *
* Description: This function will be invoked whenever a rational object needs  *
*              to be reduced.                                                  *
*******************************************************************************/

rational rational::reduce()
{
    debug << "/* 38 */ Executing rational reduce() method for "
            << this << endl;
    if (denom == 0)
    {
        cerr << "Denominator can't be 0; exiting program. " << endl;
        exit(1);
    }
    if (num == 0)
    {
        denom = 1;
        return * this;
    }
    if (denom < 0)
    {
        num = -num;
        denom = -denom;
    }
    int gcd = GCD(num, denom);
    num /= gcd;
    denom /= gcd;
    return *this;
}

/*******************************************************************************
* Number: 39                                                                   *
* Function: rational reciprocal () const                                       *
*                                                                              *
* Parameters: None                                                             *
* Return value: rational object                                                *
* Description: This function will be invoked whenever a we want to get the     *
*              reciprocal of a rational object.                                *
*******************************************************************************/

rational rational::reciprocal () const 
{
    debug << "/* 39 */ Executing rational reciprocal() method for "
            << this << endl;
    return rational (denom, num);
}

/*******************************************************************************
* Number: 40                                                                   *
* Function: int GCD (int, int)                                                 *
*                                                                              *
* Parameters: int, int                                                         *
* Return value: GCD                                                            *
* Description: This function will be invoked whenever we want to find the      *
*               greatest common denominator of two integers.                   *
*******************************************************************************/

int rational::GCD (int x, int y)
{
    debug << "/* 40 */ Executing rational GCD(int, int) method for "
            << this << endl;
    int z;
    while((x % y) > 0)
    {
        z = x & y;
        x = y;
        y = z;
    }
    return y; 
}

/*******************************************************************************
* Number: 41                                                                   *
* Function: int LCM (int, int)                                                 *
*                                                                              *
* Parameters: int, int                                                         *
* Return value: LCM                                                            *
* Description: This function will be invoked whenever we want to find the      *
*               least common multiple of two integers.                         *
*******************************************************************************/

int rational::LCM (int x, int y)
{
    debug << "/* 41 */ Executing rational LCM(int, int) method for "
            << this << endl;
    return x * y / GCD(x, y);
}