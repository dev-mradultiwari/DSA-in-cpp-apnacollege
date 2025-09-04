#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int &b = a; // making a reference variable -- mean if we change any of the value it will change in both values assigning the diff address to the same quantity
    a = 30;

    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}