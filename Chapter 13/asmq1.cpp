#include <iostream>
using namespace std;

bool ispalindrome(int n){
    int copyofn = n;
    int res =0;
    while (n>0)
    {
       int ldg = n%10;
       res = res*10 + ldg;
       n/=10;
    }
    
    if (copyofn==res)
    {
        return true;
    }

    else{
        return false;
    }
    
}

int main(){
    cout<<ispalindrome(123);
    return 0;
}