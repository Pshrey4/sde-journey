// Problem: Word Pattern
// Link: https://leetcode.com/problems/word-pattern/description/?envType=problem-list-v2&envId=dxb72fe2

// Approach:
// Split the input string into individual words using spaces as separators.
// If the number of words and the number of pattern characters are different,
// return false.
// Use one unordered_map to store character → word mapping.
// Use another unordered_map to store word → character mapping.
// Traverse both pattern and words simultaneously.
// If an existing mapping conflicts with the current character or word,
// return false.
// Otherwise, create the mapping.
// If all mappings remain consistent, return true.

// Time Complexity: O(n + m) (splitting the string and processing all pattern-word pairs)
// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {

        vector<string> words;

        int n = s.size();

        string temp = "";

        for(int i=0; i<n; i++){

            if(s[i] == ' '){

                words.push_back(temp);
                temp = "";

            }
            else{

                temp += s[i];

            }

        }

        words.push_back(temp);

        if(pattern.size() != words.size()){

            return false;

        }

        unordered_map<char, string> ch_st;

        unordered_map<string, char> st_ch;

        for(int i=0; i<pattern.size(); i++){

            char ch = pattern[i];

            string word = words[i];

            if(ch_st.count(ch)){

                if(ch_st[ch] != word){

                    return false;

                }
                
            }
            else{

                ch_st[ch] = word;
            
            }

            if(st_ch.count(word)){

                if(st_ch[word] != ch){

                    return false;

                }

            }
            else{

                st_ch[word] = ch;

            }   

        }

        return true;
        
    }
};

// Learning:
// When a problem requires a one-to-one (bijection) relationship,
// use two hash maps:
// 1. key → value
// 2. value → key
// This helps validate the mapping in both directions.