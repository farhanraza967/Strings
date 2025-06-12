#include <iostream>
using namespace std;
int main(){
string my_string = "Hello world";
for (int i = 0; i < my_string.length(); i++) {
  cout << my_string.at(i);
}
cout<<endl;
string my_string1 = "Hello world!";
for (char c : my_string1){
  cout << c;
}
  string my_string2 = "Calvin and Hobbes";
int i = 0;

while (i < my_string2.length()) {
  cout << my_string2.at(i);
  i++;
}
  return 0;
  
}
