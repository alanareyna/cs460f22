#include <sstream>
#include <iostream>
#include <fstream>
using namespace std;

// istream operator >> (istream & input)
// {
//   while (isspace (input.peek()))
//     {
//       cout << "input.get(): " << input.get() << endl;
//     }
//     /** step 3: look at the next character **/
//   cout << "input.peek(): " << c = input.peek() << endl;
// }


int main()
{
  cout << "Testing input operator" << endl;
	ifstream in("Exercise4.in");
  if(!in) {
        cout << "Failed to open martinettiE4-5.in!" << endl;
        return -1;
    }
  while (isspace (input.peek()))
  {
    cout << "input.get(): " << input.get() << endl;
  }
    /** step 3: look at the next character **/
  cout << "input.peek(): " << c = input.peek() << endl;
}
