#include <iostream>
#include <fstream>
using namespace std;

int main() {
string path = "student/text/readpractice.txt";

try {
  ifstream file;
  string read;
  file.open(path);
  if (!file) {
    throw runtime_error("File failed to open.");
  }
  getline(file, read, ','); //specify comma as delimiter
  cout << read;
  file.close();
}
  
catch (exception& e) {
  cerr << e.what() << endl;
}
  
  return 0;
  
}
