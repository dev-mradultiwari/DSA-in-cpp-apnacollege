#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    // for first pyramid
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++) // for spaces
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) // for stars
        {
            cout << "*";
        }

        cout << endl;
    }

    // second pyramid - in thid pyramid we will take the outer loop from n to 1 just to ease the calculation of inner loop of the stars
    for (int a = n; a >= 1; a--)
    {
        for (int b = 1; b <= n - a; b++) //for spaces
        {
            cout << " ";
        }

        for (int c = 1; c <= 2 * a - 1; c++) //for stars
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}