// Problem: Move Zeroes
// Link: https://leetcode.com/problems/move-zeroes/description/

#include<bits/stdc++.h>
using namespace std;

// Approach:
// Use two pointers to move all non-zero elements toward the beginning
// while preserving their relative order.
// Pointer i tracks the position of the next zero that can be replaced.
// Pointer j scans the array looking for the next non-zero element.
// When nums[i] is zero and nums[j] is non-zero, swap them and move i forward.
// Continue until j reaches the end of the array.
// The zeroes are automatically moved toward the end.

// Time Complexity: O(n) (single traversal of the array)
// Space Complexity: O(1) (in-place swapping)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int n = nums.size();

        if(n <= 1){ return; }

        int i = 0, j = 1;

        while(i<n-1 && j<n){

            if(nums[i]!=0){ i++; }
            else if(nums[i]==0 && nums[j]!=0){

                int temp = nums[i];

                nums[i] = nums[j];

                nums[j] = temp;

                i++;

            }

            j++;
            
        }
        
    }
};

// Alternative Approach:
// Store all non-zero elements in a temporary vector.
// Copy the non-zero elements back to the original array,
// then fill the remaining positions with zeroes.
// Time Complexity: O(n)
// Space Complexity: O(n)