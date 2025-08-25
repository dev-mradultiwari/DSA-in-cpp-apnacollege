#include <iostream>
// #include <cmath> - to add sqrt
using namespace std;


int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;

    bool isprime = true; // at start we consider that the no entered by the user is prime

    if (n < 1)
    {
        isprime = false; // if the no is less then 1 than its not a prime no
    }
    else
    { // in else we check if the no is not less than one than is it really a prime no
        for (int i = 2; i * i <= n; i++)    //we do not have to check till n-1 bcs at the midway point of factor the factors start repeating
        // for (int i = 2; i <= sqrt(n); i++) - same way
        {
            if (n % i == 0)
            {
                isprime = false;
                break;
            }
            
        }
    }
    if (isprime)
    {
        cout << "the no is prime";
    }
    else
    {
        cout << "the no is not prime";
    }

    return 0;
}