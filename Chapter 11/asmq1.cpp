#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the no: ";
    cin>>n;

    int factorial = 1;

    for (int a = n; a > 0; a--)
    {
        factorial = factorial*a;
        
    }

    cout<<"the factorial is "<<factorial;
    

    return 0;
}