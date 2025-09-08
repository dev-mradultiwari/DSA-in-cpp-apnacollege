#include <iostream>
using namespace std;

int binSearch(int arr2[], int n, int key)
{
    int st = 0, end = n - 1;

    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (key == arr2[mid])   // key found
        {
            return mid;
        }
        else if (key > arr2[mid])   // going to second half
        {
            st = mid + 1;
        }
        else   // going to first half
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{

    int arr[] = {2, 4, 8, 10, 12, 14, 18};
    int n = sizeof(arr) / sizeof(int);
    int key = 12;
    cout << binSearch(arr, n, key);
    return 0;
}