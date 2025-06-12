#include <iostream>
using namespace std;
int main(){
string my_string = "Hello world";
for (int i = 0; i < my_string.length(); i++) {
  cout << my_string.at(i);
}
cout<<endl;
string my_string1 = "Hello world!";
for (char c : my_string){
  cout << c;
}
  return 0;
  
}
