#include<iostream>
using namespace std;
int main(){
    int s;
    cout<< "Enter your score: ";
    cin>> s;
    if (s >= 90){
        cout<< "Grade: A+" << endl;
    } 
    else if (s >= 80){
        cout<< "Grade: A" << endl;
    } 
    else if (s >= 70){
        cout<< "Grade: B" << endl;
    }
    else if (s >= 60){
        cout<< "Grade: C" << endl;
    }
    else if (s >= 50){
        cout<< "Grade: D" << endl;
    }
    else{
        cout<< "Grade: F" << endl;
    }
    return 0;
}
