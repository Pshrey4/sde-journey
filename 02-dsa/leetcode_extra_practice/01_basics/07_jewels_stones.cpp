// Problem: Jewels and Stones
// Link: https://leetcode.com/problems/jewels-and-stones/?envType=problem-list-v2&envId=dxb72fe2

// Approach:
// Traverse each character in the jewels string.
// For every jewel character, traverse the stones string.
// If a stone matches the current jewel, increment the count.
// Return the total number of matching stones.

// Time Complexity: O(j * s) (j is length of jewels string and s is length of stones string)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

// Method 1: Using nested for loop
// Here time complexity will be O(j * s)
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

        int j = jewels.length();

        int s = stones.length();

        int count = 0;

        for(int i=0; i<j; i++){

            for(int k=0; k<s; k++){

                if(jewels[i] == stones[k]){
                    count++;
                }

            }

        }

        return count;
    }
};

// Method 2: Using unordered set
// Here time complexity will be O(j + s)
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

        unordered_set<char> jewel;

        for(char ch: jewels){
            jewel.insert(ch);
        }

        int count = 0;

        for(char ch: stones){

            if(jewel.count(ch)){
                count++;
            }

        }

        return count;
    }
};