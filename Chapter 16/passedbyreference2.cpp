#include <iostream>
using namespace std;

/*Arrays are always passed by reference that means if we create another fuction and we are passing the array from a funtion to other funtion we can only pass its address not the whole array so if we change something in that function it will always reflect back to our original function*/

/*passing an array is equivalent to passing a pointer */

void anotherfunc(int arr2[], int a)
{
    *(arr2) = 1000; // arr2[0] = 1000
    *(arr2 + 1) = 500;
    arr2[2] = 400; // another way to change value

    for (int i = 0; i < a; i++)
    {
        cout << arr2[i] << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    anotherfunc(arr, n);
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    return 0;
}