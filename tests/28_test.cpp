#include <iostream> 
using namespace std;

int main() {
  int i = 1;
  int a = 5;

  cout << i++ << ". a is " << a << endl;
  cout << "a++ == a is " << (a++ == a ? "true" : "false") << endl;
  cout << i++ << ". a is " << a << endl;
  cout << "++a == a is " << (++a == a ? "true" : "false") << endl;
  cout << i++ << ". a is " << a << endl;
  cout << "a == a++ is " << (a == a++ ? "true" : "false") << endl;
  cout << i++ << ". a is " << a << endl;
  cout << "a == ++a is " << (a == ++a ? "true" : "false") << endl;
  cout << i++ << ". a is " << a << endl;
  
  





}
