#include <iostream>
#include <fstream>
#include "rational.h"

using namespace std;

int main ()
{
    //Testing incrementing
    rational r1(2, 2);
    cout << "Reduced r1 before increment: " << r1.reduce() << endl;
    ++r1;
    cout << "R1 after increment: " << r1 << endl;


    // Testing incrementing of float rational
    rational r2(2.0, 2.0);
    cout << "Reduced r2 before increment: " << r2.reduce() << endl;
    ++r2;
    cout << "Reduced r2 after increment: " << r2.reduce() << endl;

    // Testing incrementing with non-whole rational
    rational r3(1, 2);
    cout << "Reduced r3 before increment: " << r3.reduce() << endl;
    ++r3;
    cout << "Reduced r3 after increment: " << r3.reduce() << endl;

    return 0;
}

