#include <iostream>
using namespace std;

int main(){
    int n=10829;
    int sum = 0;

    while (n>0)
    {
        int dg = n%10;
        sum+=dg;
        n/=10;
    }
     cout<<sum;
    
    
    return 0;

}