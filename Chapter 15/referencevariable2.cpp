#include <iostream>
using namespace std;

// pass by using reference variable

void changeA(int &param){
    param = 20;
    cout<<param<<endl;
}

int main(){
   int a = 10;
   changeA(a);
   cout<<a<<endl;
}

/*
it just works like what we had written in the referencevariable.cpp file that means is we comapare that &b = a from that file here it is &param = a . &param is from void function and a is coming from main function
*/