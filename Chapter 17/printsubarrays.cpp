#include <iostream>
using namespace std;

// precaution - do not go on the names of identifiers in the loop if unable to understand, just dry run the code

void printSubarray(int *arr, int n){
    for (int start = 0; start < n; start++)     // gets us to the next line - outer loop
    {

        for (int end = start; end < n; end++) // takes us to the next subarray of each lines - inner loop
        {

            for (int i = start; i <= end ; i++) //prints each subarray elements
            {
                cout<<arr[i];
            }
            
            cout<<", ";
        }

        cout<<endl;
    }
    
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    printSubarray(arr, n);
    return 0;
}