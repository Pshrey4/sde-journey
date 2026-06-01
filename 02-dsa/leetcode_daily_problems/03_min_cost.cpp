// Problem: Minimum cost of buying candies with discount
// Date: 1st June 2026
// Link: https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/?envType=daily-question&envId=2026-06-01

// Approach:
// Sort the array in descending order so that the most expensive candies come first.
// For every group of three candies:
// - Pay for the two most expensive candies.
// - Get the third candy for free.
// Traverse the sorted array and add the cost of only the first two candies
// from each group of three.
// Return the minimum total cost.

// Time Complexity: O(n log n)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumCost(vector<int>& cost) {

        sort(cost.begin(), cost.end(), greater<int>());

        int n = cost.size();

        int sum = 0;

        int i = 0;

        int j = i + 1;

        while(i<n){

            if(j>=n){
                sum += cost[i];
                i++;
            }
            else{
                sum += cost[i] + cost[j];
                i += 3;
                j += 3;
            }

        }

        return sum;   
      
    }
};