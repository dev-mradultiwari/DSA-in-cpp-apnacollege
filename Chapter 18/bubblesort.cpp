#include <iostream>
using namespace std;

// the idea of bubble sort is that we will push our largest element at the last

void print(int *arr, int n){    // this is used to print the array after sorting
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<endl;
}

void bubbleSort(int *arr, int n){
    for (int i = 0; i < n-1; i++)   // (for number of pass) we only have to run till n-1 times as we are starting from 0 so the less than sign is used
    {
        bool isSwap = false; // it helps us to check whether the array is already sorted or not

        for (int j = 0; j < n-i-1; j++) // for comparison in each pass means comparing each index and settling the highest element at last 
        {
           if (arr[j]>arr[j+1]) // comparing with next element
           {
            swap(arr[j], arr[j+1]);
            isSwap = true;
           }
                                
        }
        if (!isSwap) // same as isSWap = false
           {
                return; // it means if no swapping is done in the iteration of a single pass, then it means the array is now sorted
           }
    }
    print(arr,n);
}

int main(){
    int arr[] = {5, 4, 6, 3, 2};
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8}; already sorted array 
    int n = sizeof(arr)/sizeof(int);
    bubbleSort(arr, n);
    return 0;
}