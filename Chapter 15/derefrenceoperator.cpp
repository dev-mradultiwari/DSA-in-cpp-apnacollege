#include <iostream>
using namespace std;

int main(){
    int a = 10;
    cout<<&a<<endl;
    cout<<*(&a) /*dereference operator*/<<endl; //it is just used to print that what is stored in the memory by using memory address

    int *ptr = &a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl; //dereferencing the pointer (updated on new )

    *ptr = 20; //modifying the value of var a with the help of pointer
    cout<<a<<endl;
    return 0;
}    