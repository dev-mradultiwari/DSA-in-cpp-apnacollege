#include <iostream>
using namespace std;

int main(){
    int a,b;
    int largest;
    cout<<"Enter the first number";
    cin>>a;
    cout<<"Enter the second number";
    cin>>b;

    largest = (a>b)? a: b;  //this is the way by which we can use ternary operator directly 
    cout<<"Largest is "<<largest;
    return 0;
}