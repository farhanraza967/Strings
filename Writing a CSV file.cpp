#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(){
string path = "student/csv/writepractice.csv";

try {
  ofstream file;
  file.open(path);
  if (!file) {
    throw runtime_error("File failed to open.");
  }
  file << "Greeting,Language" << endl;
  file << "Hello,English" << endl;
  file << "Bonjour,French" << endl;
  file << "Hola,Spanish";
  file.close();
  
  ifstream file2;
  string read;
  file2.open(path);
  while (getline(file2, read, ',')) {
    cout << read + ' ';
  }
  file2.close();
}
  
catch (exception& e) { //catch error
  cerr << e.what() << endl;
}
  return 0;
  
}
