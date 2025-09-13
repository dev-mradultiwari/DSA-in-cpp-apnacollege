#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int *ptr = &a;
    cout<<ptr<<endl;
    cout<<(ptr+3)<<endl; //ot means we will skip three times the spaces of int that is 12 bytes and then print the memoory address
    cout<<(ptr-3);
    return 0;
}