#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the 3 digit number: ";
    cin>>num;

    int n = num;    

    int dg3 = n % 10;
    n/=10;

    int dg2 = n % 10;
    n/=10;
    
    int dg1 = n;

    int cubesum = dg1*dg1*dg1 + dg2*dg2*dg2 + dg3*dg3*dg3;

    if (cubesum==num)
    {
        cout<<"It is an armstrong number.";
    }

    else{
        cout<<"It is not an armstrong number.";
    }
    


    return 0;
}