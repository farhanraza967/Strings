#include <iostream>
#include <fstream>
using namespace std;
int main(){
string path = "student/text/practice1.txt";

try { //try these actions
  ifstream file;
  file.open(path);
  if (!file) {
    throw runtime_error("File failed to open."); //throw error
  }
  file.close();
  cerr << "File successfully opened and closed." << endl; //When printing error messages, cerr is preferred over cout. cerr is not bufferred, which means it is not stored in memory to be printed later on. It just gets printed immediately.
}
  
catch (exception& e) { //catch error
  cerr << e.what() << endl;
}
  return 0;
}
