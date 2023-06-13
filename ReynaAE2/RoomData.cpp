/* Modified by: Alana Reyna */

#include "RoomData.h"
#include <iomanip>
#include <cmath>
using namespace std;

RoomData::RoomData ()
{
    attribute1 = 0.0; /* first input converted into square inches. */
	attribute2 = 0.0; /* second input converted into square inches. */
	attribute3 = 0; /* number of square yards. */
	attribute4 = 0; /* number of square feet. */
	attribute5 = 0; /* number of square inches. */
	attribute6 = 0; /* cost per square yard. */
	attribute7 = 0; /* cost per square foot. */
	attribute8 = 0; /* cost per inch. */
	attribute9 = 0; /* final total calculated price. */
}

RoomData::~RoomData ()
{
}

RoomData::RoomData (const RoomData & RD)
{
	attribute1 = RD.attribute1;
	attribute2 = RD.attribute2;
	attribute3 = RD.attribute3;
	attribute4 = RD.attribute4;
	attribute5 = RD.attribute5;
	attribute6 = RD.attribute6;
	attribute7 = RD.attribute7;
	attribute8 = RD.attribute8;
	attribute9 = RD.attribute9;
}

/* Modified by: Alana Reyna
 * Date: 9/7/22
 * */
RoomData::RoomData (int parameter1, int parameter2, int parameter3, int parameter4, float parameter5)
{ 
  /* if loop checks to see if feet = 0 and if so, sets the attribute1 to parameter1 (inches of input1). */
  if (parameter1 == 0)
  {
      attribute1 = parameter2;
  }
  /* else loop converts input1 feet into inches and adds it with input1 inches, and sets result to attribute2. */
  else
  {
      attribute1 = (parameter1 * 12.0) + parameter2;
  }

  /* if loop checks to see if feet = 1 and if so, sets the attribute2 to parameter4 (inches of input2). */
  if (parameter3 == 0)
  {
      attribute2 = parameter4;
  }
  /* else loop converts input2 feet into inches, adds it with input2 inches, and sets result to attribute2. */
  else
  {
      attribute2 = (parameter3 * 12.0) + parameter4;
  }

  /* variable 1 is the total area in square inches of both inputs. */
  float variable1 = attribute1 * attribute2;
  /* attribute 3: the number of yards found by dividing total inches by one yard (in inches). */
  attribute3 = variable1 / 1296;

  /* the following calculates the leftover number of square inches after subtracting the total yards.
   * temp: holds the value of the total square inches taken from how many yards can be used.
   * temp_leftover_for_feet: holds the value of the total square inches still needed to be accounted for in feet.
   * */
  float temp = attribute3 * 1296;
  int temp_leftover_for_feet = variable1 - temp;

  /* attribute 4: the total number of square feet. */
  attribute4 = temp_leftover_for_feet / 144;

  /* the following calculates the leftover number of square inches after subtracting the total feet.
   * temp2: holds the value of the total square inches taken from how many feet can be used.
   * leftover_for_inches: holds the value of the total square inches still needed to be accounted for in inches.
   * */
  int temp2 = attribute4 * 144;
  int leftover_for_inches = temp_leftover_for_feet - temp2;

  /* attribute 5: number of square inches total. */
  attribute5 = leftover_for_inches;

  /* attribute 6: cost per yard. */
  attribute6 = parameter5;

  /* attribute 7: cost per foot. */
  attribute7 = attribute6 / 8;

  /* attribute 8: cost per inch. */
  attribute8 = attribute7 / 100;

  /* attribute 9: total cost.
   * I used the round function from the cmath library to take the cost per yard, foot, and inch to the nearest 100th decimal place.
   * I multiply each of those values to the number of yards, feet, and inches.
   * I then add all of those values together to get the total price.
   * */

  attribute9 = (attribute3 * (round(attribute6 * 100) / 100)) +
          (attribute4 * (round(attribute7 * 100) / 100)) +
          (attribute5 * (round(attribute8 * 100) / 100));
}

RoomData & RoomData::operator = (const RoomData & RD)
{
	if (this == &RD)
		return * this;
	attribute1 = RD.attribute1;
	attribute2 = RD.attribute2;
	attribute3 = RD.attribute3;
	attribute4 = RD.attribute4;
	attribute5 = RD.attribute5;
	attribute6 = RD.attribute6;
	attribute7 = RD.attribute7;
	attribute8 = RD.attribute8;
	attribute9 = RD.attribute9;
	return * this;
}

ostream & operator << (ostream & outs, const RoomData & RD)
{
	cout << fixed;
	outs << "Total price is $" << setprecision (2) << RD.attribute9 << " (";
	outs << RD.attribute3 << " @ $" << setprecision (2) << RD.attribute6 << "; ";
	outs << RD.attribute4 << " @ $" << setprecision (2) << RD.attribute7 << "; ";
	outs << RD.attribute5 << " @ $" << setprecision (2) << RD.attribute8 << ")";
	return outs;
}
