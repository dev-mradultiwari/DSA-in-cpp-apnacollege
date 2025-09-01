#include <iostream>
using namespace std;

int abSquare(int a, int b){
    return a*a+b*b+2*a*b;
}

int main(){
    cout<<"whole square is "<<abSquare(2, 3);
    return 0;
}