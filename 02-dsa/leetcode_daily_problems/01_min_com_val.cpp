// Problem: Minimum Common Value
// Date: 19th May 2026
// Link: https://leetcode.com/problems/minimum-common-value/description/?envType=daily-question&envId=2026-05-19

// Approach:
// Traverse each element of nums1 using a loop.
// For every element in nums1, traverse nums2 and search for a match.
// Since arrays are sorted, stop searching in nums2 if nums2[j] becomes greater than nums1[i].
// If a common element is found, store it and break the loops.
// If no common element exists, return -1.

// Time Complexity: O(n * m)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {

        int common = 0;

        for(int i=0; i<nums1.size(); i++){

            for(int j=0; j<nums2.size(); j++){

                if(nums2[j]>nums1[i]){
                    break;
                }
                else{
                    if(nums2[j]==nums1[i]){
                        common = nums2[j];
                        break;
                    }
                }             
            }

            if(common>0){
                break;
            }

        }

        if(common == 0){
            return -1;
        }
        else{
            return common;
        }
              
    }
};

// Optimal solution for this problem is using two pointer and other concepts
// So I will come back to this after covering those concepts
// For now this is the brute force solution