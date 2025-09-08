#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    cout<<arr<<endl; // if we print the name of array then it will give us the memoory address i.e. printing the name of array is indirectly printing a pointer, arrays are like pointers 
    cout<<*arr<<endl; //equivalent to arr[0]
    cout<<*(arr+1)<<endl; // arr[1]
    cout<<*(arr+2)<<endl; // arr[2]
    cout<<*(arr+3)<<endl; // arr[3]
    cout<<*(arr+4)<<endl; // arr[4]


    return 0;
}
