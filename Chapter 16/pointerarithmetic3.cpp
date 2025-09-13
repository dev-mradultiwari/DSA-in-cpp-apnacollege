#include <iostream>
using namespace std;

int main(){
    int arr[20] = {1, 2, 3, 4, 5};
    int *ptr1 = arr; // points to arr[0]
    int *ptr2 = ptr1+3; // points to arr[3] i.e 4

    cout<<ptr1<<endl;
    cout<<ptr2<<endl;
    cout<<ptr2-ptr1; // it will give the result that how many steps we had taken to reach the arr[3] i.e. 3 steps 1, 2 and 3
    return 0;
}