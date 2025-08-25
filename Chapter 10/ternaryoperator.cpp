#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"enter your age: ";
    cin>>age;
    
    cout<<(age>=18?"You are adult":"You are minor"); //ternary operator using cout to prin directly

    return 0;
}