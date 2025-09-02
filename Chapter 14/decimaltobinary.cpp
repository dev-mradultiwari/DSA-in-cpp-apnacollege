#include <iostream>
using namespace std;

void decTobin(int decNum)
{
    int n = decNum;
    int pow = 1;
    int binNum = 0;

    while (n > 0)
    {
        int rem = n % 2;     // get last binary digit (0 or 1)
        binNum += rem * pow; // add digit at correct place
        n = n / 2;           // reduce n by dividing by 2
        pow = pow * 10;      // shift place value (1 → 10 → 100 ...)
    }

    cout<<"The binary number of "<<decNum<<" is "<<binNum;

}

int main(){
    int n;
    cout<<"enter the num : ";
    cin>>n;

    decTobin(n);

    return 0;
}