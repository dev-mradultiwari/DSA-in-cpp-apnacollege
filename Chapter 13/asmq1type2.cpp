#include <iostream>
using namespace std;

int reverse(int n){
    int res = 0;
    while (n>0)
    {
        int ldg = n%10;
        res = res*10+ldg;
        n/=10;
    }

    return res;
    
}

bool isPalindrome(int num){
    int revnum = reverse(num);
    return revnum == num;
}

int main(){
    cout<<isPalindrome(121);
    return 0;
}