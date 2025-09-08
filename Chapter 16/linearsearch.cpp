#include <iostream>
using namespace std;

int linearSearch(int arr2[], int n, int key){

    for (int i = 0; i < n; i++)
    {
        if (arr2[i] == key)
        {
            return i;
        }
        
    }
       return -1; /* when in the whole array there is no such element availaible then return -1 so that it will give the confirmation that no index found */
}

int main(){
    int arr[] = {2, 4, 8, 10, 12, 14, 16};
    int n = sizeof(arr)/sizeof(int);
    int key = 10;

    cout<<linearSearch(arr, n, key);

    return 0;
}