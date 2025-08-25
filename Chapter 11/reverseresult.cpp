#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int res=0;
    
    while (n>0)
    {
        int ldg = n%10;
        res=res*10+ldg;
        n/=10;
    }
    cout<<"Result "<<res;
    

    return 0;
}