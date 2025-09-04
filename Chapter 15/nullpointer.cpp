#include <iostream>
using namespace std;

int main(){
    int *ptr = NULL;
    cout<<ptr<<endl;

    cout<<*ptr<<endl; //segmentation fault - we cannot derefrence null pointer

}