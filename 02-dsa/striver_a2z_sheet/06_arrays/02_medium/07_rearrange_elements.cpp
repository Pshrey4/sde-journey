// Problem: Rearrange Array Elements by Sign
// Link: https://leetcode.com/problems/rearrange-array-elements-by-sign/description/

#include<bits/stdc++.h>
using namespace std;

// Approach:
// Create a result array and maintain two positions: j for positive elements (0, 2, 4, ...), k for negative elements (1, 3, 5, ...).
// Traverse the input array and place each positive element at the next even index and each negative element at the next odd index.

// Time Complexity: O(n) (single traversal of the array)
// Space Complexity: O(n) (result array of size n is used) 

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int n = nums.size();

        vector<int> rearranged(n);

        int j = 0, k = 1;

        for(int i=0; i<n; i++){

            if(nums[i] > 0){
                rearranged[j] = nums[i];
                j += 2;
            }
            else{
                rearranged[k] = nums[i];
                k += 2;
            }

        }

        return rearranged;

        
    }
};