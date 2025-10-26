#include <iostream>
using namespace std;

void maxProfit(int *prices, int n){
    int bestbuy[100000]; /* this is the constraint given in the question as the maximum no of best buy days can be 1 lakh and we cannot wtite bestBuy[n], because this is not the main function*/
    bestbuy[0] = INT_MAX;

    for (int i = 1; i < n; i++)
    {
        bestbuy[i] = min(bestbuy[i-1], prices[i-1]);
    }

    int maxProfit = 0;
    for (int i = 0; i < n; i++)
    {
        int currProfit = prices[i]-bestbuy[i];
        maxProfit = max(maxProfit, currProfit);
    }
    cout<<"MAXIMUM PROFIT CAN BE = "<<maxProfit<<endl;

    // time complexity for this will be O(n+n) = O(2n) = O(n)
}

int main(){
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices)/sizeof(int);
    maxProfit(prices, n);
    return 0;
}