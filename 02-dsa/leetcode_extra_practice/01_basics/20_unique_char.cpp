// Problem: First unique character in a string
// Link: https://leetcode.com/problems/first-unique-character-in-a-string/description/?envType=problem-list-v2&envId=dxb72fe2

// Approach:
// Use a frequency array of size 26 to count the occurrences of each character.
// Traverse the string and increment the frequency of every character.
// Traverse the string again from left to right.
// The first character whose frequency is 1 is the first non-repeating character.
// Return its index.
// If no unique character exists, return -1.

// Time Complexity: O(n) (two traversals of the string)
// Space Complexity: O(1) (frequency array size is fixed at 26)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {

        vector<int> frequency(26, 0);

        for(char ch: s){
            
            frequency[ch - 'a']++;

        }

        int n = s.size();

        for(int i=0; i<n; i++){

            if(frequency[s[i] - 'a'] == 1){

                return i;

            }

        }

        return -1;

    }
};

// Learning:
// When a problem involves character frequencies and the characters are limited
// to lowercase English letters, prefer array hashing (vector<int>(26))
// over unordered_map for a simpler and faster solution.