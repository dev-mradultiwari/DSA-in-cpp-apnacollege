#include <iostream>
using namespace std;

int main()
{
    float c1;
    float c2;
    float c3;
    cout << "Enter the cost of item 1 :";
    cin >> c1;
    cout << "Enter the cost of item 2 :";
    cin >> c2;
    cout << "Enter the cost of item 3 :";
    cin >> c3;

    float tcost = (c1 + c2 + c3) + (c1 + c2 + c3) * 0.18;
    cout << "Your total bill amount is " << tcost;
    return 0;
}