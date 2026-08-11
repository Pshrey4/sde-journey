// Problem: Maximum Consecutive Ones
// Link: https://leetcode.com/problems/max-consecutive-ones/

#include<bits/stdc++.h>
using namespace std;

// Method 1: Using Extra Vector

// Approach:
// Traverse the array and count consecutive 1s.
// Whenever a 0 is encountered, store the current count in a vector
// and reset the count to 0.
// After the traversal, store the final count as well.
// Traverse the vector of counts and find the maximum consecutive count.

// Time Complexity: O(n) (two linear traversals)
// Space Complexity: O(n) (vector stores the consecutive-one counts)

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int n = nums.size();

        vector<int> ones;

        int no = 0;

        for(int i=0; i<n; i++){
            if(nums[i] == 1){
                no++;
            }
            else{
                ones.push_back(no);
                no = 0;
            }
        }

        ones.push_back(no);

        int max = 0;

        int s = ones.size();

        for(int i=0; i<s; i++){
            if(max<ones[i]){
                max = ones[i];
            }
        }

        return max;
    }
};

// Method 2: Single Traversal

// Approach:
// Traverse the array while maintaining the count of consecutive 1s.
// If the current element is 1, increment the count.
// If the current element is 0, compare the current count with the maximum
// count found so far and reset the count to 0.
// After the traversal, check the final count once more because the longest
// sequence of 1s may end at the last element.

// Time Complexity: O(n) (single traversal of the array)
// Space Complexity: O(1) (only constant extra variables are used)

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int n = nums.size();

        int max = 0;

        int ones = 0;

        for(int i=0; i<n; i++){

            if(nums[i] == 1){

                ones++;

            }
            else{
            
                if(ones > max){

                    max = ones;

                }

                ones = 0;                
                
            }

        }

        if(ones > max){

            max = ones;

        }

        return max;
    }
};