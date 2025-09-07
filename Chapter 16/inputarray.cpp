#include <iostream>
using namespace std;

int main(){
    int arr[5];
    int n = sizeof(arr)/sizeof(int);

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i]; //to take input for the values of array from user
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    

    return 0;
}