#include <iostream>
#include <fstream>
#include "rational.h"

using namespace std;

int main ()
{
    int x, y;

    //Testing with two integers resulting in false
    rational r1(2, 1);
    rational r2(2, 2);
    cout << "Comparing 2 <= 1..." << endl;
    if(r1 <= r2){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }

    // Testing with two floats
    rational float1(1.0, 2.0);
    rational float2(2.0, 9.0);
    cout << "Comparing 1/2 <= 2/9..." << endl;
    if(r1 <= r2){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }

    // Testing two chars
    rational char1('1', '2');
    rational char2('2', '9');
    cout << "Comparing 1/2 <= 2/9..." << endl;
    if(r1 <= r2){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }

    return 0;
}

