// Problem: Best Time to Buy and Sell Stock
// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

#include<bits/stdc++.h>
using namespace std;

// Method 1: Brute Force

// Approach:
// Try every possible pair of buy and sell days.
// For each pair, calculate the profit by subtracting the buying price
// from the selling price and keep track of the maximum profit.
// If no positive profit is possible, return 0.

// Time Complexity: O(n²) (checking all possible buy-sell pairs)
// Space Complexity: O(1) (only constant extra variables are used)

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();

        int maxProfit = INT_MIN;

        for(int i=0; i<n; i++){

            for(int j=i+1; j<n; j++){

                int profit = prices[j] - prices[i];

                maxProfit = max(maxProfit, profit);

            }

        }

        if(maxProfit < 0){
            return 0;
        }

        return maxProfit;
    }
};


// Method 2: One-Pass Approach

// Approach:
// Traverse the array while maintaining the minimum price seen so far.
// For each day, calculate the profit by selling at the current price and buying at the minimum price seen so far.
// Update the maximum profit and minimum price while traversing the array.

// Time Complexity: O(n) (single traversal of the array)
// Space Complexity: O(1) (only constant extra variables are used)

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();

        int minPrice = prices[0];

        int maxProfit = 0;

        for(int i=1; i<n; i++){

            int profit = prices[i] - minPrice;

            maxProfit = max(maxProfit, profit);

            minPrice = min(minPrice, prices[i]);

        }

        return maxProfit;  
        
    }
};