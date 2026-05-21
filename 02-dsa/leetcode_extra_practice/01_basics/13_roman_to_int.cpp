// Problem: Roman to integer
// Link: https://leetcode.com/problems/roman-to-integer/?envType=problem-list-v2&envId=dxb72fe2

#include<bits/stdc++.h>
using namespace std;

// Method 1: Brute force approach

// Approach:
// Traverse the Roman numeral string using two pointers.
// Explicitly check all special subtraction cases like IV, IX, XL, XC, CD, and CM.
// If a special case is found, add its corresponding value and move pointers by 2.
// Otherwise, add the normal Roman numeral value and move pointers by 1.
// Continue until the entire string is traversed.

// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int romanToInt(string s) {

        int num = 0;

        int n = s.size();

        int i = 0, j = i+1;

        while(i<n){

            if(s[i] == 'I' && s[j] == 'V'){
                num += 4;
                i += 2;
                j += 2;
            }
            else if(s[i] == 'I' && s[j] == 'X'){
                num += 9;
                i += 2;
                j += 2;
            }
            else if(s[i] == 'X' && s[j] == 'L'){
                num += 40;
                i += 2;
                j += 2;
            }
            else if(s[i] == 'X' && s[j] == 'C'){
                num += 90;
                i += 2;
                j += 2;
            }
            else if(s[i] == 'C' && s[j] == 'D'){
                num += 400;
                i += 2;
                j += 2;
            }
            else if(s[i] == 'C' && s[j] == 'M'){
                num += 900;
                i += 2;
                j += 2;
            }
            else if(s[i] == 'I'){
                num++;
                i++;
                j++;
            }
            else if(s[i] == 'V'){
                num += 5;
                i++;
                j++;
            }
            else if(s[i] == 'X'){
                num += 10;
                i++;
                j++;
            }
            else if(s[i] == 'L'){
                num += 50;
                i++;
                j++;
            }
            else if(s[i] == 'C'){
                num += 100;
                i++;
                j++;
            }
            else if(s[i] == 'D'){
                num += 500;
                i++; 
                j++;
            }
            else if(s[i] == 'M'){
                num += 1000;
                i++;
                j++;
            }

        }

        return num;

    }
};

// Method 2: Using map 

// Approach:
// Store Roman numeral values in a map.
// Traverse the string.
// If the current numeral value is smaller than the next numeral value,
// it represents a subtraction case, so subtract current from next and move by 2.
// Otherwise, add the current numeral value normally and move by 1.
// Continue until the entire string is traversed.

// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int romanToInt(string s) {

        map<char, int> romans = { {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000} };

        int n = s.length();

        int i = 0;

        int num = 0;

        while(i<n){

            if(i+1 < n && romans[s[i]] < romans[s[i+1]]){
                num += romans[s[i+1]] - romans[s[i]];
                i += 2;
            }
            else{
                num += romans[s[i]];
                i++;
            }

        }

        return num;

    }
};

