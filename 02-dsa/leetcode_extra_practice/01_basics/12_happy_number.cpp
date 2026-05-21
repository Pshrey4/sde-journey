// Problem: Happy Number
// Link: https://leetcode.com/problems/happy-number/?envType=problem-list-v2&envId=dxb72fe2

#include<bits/stdc++.h>
using namespace std;

// Method 1: Using Vector

// Approach:
// Repeatedly calculate the sum of squares of digits of the number.
// Store each generated sum in a vector.
// Before adding a new sum, check whether it already exists in the vector.
// If sum becomes 1, return true.
// If a sum repeats, a cycle is formed, so return false.

// Time Complexity: O(n²) (Vector traversal for checking repeated sums takes O(n))
// Space Complexity: O(n)

class Solution {
public:
    bool isHappy(int n) {

    int sum = 0;

    vector<int> previous_sum;

    while(n>0){    
        int digit = n % 10;

        sum += pow(digit, 2);

        n /= 10;

        if(sum == 1 && n == 0){
            return true;
        }
        else if(n == 0){

            for(int i=0; i<previous_sum.size(); i++){
                if(sum == previous_sum[i]){
                    return false;
                }
            }

            n = sum;

            previous_sum.push_back(sum);

            sum = 0;

        }
    }

    return false;
        
    }
};

// Method 2: Using unordered set

// Approach:
// Repeatedly calculate the sum of squares of digits of the number.
// Store each generated sum in an unordered_set.
// Before inserting a new sum, check whether it already exists in the set.
// If sum becomes 1, return true.
// If a sum repeats, a cycle is detected, so return false.

// Time Complexity: O(log n)
// Space Complexity: O(log n)

class Solution {
public:
    bool isHappy(int n) {

    int sum = 0;

    unordered_set<int> previous_sum;

    while(n>0){    
        int digit = n % 10;

        sum += pow(digit, 2);

        n /= 10;

        if(sum == 1 && n == 0){
            return true;
        }
        else if(n == 0){

            if(previous_sum.count(sum)){
                return false;
            }

            n = sum;

            previous_sum.insert(sum);

            sum = 0;

        }
    }

    return false;
        
    }
};

// Optimal approach for this problem is using Floyd’s Cycle Detection Algorithm
// (Slow and Fast Pointer)
// I have not covered these concepts yet so will come back to this problem again