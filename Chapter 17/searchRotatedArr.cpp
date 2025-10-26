#include <iostream>
using namespace std;

int searchArr(int *arr, int n, int target){
    int start = 0, end = n-1;
    while (start<=end)
    {
        int mid = (start+end)/2;
       if (arr[mid]==target)
       {
        return mid;
       }
       
       else if (arr[start]<=arr[mid])    // checking whether the left array is sorted 
       {
            if (target>=arr[start] && target<=arr[mid])
            {
                end = mid;
            }
            else{
                start = mid+1;  // if left array is sorted but the target is not present in it we will move forward to the right array
            }
            
       }
       else{
        if (target>=arr[mid+1] && target<=arr[end]) // checking whether the target is present in the right array
        {
            start=mid+1;
        }
        else{   // going back to the new left array if the target is not present in the right array 
            end = mid;
        }
        
       }
    }
    return -1;
}

int main(){
    int arr[] = {6, 7, 1, 2, 3, 4, 5}; // this array is specially written to check the last condition of else statement 
    int n = sizeof(arr)/sizeof(int);
    int target = 7;
    cout<<searchArr(arr, n, target)<<endl;
    return 0;
}