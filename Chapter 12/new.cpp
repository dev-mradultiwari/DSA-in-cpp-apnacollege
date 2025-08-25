#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;

    bool isprime = true;

    if (n<=1)
    {
        isprime=false;
    }
    else
    {
        for (int i = 2; i*i <= n ; i++)
        {
            if (n%i==0)
            {
               isprime=false;
               break;
            }
            
        }
        
    }

    if (isprime)
    {
        cout<<"num is prime";
    }
    else
    {
        cout<<"num is not prime";
    }
    
      
    
    return 0;
}