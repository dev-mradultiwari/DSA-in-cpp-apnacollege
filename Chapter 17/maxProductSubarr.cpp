#include <iostream>
using namespace std;

void maxProduct(int *arr, int n){
    int maxProd = arr[0];
    int maxi = arr[0];
    int mini = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i]<0)
        {
            swap(maxi, mini);
        }
        maxi = max(maxi*arr[i], arr[i]);
        mini = min(mini*arr[i], arr[i]);

        maxProd = max(maxi, maxProd);
    }
    cout<<"The maximum Product of Subarray is "<<maxProd<<endl;
}

int main(){
    int arr[] = {2, 3, -2, 4};
    int n = sizeof(arr)/sizeof(int);
    maxProduct(arr, n);
    return 0;
}