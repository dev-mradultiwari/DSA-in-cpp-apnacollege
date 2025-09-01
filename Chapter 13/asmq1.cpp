#include <iostream>
using namespace std;

int ispalindrome(int n){
    
    int res =0;
    while (n>0)
    {
       int ldg = n%10;
       res = res*10 + ldg;
       n/=10;
    }
    
    return res;
    
}

int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    
    int reverse = ispalindrome(n);
    if (n==reverse)
    {
        cout<<"yes it is palindrome number";
    }

    else{
        cout<<"no it is not palindrome number";
    }
   
    return 0;
}