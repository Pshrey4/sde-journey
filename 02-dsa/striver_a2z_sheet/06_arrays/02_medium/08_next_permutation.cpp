// Problem: Next Permutation
// Link: https://leetcode.com/problems/next-permutation/description/

#include<bits/stdc++.h>
using namespace std;

// Approach:
// Find the first index from the right where nums[i] < nums[i+1].
// This index is the pivot.
// If no such index exists, the array is in descending order, so reverse the entire array to obtain the smallest permutation.
// Otherwise, find the smallest element greater than the pivot from the right and swap it with the pivot.
// Finally, reverse the portion after the pivot to obtain the smallest possible suffix and hence the next lexicographical permutation.

// Time Complexity: O(n) (multiple linear traversals/reversal of the array)
// Space Complexity: O(1) (only constant extra variables are used)

class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int n = nums.size();
        
        int index = -1;

        for(int i=n-2; i>=0; i--){

            if(nums[i] < nums[i+1]){
                index = i;
                break;
            }

        }

        if(index == -1){
            reverse(nums.begin(), nums.end());
            return;
        }

        for(int i=n-1; i>=index; i--){

            if(nums[i] > nums[index]){
                swap(nums[i], nums[index]);
                break;
            }

        }

        reverse(nums.begin() + (index+1), nums.end());

    }
};