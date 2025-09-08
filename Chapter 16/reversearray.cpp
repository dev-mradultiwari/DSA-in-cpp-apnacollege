#include <iostream>
using namespace std;

// with spaces - that means we are cretaing extra memory i.e. copyofarr 
 
int main(){
    int arr[] = {5, 4, 9, 2, 1};
    int n = sizeof(arr)/sizeof(int);

    int copyarr[n];

    for (int i = 0; i < n; i++)
    {
        int j = n-i-1;
        copyarr[i] = arr[j];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = copyarr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
      
    

    return 0;
}