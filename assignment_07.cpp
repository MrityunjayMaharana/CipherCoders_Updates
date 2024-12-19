// assignment_07.cpp

/*
Questions : You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int maxProfit(vector<int> prices, int n) {
    int maxP = 0;       // Maximum profit initialized to 0
    int buyP = INT_MAX;
    int sellP = INT_MIN;    // Track the minimum and maximum buying price
    

    for (int i = 0; i < n; i++) {
        // Update the minimum price seen so far (buy price)
        buyP = min(buyP, prices[i]);

        // The selling price is simply the current price
        sellP = prices[i];

        // Update the maximum profit
        maxP = max(maxP, sellP - buyP);
    }

    // Return the maximum profit (no need for the ternary operator)
    return maxP;
}

int main() {
    int n;
    cin >> n;
    vector<int> prices(n);

    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    cout << maxProfit(prices, n) << endl;

    return 0;
}
