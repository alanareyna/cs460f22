/*****************************************************************
* Assignment: Exercise 4 - rational class                        *
* Author: Dr. Watts                                              *
* Date: Fall 2022                                                *
* File: rational.cpp                                             *
*                                                                *
* Description: This file contains the                            *
*****************************************************************/

#include "rational.h"
#include <sstream>
#include <iomanip>

#define DEBUG true
#define debug if (DEBUG) cerr

// Constructors
	
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
	debug << "/* 1 */ Executing rational default constructor for "
              << this << endl;
	num = 0;
	denom = 1;
}

/*******************************************************************************
* Number: 2                                                                    *
* Function: Copy Constructor                                                   *
*                                                                              *
* Parameters: An existing rational                                             *
* Return value: None                                                           *
* Description: This function will copy the contents of the rational passed to  *
*              it to this newly constructed rational.                          *
*******************************************************************************/

rational::rational (const rational & R)
{
	debug << "/* 2 */ Executing rational copy constructor for "
	      << this << endl;
	num = R.num;
	denom = R.denom;
}

	
// Destructor 
	
/*******************************************************************************
* Number: 3                                                                    *
* Function: Destructor                                                         *
*                                                                              *
* Parameters: None                                                             *
* Return value: None                                                           *
* Description: This function will                                              *
*******************************************************************************/

rational::~rational ()
{
	debug << "/* 3 */ Executing rational destructor for " << this << endl;
}
 
	
//Assignment operator
	
/*******************************************************************************
* Number: 4                                                                    *
* Function: Assignment Operator                                                *
*                                                                              *
* Parameters: An existing rational                                             *
* Return value: An implicit pointer to this rational                           *
* Description: This function will copy the contents of the rational passed to  *
*              it to this existing rational.                                   *
*******************************************************************************/

rational & rational::operator = (const rational & R)
{
	debug << "/* 4 */ Executing rational assignment operator for "
	      << this << " and " << &R << endl;
	num = R.num;
	denom = R.denom;
	return * this;
}

	
// Input and Output Operators
	
/*******************************************************************************
* Number: 5                                                                    *
* Function:                                                                    *
*                                                                              *
* Parameters:                                                                  *
* Return value:                                                                *
* Description:                                                                 *
*******************************************************************************/

istream & operator >> (istream & input, rational & R)
{
	debug << "/* 5 */ Executing rational extraction operator for "
	      << &R << endl;
	int n = 0, d = 1;
	char c, x = ' ';
	while (isspace (input.peek()))
		input.get();
	c = input.peek ();
	if ((c == '+') || (c == '-') || isdigit (c))
	{
		input >> n; 
		c = input.peek ();
	}
	if (c == '/' || c == '.')
		x = input.get();
	if (x == '.')
		d = 0;
	c = input.peek ();
	//if ((c == '+') || (c == '-') || isdigit (c))
	if (isdigit (c))
		input >> d; 
	if (x == '.')
		R = rational (stod (to_string (n) + x + to_string (d)));
	else
		R = rational (n, d);
	return input;
}

/*******************************************************************************
* Number: 6                                                                    *
* Function:                                                                    *
*                                                                              *
* Parameters:                                                                  *
* Return value:                                                                *
* Description:                                                                 *
*******************************************************************************/

ostream & operator << (ostream & output, const rational & R)
{
	debug << "/* 6 */ Executing rational insertion operator for "
	      << &R << endl;
	output << R.num;
	if (R.denom != 1)
		output << '/' << R.denom;
	return output;
}


	
// Additional constructors constructors
	
/*******************************************************************************
* Number: 7                                                                    *
* Function:                                                                    *
*                                                                              *
* Parameters:                                                                  *
* Return value:                                                                *
* Description:                                                                 *
*******************************************************************************/

rational::rational (const int numerator, const int denominator)
{
	debug << "/* 7 */ Executing rational (int,int) constructor for "
	      << this << endl;
	num = numerator;
	denom = denominator;
	reduce ();
}

/*******************************************************************************
* Number: 8                                                                    *
* Function:                                                                    *
*                                                                              *
* Parameters:                                                                  *
* Return value:                                                                *
* Description:                                                                 *
*******************************************************************************/

rational::rational (const int I)
{
	debug << "/* 8 */ Executing rational (int) constructor for "
	      << this << endl;
	num = I;
	denom = 1;
}

/*******************************************************************************
* Number: 9                                                                    *
* Function:                                                                    *
*                                                                              *
* Parameters:                                                                  *
* Return value:                                                                *
* Description:                                                                 *
*******************************************************************************/

rational::rational (const double D)
{
	debug << "/* 9 */ Executing rational (double) constructor for "
	      << this << endl;
	stringstream ss;
	bool neg = D < 0 ? true : false;
	ss << showpoint << fixed << setprecision(5) << abs(D);
	int whole, fraction;
	char dot;
	ss >> whole >> dot >> fraction;
	denom = 100000;
	num = whole * denom + fraction;
	reduce ();
	num = neg ? -num : num;
}

	
// Accessor/Mutator functions

/*******************************************************************************
* Number: 10                                                                   *
* Function:                                                                    *
*                                                                              *
* Parameters:                                                                  *
* Return value:                                                                *
* Description:                                                                 *
*******************************************************************************/

int & rational::denominator ()
{
	debug << "/* 10 */ Executing rational denominator method for "
	      << this << endl;
	return denom;
}

/*******************************************************************************
* Number: 11                                                                   *
* Function:                                                                    *
*                                                                              *
* Parameters:                                                                  *
* Return value:                                                                *
* Description:                                                                 *
*******************************************************************************/

int & rational::numerator ()
{
	debug << "/* 11 */ Executing rational numerator method for "
	      << this << endl;
	return num;
}


// Logical Operators
       
/*******************************************************************************
* Number: 12                                                                   *
* Function:                                                                    *
*                                                                              *
* Parameters:                                                                  *
* Return value:                                                                *
* Description:                                                                 *
*******************************************************************************/

bool rational::operator != (const rational & R) const
{
	debug << "/* 12 */ Executing rational != operator for " << this
	      << " and " << &R << endl;
	return (num * R.denom) != (R.num * denom);
}

/* 13 */
bool rational::operator > (const rational & R) const
{
	debug << "/* 13 */ Executing rational > operator for " << this
	      << " and " << &R << endl;
	return (num * R.denom) > (R.num * denom);
}

/* 14 */
bool rational::operator >= (const rational & R) const
{
	debug << "/* 14 */ Executing rational >= operator for " << this
	      << " and " << &R << endl;
	return (num * R.denom) >= (R.num * denom);
}

/* 15 */
bool rational::operator == (const rational & R) const
{
	debug << "/* 15 */ Executing rational == operator for " << this
	      << " and " << &R << endl;
	return (num * R.denom) == (R.num * denom);
}

/* 16 */
bool rational::operator < (const rational & R) const
{
	debug << "/* 16 */ Executing rational < operator for " << this
	      << " and " << &R << endl;
	return (num * R.denom) < (R.num * denom);
}

/* 17 */
bool rational::operator <= (const rational & R) const
{
	debug << "/* 17 */ Executing rational <= operator for " << this
	      << " and " << &R << endl;
	return (num * R.denom) <= (R.num * denom);
}

	
// Arithmetic Operators

/*******************************************************************************
* Number: 18                                                                   *
* Function:                                                                    *
*                                                                              *
* Parameters:                                                                  *
* Return value:                                                                *
* Description:                                                                 *
*******************************************************************************/

rational rational::operator + (const rational & R) const
{
	debug << "/* 18 */ Executing rational + operator for " << this
	      << " and " << &R << endl;
	rational sum;
	sum.num = (num * R.denom) + (R.num * denom);
	sum.denom = denom * R.denom;
	sum.reduce ();
	return sum;
}

/* 19 */
rational rational::operator / (const rational & R) const
{
	rational quotient;
	debug << "/* 19 */ Executing rational / operator for " << this
	      << " and " << &R << endl;
	quotient.num = num * R.denom;
	quotient.denom = denom * R.num;
	quotient.reduce ();
	return quotient;
}

/* 20 */
rational rational::operator - (const rational & R) const
{
	debug << "/* 20 */ Executing rational - operator for " << this
	      << " and " << &R << endl;
	rational diff;
	diff.num = (num * R.denom) - (R.num * denom);
	diff.denom = denom * R.denom;
	diff.reduce ();
	return diff;
}

/* 21 */
rational rational::operator * (const rational & R) const
{
	debug << "/* 21 */ Executing rational * operator for " << this
	      << " and " << &R << endl;
	rational product;
	product.num = num * R.num;
	product.denom = denom * R.denom;
	product.reduce ();
	return product;
}

/*******************************************************************************
* Number: 22                                                                    *
* Function:                                                                    *
*                                                                              *
* Parameters:                                                                  *
* Return value:                                                                *
* Description:                                                                 *
*******************************************************************************/

rational rational::operator *= (const rational & R)
{
	debug << "/* 22 */ Executing rational *= operator for " << this
	      << " and " << &R << endl;
	*this = *this * R;
	return * this;
}

/* 23 */
rational rational::operator += (const rational & R)
{
	debug << "/* 23 */ Executing rational += operator for " << this
	      << " and " << &R << endl;
	*this = *this + R;
	return * this;
}

/* 24 */
rational rational::operator -= (const rational & R)
{
	debug << "/* 24 */ Executing rational -= operator for " << this
	      << " and " << &R << endl;
	*this = *this - R;
	return * this;
}

/* 25 */
rational rational::operator /= (const rational & R)
{
	debug << "/* 25 */ Executing rational /= operator for " << this
	      << " and " << &R << endl;
	*this = *this / R;
	return * this;
}

/*******************************************************************************
* Number: 26                                                                   *
* Function: Pre increment operator                                             *
*                                                                              *
* Parameters:                                                                  *
* Return value:                                                                *
* Description:                                                                 *
*******************************************************************************/

rational rational::operator ++ ()
{
	debug << "/* 26 */ Executing rational pre ++ operator for "
	      << this << endl;
	num += denom;
	reduce ();
	return * this;
}
/* 27 */ // Post
rational rational::operator ++ (int)
{
	debug << "/* 27 */ Executing rational post ++ operator for "
	      << this << endl;
	rational copy = *this;
	num += denom;
	reduce ();
	return copy;
}
/* 28 */ // Pre
rational rational::operator -- ()
{
	debug << "/* 28 */ Executing rational pre -- operator for "
	      << this << endl;
	num -= denom;
	reduce ();
	return * this;
}
/* 29 */ // Post
rational rational::operator -- (int)
{
	debug << "/* 29 */ Executing rational post -- operator for "
	      << this << endl;
	rational copy = *this;
	num -= denom;
	reduce ();
	return copy;
}
	
// Conversion Operators
	
/* 30 */
/*******************************************************************************
* Number: 1                                                                    *
* Function:                                                                    *
*                                                                              *
* Parameters:                                                                  *
* Return value:                                                                *
* Description:                                                                 *
*******************************************************************************/

rational::operator int () const
{
	debug << "/* 30 */ Executing rational int() operator for "
	      << this << endl;
	return num / denom;
}

/* 31 */
rational::operator float () const
{
	debug << "/* 31 */ Executing rational float() operator for "
	      << this << endl;
	return float(num) / denom;
}

/* 32 */
rational::operator double () const
{
	debug << "/* 32 */ Executing rational double() operator for "
	      << this << endl;
	return double(num) / denom;
}

/* 33 */
string to_string (const rational & R)
{
	debug << "/* 33 */ Executing rational to_string method for "
	      << &R << endl;
	stringstream ss;
	ss << R;
	return ss.str();
}


/* 34 */
/*******************************************************************************
* Number: 34                                                                   *
* Function: round                                                              *
*                                                                              *
* Parameters: None                                                             *
* Return value: None                                                           *
* Description:                                                                 *
*******************************************************************************/

void rational::round ()
{
	debug << "/* 34 */ Executing rational round() method for "
	      << this << endl;
	num = int (double(num) / denom + 0.5);
	denom = 1;
}
				
/* 35 */
void rational::round (unsigned D)
{
	debug << "/* 35 */ Executing rational round(unsigned) method for "
	      << this << endl;
	num = int (double(num) * D /denom + 0.5);
	denom = D;
	reduce ();
}
	
/* 36 */
int round (const rational & R)
{
	debug << "/* 36 */ Executing round(rational) friend function for "
	      << &R << endl;
	return int (double(R.num) / R.denom + 0.5);
}

/* 37 */
rational round (const rational & R, unsigned D)
{
	debug << "/* 37 */ Executing round(rational,unsigned) friend function"
	      << "  for " << &R << endl;
	rational rounded;
	rounded.num = int (double(R.num) * D / R.denom + 0.5);
	rounded.denom = D;
	rounded.reduce ();
	return rounded;
}

	
// Other Methods
	
/*******************************************************************************
* Number: 38                                                                   *
* Function:                                                                    *
*                                                                              *
* Parameters:                                                                  *
* Return value:                                                                *
* Description:                                                                 *
*******************************************************************************/

rational rational::reduce ()
{
	debug << "/* 38 */ Executing rational reduce() method for "
	      << this << endl;
	if (denom == 0)
	{
		cerr << "Denominator cannot be 0; exiting program.\n";
		exit (1);
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
	int gcd = GCD (num, denom);
	num /= gcd;
	denom /= gcd;
	return * this;
}
			
/*******************************************************************************
* Number: 39                                                                   *
* Function:                                                                    *
*                                                                              *
* Parameters:                                                                  *
* Return value:                                                                *
* Description:                                                                 *
*******************************************************************************/

rational rational::reciprocal () const
{
	debug << "/* 39 */ Executing rational reciprocal() method for "
	      << this << endl;
	return rational (denom, num);
}
	
/*******************************************************************************
* Number: 40                                                                   *
* Function:                                                                    *
*                                                                              *
* Parameters:                                                                  *
* Return value:                                                                *
* Description:                                                                 *
*******************************************************************************/


int rational::GCD (int a, int b)
{
	debug << "/* 40 */ Executing rational GCD(int,int) method for "
	      << this << endl;
	unsigned max = abs (a) > abs (b) ? abs (a) : abs (b);
	unsigned min = abs (a) < abs (b) ? abs (a) : abs (b);
	do 
	{
		unsigned rem = max % min;
		max = min;
		min = rem;
	} while (min != 0);
	return max;
}

/*******************************************************************************
* Number: 41                                                                   *
* Function:                                                                    *
*                                                                              *
* Parameters:                                                                  *
* Return value:                                                                *
* Description:                                                                 *
*******************************************************************************/

int rational::LCM (int a, int b) 
{
	debug << "/* 41 */ Executing rational LCM(int,int) method for "
	      << this << endl;
	return a * b / GCD (a, b);
}
