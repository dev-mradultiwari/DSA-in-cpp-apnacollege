#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 1; i <= n; i++) // for upper half
    {
        for (int j = 1; j <= i; j++) // stars
        {
            cout << "*";
        }

        for (int k = 1; k <= 2 * (n - i); k++) // spaces
        {
            cout << " ";
        }

        for (int l = 1; l <= i; l++) // stars
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = n; i >= 1; i--) // second half - we will run the loop from n to 1 to ease the calc for stars and spaces
    {
        for (int j = 1; j <= i; j++) //stars
        {
            cout << "*";
        }

        for (int k = 1; k <= 2 * (n - i); k++) //spaces
        {
            cout << " ";
        }

        for (int l = 1; l <= i; l++) //stars
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}