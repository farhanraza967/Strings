#include <iostream>
using namespace std;
int main(){
string my_string = "the big brown dog";

cout << char(toupper(my_string.at(0))) << endl; // print T
string my_string = "THE BIG BROWN DOG";

cout << char(tolower(my_string.at(1))) << endl; // print h
  
  return 0;
  
}
