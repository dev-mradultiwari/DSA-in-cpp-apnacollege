/* since the time complexity of brute force is n^3 which is not agood time complexity so to decrease the time complexity we optimise the brute force approach */

#include <iostream>
using namespace std;

void maxSubarraySum2(int *arr, int n){
    int maxSum = INT_MIN;

    for (int start = 0; start < n; start++) // used to go the subarrays of next element of the array 
    {
        int currSum = 0;
        for (int end = start; end < n; end++) // used to go to the next subarray of the same element
        {
            currSum+=arr[end];
            maxSum = max(maxSum, currSum);
        }
        
    }
    cout<<"maximum subarray sum is "<<maxSum<<endl;
}

int main(){
    int arr[] ={2, -3, 6, -5, 4, 2};
    int n = sizeof(arr)/sizeof(int);
    maxSubarraySum2(arr, n);
    return 0;
}