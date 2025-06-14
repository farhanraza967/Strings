#include <iostream>
#include <fstream>
using namespace std;
int main(){

  string path = "student/text/readpractice.txt";  

try {
  ifstream file;
  file.open(path); //content of file goes into memory buffer
  if (!file) {
    throw runtime_error("File failed to open.");
  }
  cout << file.rdbuf(); //read the buffered content
  file.close();
}
  
catch (exception& e) {
  cerr << e.what() << endl;
}  
  return 0;
  
}
