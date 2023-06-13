#ifndef ROOMDATA_H
#define ROOMDATA_H
#include <iostream>
using namespace std;

class RoomData 
{
    public:
	RoomData ();
	~RoomData ();
	RoomData (const RoomData & RD);
	RoomData (int parameter1, int parameter2, int parameter3, int parameter4, float parameter5);
	RoomData & operator = (const RoomData & RD);
	friend ostream & operator << (ostream & outs, const RoomData & RD);

    private:
	float attribute1;
	float attribute2;
	int attribute3;
	int attribute4;
	int attribute5;
	float attribute6;
	float attribute7;
	float attribute8;
	float attribute9;
};

#endif
