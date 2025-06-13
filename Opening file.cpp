#include <iostream>
#include <fstream>
using namespace std;
int main(){
string path = "student/text/practice1.txt";
ifstream file;
file.open(path);
if (file.is_open()) {
  cout << "File successfully opened." << endl;
}
else if (!file.is_open()) {
  cout << "File failed to open." << endl;
} 
  return 0;
  
}
