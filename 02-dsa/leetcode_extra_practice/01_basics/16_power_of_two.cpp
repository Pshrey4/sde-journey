// Problem: Power of Two
// Link: https://leetcode.com/problems/power-of-two/?envType=problem-list-v2&envId=dxb72fe2

// Approach:
// Powers of 2 are obtained by repeatedly multiplying 1 by 2.
// Handle invalid cases where n <= 0.
// If n is 1, return true since 2⁰ = 1.
// If n is odd (except 1), it cannot be a power of 2.
// Start with temp = 1 and repeatedly multiply it by 2.
// Continue until temp becomes equal to or exceeds n.
// If temp equals n, then n is a power of 2.
// Otherwise, it is not a power of 2.

// Time Complexity: O(log n) (temp is doubled in each iteration)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {

        long temp = 1;

        if(n <= 0){

            return false;
            
        }
        else if(n == 1){

            return true;

        }
        else if(n % 2 != 0){

            return false;

        }
        else{

            while(temp != n && temp < n){

                temp *= 2;
            }

        }

        if(temp == n){
            
            return true;

        }
        else{

            return false;

        }       
        
    }
};