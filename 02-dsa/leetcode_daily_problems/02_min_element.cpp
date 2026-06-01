// Problem: Minimum element after replacement with digit sum
// Date: 29th May 2026
// Link: https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/description/?envType=daily-question&envId=2026-05-29

// Approach:
// Traverse each element of the array.
// For every number, calculate the sum of its digits.
// Replace the original number with its digit sum.
// After processing all elements, traverse the array again
// and find the minimum element.
// Return the minimum digit-sum value.

// Time Complexity: O(n * d) (d is the number of digits in each number)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minElement(vector<int>& nums) {

        int n = nums.size();

        for(int i=0; i<n; i++){
            int sum = 0;

            while(nums[i]>0){
                int digit = nums[i] % 10;
                sum += digit;
                nums[i] = nums[i] / 10;
            }

            nums[i] = sum;
        }

        int minimum = nums[0];

        for(int i=0; i<n; i++){
            if(nums[i] < minimum){
                minimum = nums[i];
            }
        }

        return minimum;
        
    }
};