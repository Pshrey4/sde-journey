// Problem: Find value of variables after performing operations
// Link: https://leetcode.com/problems/final-value-of-variable-after-performing-operations/?envType=problem-list-v2&envId=dxb72fe2

// Approach:
// Traverse each operation string in the array.
// If the operation is "++X" or "X++", increment X.
// Otherwise, decrement X.
// Return the final value of X after all operations.

// Time Complexity: O(n)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {

        int X = 0;

        for(string s: operations){
            
            if(s == "++X" || s == "X++"){
                X++;
            }
            else{
                X--;
            }

        }
        
        return X;
    }
};