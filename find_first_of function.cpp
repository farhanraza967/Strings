#include <iostream>
using namespace std;

int main() {

string string1 = "The brown dog jumps over the lazy fox.";
string string2 = "brown";

cout << string1.find_first_of(string2) << endl; // check first indecx of b i.e 4
  
  return 0;
  
}

