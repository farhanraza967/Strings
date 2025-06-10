#include <iostream>
using namespace std;

int main() {

string my_string = "The brown dog jumps over the lazy fox.";
string my_slice = my_string.substr(4, 9); // skip first 4 and print till next 9

cout << my_slice << endl;

  
  return 0;
  
}
