// Problem: Fibonacci Number
// Link: https://leetcode.com/problems/fibonacci-number/description/

// Approach:
// Handle the base cases where n is 0 or 1.
// Create an array to store Fibonacci numbers.
// Initialize the first two Fibonacci numbers as 0 and 1.
// Use a loop to calculate each Fibonacci number using the previous two values.

// Time Complexity: O(n)
// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fib(int n) {

        // Base Case
        if(n<=1){
            return n;
        }

        // Method: Recurrsion
        // return fib(n-1) + fib(n-2);     

        // Method: Array
        int fib_arr[n+1];
        fib_arr[0] = 0;
        fib_arr[1] = 1;
        for(int i=2; i<=n; i++){
            fib_arr[i] = fib_arr[i-1] + fib_arr[i-2];
        }
        return fib_arr[n];          
    }
};