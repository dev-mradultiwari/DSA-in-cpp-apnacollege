#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int *ptr = &x;

    int y = 15;
    ptr = &y;   /*this says we can change the value stored in the pointer but this cannot happens with the value stored in the array means array are a constant pointer*/
    cout<<ptr<<endl;

    return 0;
}