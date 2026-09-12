// Problem: Maximum Subarray
// Link: https://leetcode.com/problems/maximum-subarray/description/

#include<bits/stdc++.h>
using namespace std;

// Method 1: Brute Force

// Approach:
// Generate every possible subarray using two nested loops.
// Maintain the sum of the current subarray while extending the right boundary.
// Update the maximum sum whenever a larger subarray sum is found.

// Time Complexity: O(n²) (all possible subarrays are considered)
// Space Complexity: O(1) (only constant extra variables are used)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n = nums.size();

        if(n < 2){ return nums[0]; }

        int maxSum = INT_MIN;

        for(int i=0; i<n; i++){

            int sum = 0;

            for(int j=i; j<n; j++){

                sum += nums[j];

                maxSum = max(maxSum, sum);

            }

        }

        return maxSum;       
    }
};

// Method 2: Kadane's Algorithm

// Approach:
// Maintain the sum of the current subarray and the maximum subarray sum found.
// If the current sum becomes negative, discard the current subarray by resetting
// the sum to 0, since a negative sum cannot help a future subarray achieve a larger sum.

// Time Complexity: O(n) (single traversal of the array)
// Space Complexity: O(1) (only constant extra variables are used)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n = nums.size();

        if(n == 1){
            return nums[0];
        }

        int sum = 0;

        int maxSum = INT_MIN;

        for(int i=0; i<n; i++){

            sum += nums[i];

            maxSum = max(maxSum, sum);

            if(sum < 0){
                sum = 0;
            }

        }

        return maxSum;
        
    }
};