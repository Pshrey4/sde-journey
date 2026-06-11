// Problem: Reverse String
// Link: https://leetcode.com/problems/reverse-string/description/?envType=problem-list-v2&envId=dxb72fe2

// Approach:
// Use two pointers, one at the beginning and one at the end of the vector.
// Swap the characters at both pointers.
// Move the left pointer forward and the right pointer backward.
// Continue until the pointers meet or cross.
// This reverses the string in-place without using extra space.

// Time Complexity: O(n) (each character is visited at most once)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {

        int n = s.size();

        int i = 0;

        int j = n - 1;

        while(i < j){
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
        
    }
};