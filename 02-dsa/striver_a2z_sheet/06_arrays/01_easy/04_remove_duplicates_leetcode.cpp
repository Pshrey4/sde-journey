// Problem: Remove Duplicates from Sorted Array
// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

// Approach:
// Use two pointers to remove duplicates in-place.
// Keep i at the position of the last unique element.
// Use j to traverse the array.
// If nums[j] is different from nums[i], move i forward
// and copy nums[j] to nums[i].
// Continue until j reaches the end of the array.
// The first i + 1 positions contain all unique elements.
// Return i + 1 as the number of unique elements.

// Time Complexity: O(n) (single traversal of the array)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();

        if(n==0 || n==1){ return n; }

        int i = 0, j = 1;

        while(j<n){

            if(nums[j] != nums[i]){

                i++;

                nums[i] = nums[j];

            }

            j++;

        }

        return i+1;
        
    }
};

// Learning:
// Since the array is sorted, duplicate elements are adjacent.
// This allows the duplicates to be removed using two pointers
// without using an extra data structure.