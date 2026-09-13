// Problem: Leaders in an Array
// Link: https://takeuforward.org/plus/dsa/problems/leaders-in-an-array?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;

// Method 1: Brute Force

// Approach:
// For each element, check all elements to its right.
// If no element greater than the current element exists on its right, the current element is a leader.
// Store all leaders and reverse the result at the end to restore their original left-to-right order.

// Time Complexity: O(n²) (for each element, the elements to its right are checked)
// Space Complexity: O(n) (result vector stores the leaders)

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {

        int n = nums.size();

        vector<int> leaders;

        for(int i=n-1; i>=0; i--){

            int flag = 0;

            for(int j=n-1; j>=i; j--){

                if(nums[j] > nums[i]){
                    flag = 1;
                    break;
                }

            }

            if(flag == 0){
                leaders.push_back(nums[i]);
            }

        }

        reverse(leaders.begin(), leaders.end());

        return leaders;      
    }
};

// Method 2: Optimal Solution

// Approach:
// Traverse the array from right to left while maintaining the greatest element seen so far.
// The last element is always a leader.
// If the current element is greater than the greatest element seen so far, it is a leader, so update the greatest element.
// Reverse the result at the end to restore left-to-right order.

// Time Complexity: O(n) (single traversal plus reversal of the result)
// Space Complexity: O(n) (result vector stores the leaders)

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {

        int n = nums.size();

        vector<int> leaders;

        int lastLeader = nums[n-1];

        leaders.push_back(lastLeader);

        for(int i=n-2; i>=0; i--){

            if(nums[i] > lastLeader){
                lastLeader = nums[i];
                leaders.push_back(nums[i]);
            }                  

        }

        reverse(leaders.begin(), leaders.end());

        return leaders;      
    }
};