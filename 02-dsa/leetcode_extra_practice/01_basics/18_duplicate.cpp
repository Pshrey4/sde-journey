// Problem: Contains Duplicate
// Link: https://leetcode.com/problems/contains-duplicate/description/?envType=problem-list-v2&envId=dxb72fe2

#include<bits/stdc++.h>
using namespace std;

// Method 1: Sorting and using two pointers

// Approach:
// Sort the array so that duplicate elements become adjacent.
// Traverse the sorted array using two pointers.
// Compare each element with its next element.
// If two adjacent elements are equal, a duplicate exists.
// If no equal adjacent elements are found, return false.

// Time Complexity: O(n log n) (sorting the array dominates the runtime)
// Space Complexity: O(1)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        int n = nums.size();

        sort(nums.begin(), nums.end());

        int i = 0;

        int j = i + 1;

        while(i<n && j<n){

            if(nums[i] == nums[j]){
                
                return true;

            }

            i++;
            j++;
        }

        return false;       
        
    }
};

// Method 2: Unordered set

// Approach:
// Use an unordered_set to keep track of elements already seen.
// Traverse the array one element at a time.
// If the current element already exists in the set, a duplicate is found.
// Otherwise, insert the element into the set.
// If the traversal completes without finding a duplicate, return false.

// Time Complexity: O(n) (average O(1) lookup and insertion for each element)
// Space Complexity: O(n)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {      

        unordered_set<int> duplicate;

        for(int i: nums){

            if(duplicate.count(i)){
                return true;
            }

            duplicate.insert(i);
        }

        return false;
        
    }
};