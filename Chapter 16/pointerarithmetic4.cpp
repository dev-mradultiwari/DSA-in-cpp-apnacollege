#include <iostream>
using namespace std;

int main(){
    int arr[5] = {9, 7, 5, 4, 3};
    int *ptr = arr; // points to inex 0
    int *ptr2 = ptr+3; // points to index 3

    cout<<(ptr == ptr2); // it will check that is the address of ptr is same as ptr 2 so it will return 0
    cout<<(*ptr > *ptr2); // it will check for the value stored in the index it will return 1
    return 0;
}