#include <iostream>
#include <fstream>
#include "rational.h"

using namespace std;

int main ()
{
    int x, y;

    //Testing with cin input
    cout << "Enter your numerator and denominator separated by a space:" << endl;
    cin >> x;
    cin >> y;
    cout << "Calling constructor with values numerator = " << x << " and denominator = " << y << "..." << endl;
    rational fraction(x, y);

    // Test for correct data types of numerator and denominator
    cout << "Calling constructor with values numerator = '1' and denominator = '2' ..." << endl;
    rational fraction1('1', '2');

    // If rational will throw an error when passed doubles instead of int’s
    cout << "Calling constructor with values numerator = 2.0 and denominator = 1.3 ..." << endl;
    rational fraction2(2.0, 1.3);

    return 0;
}

