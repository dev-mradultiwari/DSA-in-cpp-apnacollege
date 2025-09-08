#include <iostream>
using namespace std;

// without using extra spaces - by swapping array indexes (optimised)

int main(){
    int arr[] = {5, 8, 9, 10, 12, 7};
    int n = sizeof(arr)/sizeof(int);

    int start = 0, end = n-1; 
    while (start < end)
    {
        swap(arr[start], arr[end]); // swapping the start index with end index 
        start++;
        end--;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}