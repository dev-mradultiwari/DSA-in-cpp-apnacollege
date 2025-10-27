#include <iostream>
using namespace std;

// in selection sort algo we try to place the smallest element at the first index

void print(int *arr, int n){    // this is used to print the array after sorting
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<endl;
}

void selectionSort(int *arr, int n){
for (int i = 0; i < n-1; i++)   
{
    int minindx = i;    // initialising by assuming that our index which we are replacing is the minimum

   for (int j = i+1; j < n; j++) // i+1 is used as we only have to check the elemnts after the initialsing index of minindx
   {
    if (arr[j]<arr[minindx])    // if there is any index which is lesser than the index we intialised in starting 
    {
        minindx = j;       // then change the value of minindx with that value
    }
    
   }
   swap(arr[i], arr[minindx]);  // now swapping the values
}
    print(arr, n);
}

int main(){
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr)/sizeof(int);
    selectionSort(arr, n);
    return 0;
}