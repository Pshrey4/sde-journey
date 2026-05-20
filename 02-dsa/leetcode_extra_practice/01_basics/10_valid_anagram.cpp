// Problem: Valid anagram
// Link: https://leetcode.com/problems/valid-anagram/?envType=problem-list-v2&envId=dxb72fe2

#include<bits/stdc++.h>
using namespace std;

// Method 1: Brute Force Method

// Approach:
// First check if both strings have equal lengths.
// Sort both strings.
// Traverse both sorted strings and compare characters one by one.
// If any character differs, return false.
// Otherwise, return true.

// Time Complexity: O(n log n) (Sorting both strings takes O(n log n))
// Space Complexity: O(1)

class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()){
            return false;
        }
        else{
            sort(s.begin(), s.end());

            sort(t.begin(), t.end());

            for(int i=0; i<s.length(); i++){
                if(s[i] != t[i]){
                    return false;
                }
            }

        }

        return true;
        
    }
};

// Method 2: Using unordered map

// Approach:
// First check if both strings have equal lengths.
// Use an unordered_map to store frequency of characters from string s.
// Traverse string t and decrease frequency of each character.
// Finally, check whether all frequencies are zero.
// If all are zero, strings are anagrams.

// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()){
            return false;
        }

        unordered_map<char, int> mp;

        // Count frequencies from s
        for(char ch : s){
            mp[ch]++;
        }

        // Reduce frequencies using t
        for(char ch : t){
            mp[ch]--;
        }

        // Check frequencies
        for(auto i : mp){

            if(i.second != 0){
                return false;
            }
        }

        return true;
        
    }
};

// Method 3: Using vector

// Approach:
// First check if both strings have equal lengths.
// Create a frequency vector of size 26 initialized with 0.
// Traverse string s and increment frequency using character indexing.
// Traverse string t and decrement frequency.
// If every frequency becomes zero, strings are anagrams.

// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()){
            return false;
        }

        vector<int> freq(26, 0);

        for(char ch : s){
            freq[ch - 'a']++;
        }

        for(char ch : t){
            freq[ch - 'a']--;
        }

        for(int count : freq){

            if(count != 0){
                return false;
            }
        }

        return true;
        
    }
};