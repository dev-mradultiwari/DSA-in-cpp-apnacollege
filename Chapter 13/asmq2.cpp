#include <iostream>
using namespace std;

int sum(int n){
    int total =0;
    while (n>0)
    {
        int ldg = n%10;
        total+=ldg;
        n/=10;
    }

    return total;
    
}

int main(){
    cout<<"the sum is "<<sum(131);
    return 0;
}