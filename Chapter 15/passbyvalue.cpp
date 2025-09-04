#include <iostream>
using namespace std;

//pass by value means the value makes a copy in another function and it will not change in the main function or the original copy

void changeA(int a){
    a = 20;
    cout<<a<<endl;
}

int main(){
    int a = 10;
    changeA(a);
    cout<<a<<endl;
}