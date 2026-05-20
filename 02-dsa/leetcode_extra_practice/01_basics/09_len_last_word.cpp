// Problem: Length of last word
// Link: https://leetcode.com/problems/length-of-last-word/?envType=problem-list-v2&envId=dxb72fe2

// Approach:
// Start traversing the string from the end.
// Skip all trailing spaces.
// Count characters until a space or beginning of string is reached.
// Return the count of the last word length.

// Time Complexity: O(n)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {

        int length = 0;

        int i = s.length() - 1;

        // Skip trailing spaces
        while(i >= 0 && s[i] == ' '){
            i--;
        }

        // Count characters of last word
        while(i >= 0 && s[i] != ' '){
            length++;
            i--;
        }

        return length;
    }
};