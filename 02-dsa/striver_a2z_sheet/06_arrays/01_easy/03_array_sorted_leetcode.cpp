// Problem: Check if Array is Sorted and Rotated
// Link: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

// Approach:
// Traverse the array and count the number of positions where
// the current element is greater than the next element.
// Such a position indicates a break in the sorted order.
// If more than one break exists, the array cannot be sorted and rotated.
// Finally, compare the last element with the first element.
// If the last element is greater than the first element,
// count it as another break.
// If the total number of breaks is at most one, return true;
// otherwise, return false.

// Time Complexity: O(n)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {

        int n = nums.size();

        if(n < 2) return true;

        int count = 0;

        for(int i=0; i<n-1; i++){

            if(nums[i] > nums[i+1]){
                count++;

                if(count > 1) return false;
            }

        }

        if(nums[0] < nums[n-1]) count++;

        return count <= 1;
        
    }
};

// Learning:
// A sorted and rotated array can have at most one point where
// the sorted order is broken.
// Counting these break points provides an optimal O(n) solution
// without explicitly rotating or sorting the array.

// Another Approach (Brute Force)

// Approach:
// Create a sorted copy of the original array.
// Try every possible rotation of the original array.
// For each rotation, compare it with the sorted array.
// If any rotation matches the sorted array, return true.
// If no rotation matches after checking all possible rotations,
// return false.

// Time Complexity: O(n²)
// Space Complexity: O(n)

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();

        // Create a sorted copy of the array
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());

        // Compare the original array with the sorted array
        for (int x=0; x < n; x++) {
            bool same = true;
            for (int i=0; i<n; i++) {
                if (nums[(x+i) % n] != sorted[i]) {
                    same = false;
                    break;
                }
            }
            if (same) {
                return true;
            }
        }

        return false;
    }
};