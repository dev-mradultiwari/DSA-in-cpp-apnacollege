#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;

    int copyofn = n;

    int cubesum=0;

    while (n>0)
    {
       int dg = n%10;
       cubesum =cubesum+dg*dg*dg;
       n/=10;
    }
    
    if (cubesum==copyofn)
    {
        cout<<"it is an armstrong number";
    }
    else
    {
        cout<<"it is not an armstrong number";
    }
    
    
    
    
    return 0;
}