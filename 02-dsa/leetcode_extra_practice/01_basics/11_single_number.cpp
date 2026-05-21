// Problem: Single Number
// Link: https://leetcode.com/problems/single-number/description/?envType=problem-list-v2&envId=dxb72fe2

#include<bits/stdc++.h>
using namespace std;

// Method 1: Brute Force Method

// Approach:
// Sort the array.
// Traverse each element and count its occurrences using another loop.
// If the count of an element becomes 1, return that element.
// The element appearing once is the required answer.

// Time Complexity: O(n²)
// Space Complexity: O(1)

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int n = nums.size();

        for(int i=0; i<n; i++){

            int count = 0;

            for(int j=0; j<n; j++){

                if(nums[i] == nums[j]){
                    count++;
                }

            }

            if(count == 1){
                return nums[i];
            }

        }

        return 0;
        
    }
};

// Method 2: Better Approach

// Approach:
// Sort the array so duplicate elements become adjacent.
// Traverse the array in pairs using two pointers.
// If nums[i] and nums[j] are equal, move both pointers by 2.
// If they are not equal, nums[i] is the single element.
// If no mismatch is found, the last element is the single number.

// Time Complexity: O(nlogn) (sorting takes O(nlogn) time)
// Space Complexity: O(1)

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int n = nums.size();

        int i = 0;

        int j = i + 1;

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