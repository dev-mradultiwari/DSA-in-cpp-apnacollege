#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int sum=0;

    while (n>0)
    {
        int dg = n%10;
        if (dg%2!=0)
        {
            sum+=dg;
        }
        n/=10;
        
    }
    cout<<sum;
    
    return 0;
}