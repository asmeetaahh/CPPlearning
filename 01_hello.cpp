//Saying hello to CPP
#include<iostream>
using namespace std;
int main(){
    string name;
    //Taking user input
    cout <<"Enter your full name: ";
    getline(cin,name);      //gets the full name in one line
    cout<<"Hello, " << name <<"! Welcome to CPP" <<endl;
}