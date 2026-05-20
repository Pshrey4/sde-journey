// Problem: To Lower Case
// Link: https://leetcode.com/problems/to-lower-case/?envType=problem-list-v2&envId=dxb72fe2

// Approach:
// Traverse each character of the string.
// Check if the character is an uppercase letter.
// If uppercase, convert it to lowercase by adding 32 to its ASCII value.
// Return the modified string.

// Time Complexity: O(n)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string toLowerCase(string s) {

        int l = s.length();

        for(int i=0; i<l; i++){

            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = s[i] + 32;
            }
            
        }
        
        return s;
    }
};