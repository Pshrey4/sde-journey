// Problem: Shuffle string
// Link: https://leetcode.com/problems/shuffle-string/?envType=problem-list-v2&envId=dxb72fe2

// Approach 1:
// Store each character of the string in a map using indices[i] as the key.
// Since map stores keys in sorted order, characters automatically get arranged
// according to their correct indices.
// Traverse the map and build the shuffled string.
// Return the final shuffled string.
// Time Complexity: O(n log n)
// Space Complexity: O(n)

// Approach:
// Create an empty string of same length as the input string.
// Traverse the string and place each character directly at its target index
// using indices[i].
// Return the final shuffled string.
// Time Complexity: O(n)
// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

// Method 1: Using map
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {

        map<int, char> mp;

        for(int i=0; i<s.length(); i++){
            mp[indices[i]] = s[i];
        }
        
        string shuffle = "";

        for(int i=0; i<mp.size(); i++){
            shuffle += mp[i];
        }

        return shuffle;
    }
};

// Method 2: Using for loop only
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {

        int l = s.size();

        string shuffle(l, ' ');

        for(int i=0; i<l; i++){
            shuffle[indices[i]] = s[i];
        }

        return shuffle;
    }
};