#include<iostream>
using namespace std;
float addNumbers(float n1,float n2){
    return n1+n2;
}
int main(){
    float a,b;
    cout <<"Enter the first number: ";
    cin >>a;
    cout <<"Enter the second number: ";
    cin >>b;
    cout <<"The sum of two numbers: " <<addNumbers(a,b) <<endl;
    return 0;
}
