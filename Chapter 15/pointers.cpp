#include <iostream>
using namespace std;

int main(){
    //pointer just stores the address of other variables in themselves
    int a = 10;
    int *ptr = &a; //declaring pointer

    cout<<&a<<" = "<<ptr<<endl; // checking that the pointer is assigned

    float pi = 3.14;
    float *ptr2 = &pi;

    cout<<&pi<<" = "<<ptr2<<endl;

    float **pptr = &ptr2; //assigning the address of a pointer to other pointer for this we wil use two **
    cout<<&ptr2<<" = "<<pptr<<endl;
    return 0;
}