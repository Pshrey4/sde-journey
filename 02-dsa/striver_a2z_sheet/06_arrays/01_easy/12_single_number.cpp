// Problem: Single Number
// Link: https://leetcode.com/problems/single-number/description/

#include<bits/stdc++.h>
using namespace std;

// Method 1: Sorting

// Approach:
// Sort the array so that duplicate elements become adjacent.
// Traverse the sorted array in pairs using two pointers.
// If both elements of a pair are equal, move both pointers forward by 2.
// If they are different, the first element of the pair is the single number.
// If all pairs match, the last element is the single number.

// Time Complexity: O(n log n) (sorting dominates the traversal)
// Space Complexity: O(1) (ignoring the internal space used by sort)

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int n = nums.size();

        int i = 0, j = 1;

        while(i<n && j<n){

            if(nums[i] == nums[j]){

                i += 2;

                j += 2;

            }
            else{

                return nums[i];

            }

        }

        return nums[n-1];
        
    }
};

// Method 2: XOR

// Approach:
// XOR all elements of the array.
// Every duplicate number appears twice, and x ^ x = 0,
// so all duplicate elements cancel each other out.
// Since x ^ 0 = x, the remaining value is the number that appears once.

// Time Complexity: O(n) (single traversal of the array)
// Space Complexity: O(1) (only one variable is used)

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int single = 0;

        for(int num: nums){

            single ^= num;

        }

        return single;
        
    }
};

// Learnings:
// Sorting can group duplicate elements together, making pair-based comparison easy.
// XOR can be used to find a unique element when every other element appears exactly twice.
// Important XOR properties:
// x ^ x = 0
// x ^ 0 = x





