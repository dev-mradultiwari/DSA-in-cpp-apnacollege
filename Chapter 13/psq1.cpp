#include <iostream>
using namespace std;

int prod(int a, int b){
    return a*b;
}

int main(){
    int multi = prod(10, 20);
    cout<<"Product = "<<multi;
    return 0;
}