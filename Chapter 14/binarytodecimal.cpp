#include <iostream>
using namespace std;

void binToDec(int binNum){
int n = binNum;
int decNum = 0;
int power = 1; //2^0 = 1, 2^2 = 4, 2^2^2 = 8 ......

while(n>0){
    int ldg = n%10;
    decNum += ldg*power;
    power*=2; 
    n/=10;
}

cout<<"The decimal number is "<<decNum;
}

int main (){
    int n;
    cout<<"enter the binary number to convert: ";
    cin>>n;
    binToDec(n);
    return 0;
}