#include <iostream>
using namespace std;

void maxSubarraySum1(int *arr, int n){
    int maxSum = INT_MIN; /* intialising a variable with the lowest possible value of a integer so that we can compare it with the sum of the subarray which we have calucluated, INT_MIN aaigns the minimum value of int and if we use INT_MAX it assigns the maximum value of int. INT_MIN AND INT_MAX are predifined macros their work is stored in our predifined header files */

    for (int start = 0; start < n; start++) // this loop is used to go to the next line
    {

        for (int end = start; end < n; end++) // this is used to go to the next subarray of the same line
        {

            int currsum = 0;
            
            for (int i = start; i <= end; i++) // this is used to add the values of each elements of the subarray
            {
                currsum+=arr[i];
            }
            
            cout<<currsum<<", ";
            maxSum = max(maxSum, currsum); // max function is used to print the maximum value between two given values
        }
        
        cout<<endl;
    }
    
    cout<<"the maximum subarray sum is "<<maxSum<<endl;    
   
}

int main(){
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr)/sizeof(int);
    maxSubarraySum1(arr, n);
    return 0;
}