#include <iostream>
using namespace std;

int main()
{
    int n; // to take the size of array from the user and this feature will only work in latest ide
    cout << "enter the length of the array : ";
    cin >> n;

    int arr[n];

    cout << "enter the value of elements : ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // to take the elements of array from the user
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  "; // to print the vlues given by the user
    }

    return 0;
}