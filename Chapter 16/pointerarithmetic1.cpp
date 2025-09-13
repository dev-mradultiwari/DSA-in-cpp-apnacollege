#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *aptr = &a;
    cout<<aptr<<endl;
    aptr++; /* it will give the next memory address after the 4 bytes of the spaces because it is an int pointer but if we do same with the char it will give the next memory address because char stores only 1 bytes of the space*/
    cout<<aptr<<endl;
    aptr--;
    cout<<aptr<<endl; //starting and ending values will be same we are decrementing the value back to the start value


    return 0;
}