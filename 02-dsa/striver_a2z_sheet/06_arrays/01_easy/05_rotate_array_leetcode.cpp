// Problem: Rotate Array
// Link: https://leetcode.com/problems/rotate-array/

#include<bits/stdc++.h>
using namespace std;

// Method 1: Brute Force

// Approach:
// Rotate the array to the right by one position repeatedly.
// In each rotation, store the last element temporarily,
// shift all remaining elements one position to the right,
// and place the stored element at the beginning.
// Repeat this process k times.

// Time Complexity: O(n × k) (each of the k rotations takes O(n))
// Space Complexity: O(1)

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();

        while(k != 0){

            int last = nums[n-1];

            for(int i=n-1; i>0; i--){

                nums[i] = nums[i-1];

            }

            nums[0] = last;

            k--;

        }        
        
    }
};

// Method 2: Using Another Array

// Approach:
// Create a new array of the same size.
// For each element at index i, calculate its new position as (i + k) % n.
// Place the element directly at its rotated position in the new array.
// Copy the rotated array back into the original array.

// Time Complexity: O(n) (each element is processed once)
// Space Complexity: O(n) (extra array is used)

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();

        k = k % n;

        vector<int> rotated(n);

        for(int i=0; i<n; i++){

            int j = (i + k) % n;

            rotated[j] = nums[i];

        }

        for(int i=0; i<n; i++){

            nums[i] = rotated[i];

        }
        
    }
};

// Method 3: Reversing Part of Array (Optimal Approach)

// Approach:
// First, reduce k using k % n to handle cases where k is greater than n.
// Reverse the entire array.
// Reverse the first k elements.
// Reverse the remaining n-k elements.
// This produces the required right rotation while modifying the array in-place.

// Time Complexity: O(n) (three reversals each take linear time)
// Space Complexity: O(1) (reversal is performed in-place)

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        k = k % nums.size();

        reverse(nums.begin(), nums.end());

        reverse(nums.begin(), nums.begin() + k);

        reverse(nums.begin() + k, nums.end());
        
    }
};


