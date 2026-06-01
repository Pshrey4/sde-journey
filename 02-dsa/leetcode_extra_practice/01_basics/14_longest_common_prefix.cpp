// Problem: Longest Common Prefix
// Link: https://leetcode.com/problems/longest-common-prefix/description/?envType=problem-list-v2&envId=dxb72fe2

// Approach:
// Sort the array of strings lexicographically.
// After sorting, the longest common prefix of all strings must be the same
// as the common prefix between the first and last strings.
// Compare characters of the first and last strings one by one.
// If characters match, add them to the common prefix.
// Stop when a mismatch occurs and return the prefix.
// If all compared characters match, return the accumulated prefix.

// Time Complexity: O(n log n * m) (sorting n strings, each comparison may take up to m characters)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string common = "";

        sort(strs.begin(), strs.end());

        int n = strs.size();

        string first = strs[0];

        string last = strs[n-1];

        int k = min(first.size(), last.size());

        for(int i=0; i<k; i++){
            
            if(first[i] != last[i]){

                return common;

            }

            common += first[i];

        }

        return common;
        
    }
};

// Learning: 
// For some string problems, sorting the array of strings can simplify comparisons.
// After sorting, useful information can often be obtained by comparing only
// the first and last strings instead of comparing every string.