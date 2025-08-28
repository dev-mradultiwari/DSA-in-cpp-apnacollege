#include <iostream>
using namespace std;

void sayhello(){
cout<<"Hello, world :)"<<endl;
}

void assistant(){
    sayhello(); // fuction call
    cout<<"hey, i am the assistant"<<endl;
}

int main(){
    assistant();    // function call
    cout<<"hey i am the main function and execution of all the functions mainly be in the main function"<<endl;
    return 0;
}