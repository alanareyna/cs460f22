#include <iostream>
#include <fstream>
#include "rational.h"

using namespace std;

int main ()
{
    //Testing rounding to 2 decimal places of 0.6666666666...
    rational r1(2, 3);
    cout << "Rounded: " << round(r1, 2) << endl;

    // Testing rounding of 0.75 to 5 decimal places
    rational r2(3, 4);
    cout << "Rounded: " << round(r2, 5) << endl;

    // Testing rounding to 0 decimal places
    rational r3(1, 2);
    cout << "Rounded: " << round(r3, 0) << endl;

    return 0;
}

