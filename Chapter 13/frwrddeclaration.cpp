#include <iostream>
using namespace std;

void sayhello(); //we have to declare our function before the main function otherwise it will show error this is called forward declaration

int main(){
    sayhello();
    return 0;
}

void sayhello(){
    cout<<"Hello, world :)"<<endl;
}