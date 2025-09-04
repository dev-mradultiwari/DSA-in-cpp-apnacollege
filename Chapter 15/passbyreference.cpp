#include <iostream>
using namespace std;

// pass by refrence means if we change the value in function other then main function then the value will also be change din the main function

/*there are 2 types of pass by refrence
(i) by pointers
(ii) by reference varicables    */

//this is by using pointers

void changeA(int *ptr){
    *ptr = 20; //changing the value of a by using dereference operator
    cout<<*ptr<<endl; //printing the value of a
}

int main(){
    int a = 10;
    changeA(&a); // assigning the address to the void function

    cout<<a<<endl; // checking that the value is also changed in the main fucntion
    return 0;
}