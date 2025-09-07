#include <iostream>
using namespace std;

int main(){

    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int); //this will give us the length of array

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl; //i is the index
    }
        
    return 0;
}