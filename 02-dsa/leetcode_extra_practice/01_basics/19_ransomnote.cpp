// Problem: Ransom Note
// Link: https://leetcode.com/problems/ransom-note/description/?envType=problem-list-v2&envId=dxb72fe2

#include<bits/stdc++.h>
using namespace std;

// Method 1: Using unordered map

// Approach:
// Use an unordered_map to store the frequency of each character in magazine.
// Traverse magazine and count the occurrences of every character.
// Traverse ransomNote and check whether the required character is available.
// If the frequency of a character becomes 0 before it is used, return false.
// Otherwise, decrease its frequency after using it.
// If all characters in ransomNote can be matched, return true.

// Time Complexity: O(n + m) (one traversal of ransomNote and one traversal of magazine)
// Space Complexity: O(1) (at most 26 lowercase English letters are stored)

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char, int> frequency;

        for(char ch: magazine){
            frequency[ch]++;
        }

        for(char ch: ransomNote){

            if(frequency[ch] == 0){

                return false;

            }

            frequency[ch]--;

        }

        return true;
       
    }
};

// Method 2: Using vector

// Approach:
// Use a frequency array of size 26 to store the count of each lowercase letter.
// Traverse magazine and increment the frequency of each character.
// Traverse ransomNote and check whether the required character is available.
// If the frequency of a character is 0, it means magazine does not have enough
// occurrences of that character, so return false.
// Otherwise, use one occurrence by decrementing its frequency.
// If all characters in ransomNote are successfully matched, return true.

// Time Complexity: O(n + m) (one traversal of ransomNote and one traversal of magazine)
// Space Complexity: O(1) (frequency array size is fixed at 26)

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        vector<int> frequency(26, 0);

        for(char ch: magazine){

            frequency[ch - 'a']++;

        }

        for(char ch: ransomNote){

            if(frequency[ch - 'a'] == 0){

                return false;

            }

            frequency[ch - 'a']--;

        }

        return true;
       
    }
};