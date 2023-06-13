#include "RoomData.h"
#include <fstream>

using namespace std;

int main (int argc, char * argv [])
{
	if (argc < 2)
	{
		cerr << "Usage: " << argv[0] << " <filename>\n";
		exit (1);
	}
	ifstream input (argv[1]);
	if (input.fail ())
	{
		cerr << "File: " << argv[1] << " cannot be opened\n";
		exit (2);
	}
	int feet1, inches1, feet2, inches2;
	float pricePerSquareYard;
	char mark;
	while (input >> feet1)
	{
		input >> mark >> inches1;
		input >> mark >> feet2;
		input >> mark >> inches2;
		input >> mark >> pricePerSquareYard;
		RoomData oneRoom (feet1, inches1, feet2, inches2, pricePerSquareYard);
		cout << oneRoom << endl;
	}
}
