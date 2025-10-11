#include <iostream>
using namespace std;

/* this is same as binary search but used for the large numbers which int cannot store so we create a modified formula */

int firstBadVersion(int arr[], int n, int key){
    int strt = 0, end = n-1;
    while (strt<=end)
    {
        int mid = strt + (end-strt)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else if(arr[mid<key])
            strt = mid+1;
    }
    return -1;

}

int main(){
    int arr[] = {2, 4, 8, 10, 12, 14, 16};
    int n = sizeof(arr)/sizeof(int);
    int key = 12;
    cout<<firstBadVersion(arr, n, key)<<endl;
}