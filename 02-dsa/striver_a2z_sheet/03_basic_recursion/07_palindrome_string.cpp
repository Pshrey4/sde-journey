// Problem: Valid Palindrome
// Link: https://leetcode.com/problems/valid-palindrome/description/

// Approach:
// Traverse the string and keep only alphanumeric characters.
// Convert uppercase letters to lowercase manually.
// Store the cleaned characters in a new string.
// Use two pointers from start and end to check whether the cleaned string is a palindrome.

// Time Complexity: O(n)
// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {

        string clean = "";

        for(char ch:s){
            if(
                (ch >= 'A' && ch <= 'Z') ||
                (ch >= 'a' && ch <= 'z') ||
                (ch >= '0' && ch <= '9')
            ){
                //convert uppercase to lowercase
                if(ch >= 'A' && ch <= 'Z'){
                    ch = ch + 32;
                }

                clean += ch;
            }
        }

        int left = 0;

        int right = clean.length() - 1;

        while(left<right){

            if(clean[left] != clean[right]){
                return false;
            }

            left++;

            right--;
        }

        return true;
        
    }
};